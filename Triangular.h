#ifndef TRIANGULAR_H
#define TRIANGULAR_H

#include "Terreno.h"

class Triangulo : public Terreno
{
  protected:
    float base;
    float altura;
    string tipo;

  public:
    Triangulo(string nome, int ident, int precom2, char solo, float base, float altura);
    float area();
    void setValor();
    string defineTipo();
};

#endif