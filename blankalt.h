#ifndef BLANKALT_H
#define BLANKALT_H

#include <QObject>

class BlankAlt : public QObject
{
    Q_OBJECT
    Q_PROPERTY(QString colour READ getColour WRITE setColour)
public:
    BlankAlt();
    QString getColour() const;
    void setColour(QString c);

private:
    QString colour;
};

#endif // BLANKALT_H
