#include "blank.h"
#include "blankalt.h"
#include <QTextStream>
#include <QVariant>
#include <QList>

using namespace std;
int main()
{
    QTextStream out(stdout);

    out << "Blank class" << Qt::endl;
    Blank blank;
    blank.setProperty(QString("colour").toLatin1().constData(), QVariant("blue"));
    blank.setProperty(QString("size").toLatin1().constData(), QVariant(12.25));

    foreach(QByteArray obj, blank.dynamicPropertyNames())
    {
        out << QString(obj) << ": " << blank.property(obj.data()).toString() << Qt::endl;
    }

    out << Qt::endl << "BlankAlt class" << Qt::endl;
    BlankAlt blankAlt;
    blankAlt.setProperty(QString("colour").toLatin1().constData(), QVariant("blue"));
    blankAlt.setProperty(QString("size").toLatin1().constData(), QVariant(12.12));

    foreach(QByteArray obj, blankAlt.dynamicPropertyNames())
    {
        out << QString(obj) << ": " << blankAlt.property(obj.data()).toString() << Qt::endl;
    }

    return 0;
}
