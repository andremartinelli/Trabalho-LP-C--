#include "Imovel.h"
#include <cstdio>
using namespace std;
Imovel::Imovel(string nome, int ident)
{
    this->nome = nome;
    this->ident = ident;
    this->valor = 0;
}
Imovel::Imovel() {}

void Imovel::setValor()
{
    // cout << "Faz nada" << endl;
}

string Imovel::defineTipo()
{
    // cout << "Faz nada" << endl;
}

int Imovel::getIdent() const { return this->ident; }
string Imovel::getNome() const { return this->nome; }
float Imovel::getValor() const { return this->valor; }
