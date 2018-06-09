#ifndef TRAPEZOIDAL_H
#define TRAPEZOIDAL_H

#include "Terreno.h"

class Trapezio : public Terreno
{
protected:
  float base1;
  float base2;
  float altura;
  string tipo;

public:
  Trapezio(string nome, int ident, int precom2, char solo, float base1, float base2, float altura);
  float area();
  void setValor();
  string defineTipo();
};

#endif