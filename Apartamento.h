#ifndef APARTAMENTO_H
#define APARTAMENTO_H

#include "Residencia.h"

class Apartamento: public Residencia
{
    int andar;
    float aconstruida;
    char alazer;
    int totalandares;
  public:
    Apartamento(string nome, int ident, int quartos, int precom2, int vagas, int andar, float aconstruida, char alazer, int totalandares);
    float get_alazer();  
};


#endif