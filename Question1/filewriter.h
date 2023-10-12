#ifndef FILEWRITER_H
#define FILEWRITER_H
#include "staffClass.h"

class FileWriter

{
public:

    FileWriter(Staff staff);

    void setStaff(Staff staff);
    bool write();

private:

    Staff staff;

};

#endif // FILEWRITER_H
