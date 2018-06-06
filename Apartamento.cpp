#include "Apartamento.h"
#include <string>

Apartamento::Apartamento(string nome, int ident, int quartos, int precom2, int vagas, int andar, float aconstruida, char alazer, int totalandares) : Residencia(nome, ident, quartos, precom2, vagas)
{
    this->andar = andar;
    this->aconstruida = aconstruida;
    this->alazer = alazer;
    this->totalandares = totalandares;
}

float Apartamento::get_alazer()
{
    if(this->alazer == 'S'){
        return 1.15;
    }
    return 1.0;
}