#include "Trapezoidal.h"

Trapezio::Trapezio(string nome, int ident, int precom2, char solo, float base1, float base2, float altura) : Terreno(nome, ident, precom2, solo)
{
    this->base1 = base1;
    this->base2 = base2;
    this->altura = altura;
    this->tipo = "trapez";
}

float Trapezio::area()
{
    return (this->altura * ((this->base1 + this->base2) / 2.0));
}

void Trapezio::setValor()
{
    this->valor = this->precom2 * this->area() * this->fator_multiplicativo();
}

string Trapezio::defineTipo()
{
    return this->tipo;
}