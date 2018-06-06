#include "Imovel.h"

Imovel::Imovel(string nome, int ident)
{
    this->nome = nome;
    this->ident = ident;
    this->valor = 0;
}
Imovel::Imovel(){}

void Imovel::setValor(float v)
{
    this->valor = v;
}



int Imovel::getIdent() { return this->ident; }
string Imovel::getNome() { return this->nome; }
float Imovel::getValor() { return this->valor; }

