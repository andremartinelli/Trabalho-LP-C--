#include "Apartamento.h"
#include <string>
#include <iostream>

Apartamento::Apartamento(string nome, int ident, int quartos, int precom2, int vagas, int andar, float aconstruida, char alazer, int totalandares) : Residencia(nome, ident, quartos, precom2, vagas)
{
    this->andar = andar;
    this->aconstruida = aconstruida;
    this->alazer = alazer;
    this->totalandares = totalandares;
    this->tipo = "apto";
}

string Apartamento::defineTipo()
{
    return this->tipo;
}

float Apartamento::get_alazer()
{
    if (this->alazer == 'S')
    {
        return 1.15;
    }
    return 1.0;
}

void Apartamento::setValor()
{
    this->valor = this->precom2 * this->aconstruida * (0.9 + (float)((float)(this->andar) / (float)(this->totalandares))) * this->get_alazer();
}