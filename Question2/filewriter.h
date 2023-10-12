#ifndef FILEWRITER_H
#define FILEWRITER_H
#include "staffClass.h"

class FileWriter
{
public:
    FileWriter();
    bool writeToFile(Staff *s) const;
};

#endif // FILEWRITER_H
