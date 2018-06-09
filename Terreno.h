#ifndef TERRENO_H
#define TERRENO_H

#include "Imovel.h"

class Terreno: public Imovel
{
    protected:
    int precom2;
    char solo;
  public:
    Terreno(string nome, int ident, int precom2, char solo);
    float fator_multiplicativo();
    virtual float area();
};


#endif