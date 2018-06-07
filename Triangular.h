#ifndef TRIANGULAR_H
#define TRIANGULAR_H

#include "Terreno.h"

class Triangulo : public Terreno
{
  protected:
    float base;
    float altura;

  public:
    Triangulo(string nome, int ident, int precom2, char solo, float base, float altura);
    float area();
};

#endif