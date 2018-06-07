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

// int Imovel::operator>(Imovel& b){
//     return this->valor > b.getValor();
// }

// int Imovel::operator<(Imovel& b){
//     return this->valor < b.getValor();
// }

int Imovel::getIdent() const{ return this->ident; }
string Imovel::getNome() const{ return this->nome; }
float Imovel::getValor() const{ return this->valor; }

