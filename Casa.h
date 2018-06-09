#ifndef CASA_H
#define CASA_H

#include "Residencia.h"

class Casa: public Residencia
{
    int numpavimentos;
    float apavimento;
    float alivre;
    int palivre;
    string tipo;

  public:
    Casa(string nome, int ident, int quartos, int precom2, int vagas, int numpavimentos, float apavimento, float alivre, int palivre);
    void setValor();
    string defineTipo();
};


#endif