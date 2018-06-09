#include "Retangular.h"

Retangulo::Retangulo(string nome, int ident, int precom2, char solo, float base, float altura) : Terreno(nome, ident, precom2, solo)
{
    this->base = base;
    this->altura = altura;
    this->tipo = "retang";
}

float Retangulo::area()
{
    return (this->altura * this->base);
}


void Retangulo::setValor()
{
    this->valor = this->precom2 * this->area() * this->fator_multiplicativo();
}

string Retangulo::defineTipo()
{
    return this->tipo;
}