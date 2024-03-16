#ifndef GIROKONTO_H
#define GIROKONTO_H

#include <QString>

class girokonto
{
private:
    double zinsen;

public:
    girokonto();

    void setZinsen(double betrag);

    double getZinsen();

    QString toString();
};

#endif // GIROKONTO_H
