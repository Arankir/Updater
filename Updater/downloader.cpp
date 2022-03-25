#include "downloader.h"

Downloader::Downloader(const QString &aUrl, const QString &aFile, QObject *aParent): QObject(aParent), manager_(new QNetworkAccessManager()),
url_(aUrl), file_(aFile) {
    connect(manager_, &QNetworkAccessManager::finished, this, &Downloader::onResult);
}

Downloader::~Downloader() {
    delete manager_;
}

void Downloader::getData() {
    QUrl url(url_);
    QNetworkRequest request;
    request.setUrl(url);
    manager_->get(request);
}

void Downloader::onResult(QNetworkReply *reply) {
    if (reply->error()) {
        qDebug() << "Error" << reply->errorString();
    } else {
        QFile *file = new QFile(file_);
        if (file->open(QFile::WriteOnly)) {
            file->write(reply->readAll());
            file->close();
            qDebug() << "Completed";
            emit s_onReady();
        }
    }
}
