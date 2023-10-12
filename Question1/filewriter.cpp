#include "filewriter.h"
#include <QFile>
#include <QTextStream>


FileWriter::FileWriter(Staff staff): staff(staff)
{
    //constructor
}

void FileWriter::setStaff(Staff staff)
{
    this->staff = staff;
}

bool FileWriter::write()
{
    QFile file("staff.txt");
    if (!file.open(QIODevice::Append))
        return 1;

    QTextStream toFile(&file);

    toFile << "Name: " << staff.getName() << " ";
    toFile << "Birthdate: " << staff.getDate().toString() << " ";
    toFile << "Employment Type: " << staff.getType() << '\n';
    file.close();

    return 0;
}
