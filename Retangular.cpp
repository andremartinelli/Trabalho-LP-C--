#include "Retangular.h"

Retangulo::Retangulo(string nome, int ident, int precom2, char solo, float base, float altura) : Terreno(nome, ident, precom2, solo)
{
    this->base = base;
    this->altura = altura;
}

float Retangulo::area()
{
    return (this->altura * this->base);
}