#ifndef RETANGULAR_H
#define RETANGULAR_H

#include "Terreno.h"

class Retangulo : public Terreno
{
  protected:
    float base;
    float altura;

  public:
    Retangulo(string nome, int ident, int precom2, char solo, float base, float altura);
    float area();
};

#endif