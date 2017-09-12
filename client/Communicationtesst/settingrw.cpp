#include "settingrw.h"
#include <QDebug>


/**********************************************************************************
 * 函数名：iniRead
 * 作用：.ini文件读取查询
 * 参数：path .ini文件路径 section 配置节 key 配置键名 value配置键值
 * 例子：读取Setting.ini test节的one字段的值，结果存储到key
 * QString key;
    key = SettingRW::iniRead(QString("setting.ini"), QString("test"), QString("one"), key);
 **********************************************************************************/

QString  SettingRW::iniRead(QString path, QString section,QString key, QString &value)
{

    if(path == QString(""))
        {
            qDebug()<<"open error";
            return false;
        }
        else
        {
            QSettings *setting = new QSettings(path, QSettings::IniFormat);

            value = setting->value(section + "/" + key).toString();

            if(setting)
            {
                delete setting;
            }

            return value;
        }
}

/**********************************************************************************
 * 函数名：iniChange
 * 作用：.ini文件修改
 * 参数：path .ini文件路径 section 配置节 key 配置键名 value配置键值
 * 例子：读取Setting.ini test节的three字段的值为111
 * SettingRW::iniChange(QString("setting.ini"), QString("test"), QString("three"), QString("111"));
 **********************************************************************************/

bool SettingRW::iniChange(QString path, QString section,QString key, QString value)
{
    if(path == QString(""))
        {
            return false;
        }
        else
        {
        QSettings *setting = new QSettings(path, QSettings::IniFormat);
        setting->beginGroup(section);
        setting->setValue(key, value);
        setting->endGroup();
            if(setting)
            {
                delete setting;
            }

            return true;
        }
}
