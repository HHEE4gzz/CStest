#ifndef SETTINGRW_H
#define SETTINGRW_H

#include <QSettings>
#include <QString>

class SettingRW
{
public:

    QString static iniRead(QString path, QString section,QString key, QString &value);
    bool static iniChange(QString path, QString section,QString key, QString value);
};

#endif // SETTINGRW_H
