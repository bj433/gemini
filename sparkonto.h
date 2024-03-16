#ifndef SPARKONTO_H
#define SPARKONTO_H

#include <QString>

class sparkonto
{
private:
    double zinsen;
public:
    sparkonto();

    void setDispo(double betrag);

    double getDispo();

    QString toString();
};

#endif // SPARKONTO_H
