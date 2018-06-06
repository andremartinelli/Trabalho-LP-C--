#include "Residencia.h"
#include <string>

Residencia::Residencia(string nome, int ident, int quartos, int precom2, int vagas):Imovel(nome, ident){
    this->quartos = quartos;
    this->vagas = vagas;
    this->precom2 = precom2;
}

int Residencia::getQuartos(){
    return this->quartos;
}

int Residencia::getPreco(){
    return this->precom2;
}

int Residencia::getVagas(){
    return this->vagas;
}