#include "konto.h"

Konto::Konto()
{

}

Konto::Konto(QString kontonr, float saldo, QString inhaberVorname, QString inhaberNachname)
{
    this->kontonr=kontonr;
    this->saldo=saldo;
    this->inhaberVorname=inhaberVorname;
    this->inhaberNachname=inhaberNachname;
}

void Konto::setKontonr(QString kontonr)
{
    this->kontonr=kontonr;
}

void Konto::setSaldo(float saldo)
{
    this->saldo=saldo;
}

void Konto::setInhaberVorname(QString inhaberVorname)
{
    this->inhaberVorname=inhaberVorname;
}

void Konto::setInhaberNachname(QString inhaberNachname)
{
    this->inhaberNachname=inhaberNachname;
}

QString Konto::getKontonr()
{
    return this->kontonr;
}

float Konto::getSaldo()
{
    return this->saldo;
}

QString Konto::getInhaberVorname()
{
    return this->inhaberVorname;
}

QString Konto::getInhaberNachname()
{
    return this->inhaberNachname;
}

bool Konto::einzahlen(double betrag){
    if (betrag > 0) {
        saldo += betrag;
        return true;
    }
    return false;
}

bool Konto::auszahlen(double betrag){
    if (betrag > 0 && saldo >= betrag){
        saldo -= betrag;
        return true;
    }
    return false;
}






