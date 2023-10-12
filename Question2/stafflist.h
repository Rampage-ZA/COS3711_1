#ifndef STAFFLIST_H
#define STAFFLIST_H
#include "staffClass.h"
#include <QList>

class StaffList

{
public:

    StaffList();
    ~StaffList();
    void addStaff(Staff *staff);
    QList<Staff*> getStaffList() const;

private:

    QList<Staff*> staffList;

};

#endif // STAFFLIST_H
