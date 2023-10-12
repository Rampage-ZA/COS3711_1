#ifndef STAFFCLASS_H
#define STAFFCLASS_H
#include <QDate>
#include <QStringList>


class Staff
{
public:
    enum StaffType {permanent, parttime, contract};     //enum for switch

    Staff(QString name, QDate date, QString empType);

    QString getName() const;
    QDate getDate() const;
    QString getType() const;        //getters

    void setName(QString name);
    void setDate(QDate date);
    void setType(QString empType);         //setters

private:

    QString name;
    QDate birthDate;
    StaffType type;                 //staff variables

    static const QStringList employmentType; //variable used by MVC (GUI), so needs to be accessible through lifetime of main (static)

};

#endif // STAFFCLASS_H
