#include "reestr.h"

const QString   Reestr::c_organizationName      = "RegionPostavka";
const QString   Reestr::c_organizationDomain    = "RegionPostavka";
const QString   Reestr::c_applicationName       = "Partners";

QSettings *     Reestr::reestr_                 = new QSettings(c_organizationName, c_applicationName);

const QString c_programPrefix = "Updater/";

bool Reestr::updating() {
    return reestr_->value(c_programPrefix + "Updating", QVariant(true)).toBool();
}

void Reestr::setUpdating(bool newValue) {
    reestr_->setValue(c_programPrefix + "Updating", newValue);
}

bool Reestr::autoUpdate() {
    return reestr_->value(c_programPrefix + "AutoUpdate", QVariant(true)).toBool();
}

void Reestr::setAutoUpdate(bool newValue) {
    reestr_->setValue(c_programPrefix + "AutoUpdate", newValue);
}

bool Reestr::runIfClose() {
    return reestr_->value(c_programPrefix + "RunIfClose", QVariant(true)).toBool();
}

void Reestr::setRunIfClose(bool newValue) {
    reestr_->setValue(c_programPrefix + "RunIfClose", newValue);
}

bool Reestr::updateTestVersion() {
    return reestr_->value(c_programPrefix + "UpdateTestVersion", QVariant(false)).toBool();
}

void Reestr::setUpdateTestVersion(bool newValue) {
    reestr_->setValue(c_programPrefix + "UpdateTestVersion", newValue);
}

QString Reestr::updatePath() {
    return reestr_->value(c_programPrefix + "PathUpdate", QVariant("\\\\grimnir\\UpdateYandex")).toString();
}

void Reestr::setUpdatePath(const QString &newValue) {
    reestr_->setValue(c_programPrefix + "PathUpdate", newValue);
}

QString Reestr::updateTestPath() {
    return reestr_->value(c_programPrefix + "PathTestUpdate", QVariant("\\\\grimnir\\UpdateYandexTest")).toString();
}

void Reestr::setUpdateTestPath(const QString &newValue) {
    reestr_->setValue(c_programPrefix + "PathTestUpdate", newValue);
}

int Reestr::intervalUpdate() {
    return reestr_->value(c_programPrefix + "IntervalUpdate", QVariant(1800000)).toInt();
}

void Reestr::setIntervalUpdate(int newValue) {
    reestr_->setValue(c_programPrefix + "IntervalUpdate", newValue);
}

int Reestr::intervalCheckApp() {
    return reestr_->value(c_programPrefix + "IntervalCheckApp", QVariant(300000)).toInt();
}

void Reestr::setIntervalCheckApp(int newValue) {
    reestr_->setValue(c_programPrefix + "IntervalCheckApp", newValue);
}

QString Reestr::runApp() {
    return reestr_->value(c_programPrefix + "RunApp", "Standart").toString();
}

void Reestr::setRunApp(const QString &newValue) {
    reestr_->setValue(c_programPrefix + "RunApp", newValue);
}

QString Reestr::currentVersion() {
    return reestr_->value(c_programPrefix + "CurrentVersion", "none").toString();
}

void Reestr::setCurrentVersion(const QString &newValue) {
    reestr_->setValue(c_programPrefix + "CurrentVersion", newValue);
}

QString Reestr::currentTestVersion() {
    return reestr_->value(c_programPrefix + "CurrentTestVersion", "none").toString();
}

void Reestr::setCurrentTestVersion(const QString &newValue) {
    reestr_->setValue(c_programPrefix + "CurrentTestVersion", newValue);
}
