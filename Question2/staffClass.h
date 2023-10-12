#ifndef STAFFCLASS_H
#define STAFFCLASS_H

#include <QObject>
#include <QMetaEnum>
#include <QStringList>
#include <QDate>


class Staff : public QObject
{
    Q_OBJECT
    Q_PROPERTY(QString name READ getName WRITE setName)
    Q_PROPERTY(QDate date READ getDate WRITE setDate)
    Q_PROPERTY(StaffType type READ getTypeST WRITE setType)
    Q_ENUMS(StaffType)

public:
    enum StaffType {permanent, parttime, contract};

    Staff();
    Staff(QString name, QDate date, QString t1);
    QStringList staffTypes();

private:

    QString getName() const;        //const for getters
    QDate getDate() const;
    QString getType() const;

    void setName(QString name);
    void setDate(QDate date);
    void setType(QString t1);
    void setType(StaffType st);

    StaffType getTypeST() const;
    QMetaEnum getMetaEnum() const;

    QString findEnumString(int i) const;
    int findEnumInt(QString str) const;

    QString name;
    QDate birthDate;
    StaffType type;

};

#endif // STAFFCLASS_H
