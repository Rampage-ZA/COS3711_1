#include "filewriter.h"
#include <QFile>
#include <QTextStream>
#include <QMetaObject>
#include <QMetaProperty>

FileWriter::FileWriter()
{
    //constructor
}

bool FileWriter::writeToFile(Staff *s) const
{
    QFile file("staffOutputFile.txt");
    if (!file.open(QIODevice::Append))
        return 1;
    QTextStream toFile(&file);

    const QMetaObject *meta = s->metaObject();
    QString result;

    Staff temp;
    QStringList enumNames = temp.staffTypes();

    for (int count=meta->propertyOffset(); count<meta->propertyCount(); count++)
    {
        const QMetaProperty prop = meta->property(count);
        QString name = prop.name();
        QVariant value = prop.read(s);
        QString val = value.toString();
        if (prop.isEnumType())
            val = enumNames.at(val.toInt());
        result += QString(name + " " + val + " ");
    }
    toFile << result << '\n';
    file.close();

    return 0;
}
