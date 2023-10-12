#include "stafflist.h"

StaffList::StaffList()
{
}

void StaffList::addStaff(Staff *staff)
{
    staffList.append(staff);
}

QList<Staff *> StaffList::getStaffList() const
{
    return staffList;
}

StaffList::~StaffList()
{
    qDeleteAll(staffList);
}
