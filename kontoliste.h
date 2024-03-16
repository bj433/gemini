#ifndef KONTOLISTE_H
#define KONTOLISTE_H

#include <konto.h>
#include <QVector>

class kontoliste
{

private:
QVector<Konto> kontouebersicht;


public:
    kontoliste();

    void kontoAnlegen(QString vorname, QString nachname, int kontonr);
    void einzahlen(QString kontonr, float betrag);
    void auszahlen(QString kontonr, float betrag);
    void ueberweisung(QString zielKontonr, QString kontonr, float betrag);
};

#endif // KONTOLISTE_H
