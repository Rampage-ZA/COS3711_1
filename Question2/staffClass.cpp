#include "staffClass.h"
#include <QMetaProperty>

Staff::Staff()
{
}

Staff::Staff(QString name, QDate date, QString t1): name(name), birthDate(date)
{
    type = Staff::StaffType(findEnumInt(t1));
}

QString Staff::getName() const          //const for getters
{
    return name;
}

QDate Staff::getDate() const
{
    return birthDate;
}

QString Staff::getType() const
{
    QString t1 = findEnumString(type);
    return t1;
}

void Staff::setName(QString name)
{
    this->name = name;
}

void Staff::setDate(QDate date)
{
    birthDate = date;
}

void Staff::setType(QString t1)
{
    type = Staff::StaffType(findEnumInt(t1));
}

void Staff::setType(StaffType st)
{
    type = st;
}

Staff::StaffType Staff::getTypeST() const
{
    return type;
}

QStringList Staff::staffTypes()
{
    QStringList list;
    QMetaEnum self = this->getMetaEnum();
    for (int i=0; i<self.keyCount(); i++)
        list << QString(self.valueToKey(i));
    return list;
}

QMetaEnum Staff::getMetaEnum() const
{
    const QMetaObject *meta = this->metaObject();
    const QMetaEnum metaEnum = meta->enumerator(0); // get meta-data on the first enum in the object
    return metaEnum;
}

QString Staff::findEnumString(int i) const
{
    QMetaEnum self = this->getMetaEnum();
    return QString(self.valueToKey(i));
}
int Staff::findEnumInt(QString str) const
{
    QMetaEnum self = this->getMetaEnum();
    return self.keysToValue(str.toLatin1());
}

