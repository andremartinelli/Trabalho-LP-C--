#ifndef RESIDENCIA_H
#define RESIDENCIA_H

#include "Imovel.h"

class Residencia: public Imovel
{
    protected:
    int quartos;
    int precom2;
    int vagas;

  public:
    Residencia(string nome, int ident, int quartos, int precom2, int vagas);
    int getQuartos();
    int getPreco();
    int getVagas();

};


#endif