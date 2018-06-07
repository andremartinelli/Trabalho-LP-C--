#ifndef IMOVEL_H
#define IMOVEL_H

#include <string>
using namespace std;

class Imovel
{
    protected:
    string nome;
    int ident;
    float valor;

  public:
    Imovel();
    Imovel(string nome, int ident);
    string getNome()const;
    int getIdent()const;
    float getValor() const;
    void setValor(float v);
};


#endif
