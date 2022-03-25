#ifndef DOWNLOADER_H
#define DOWNLOADER_H

#include <QObject>
#include <QtNetwork/QNetworkAccessManager>
#include <QtNetwork/QNetworkRequest>
#include <QtNetwork/QNetworkReply>
#include <QFile>
#include <QUrl>
#include <QDebug>

class Downloader : public QObject {
    Q_OBJECT
public:
    explicit Downloader(const QString &url, const QString &file, QObject *parent = nullptr);
    ~Downloader();

signals:
    void s_onReady();

public slots:
    void getData();
    void onResult(QNetworkReply *reply);

private:
    QNetworkAccessManager *manager_;
    QString url_;
    QString file_;

};

#endif // DOWNLOADER_H
