#include "staffClass.h"

const QStringList Staff::employmentType = QStringList() << "permanent" << "parttime" << "contract"; //const


Staff::Staff(QString name, QDate date, QString empType): name(name), birthDate(date)
{
    type = Staff::StaffType(employmentType.indexOf(empType));
}

void Staff::setName(QString name)
{
    this->name = name;
}

void Staff::setDate(QDate date)
{
    birthDate = date;
}

void Staff::setType(QString empType)
{
    type = Staff::StaffType(employmentType.indexOf(empType));
}

QString Staff::getName() const      //const for getters
{
    return name;
}

QDate Staff::getDate() const
{
    return birthDate;
}

QString Staff::getType() const
{
    return employmentType.at(type);
}
