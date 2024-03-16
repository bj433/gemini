#ifndef KONTO_H
#define KONTO_H

#include <QString>

class Konto
{
private:
    QString kontonr;
    float saldo;
    QString inhaberVorname;
    QString inhaberNachname;
public:
    Konto();

    Konto(QString kontonr, float saldo, QString inhaberVorname, QString inhaberNachname);

    void setKontonr(QString kontonr);
    void setSaldo(float saldo);
    void setInhaberVorname(QString inhaberVorname);
    void setInhaberNachname(QString inhaberNachname);

    QString getKontonr();
    float getSaldo();
    QString getInhaberVorname();
    QString getInhaberNachname();

    QString toString();

    bool einzahlen(double betrag);
    bool auszahlen(double betrag);
};

#endif // KONTO_H
