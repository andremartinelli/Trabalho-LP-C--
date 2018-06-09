#include "Triangular.h"

Triangulo::Triangulo(string nome, int ident, int precom2, char solo, float base, float altura) : Terreno(nome, ident, precom2, solo)
{
    this->base = base;
    this->altura = altura;
    this->tipo = "triang";
}

float Triangulo::area()
{
    return (this->altura * this->base) / 2.0;
}

void Triangulo::setValor()
{
    this->valor = this->precom2 * this->area() * this->fator_multiplicativo();
}


string Triangulo::defineTipo()
{
    return this->tipo;
}