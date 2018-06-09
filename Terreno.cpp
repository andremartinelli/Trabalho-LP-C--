#include "Terreno.h"

Terreno::Terreno(string nome, int ident, int precom2, char solo):Imovel(nome, ident){
    this->precom2 = precom2;
    this->solo = solo;
}

float Terreno::fator_multiplicativo(){
    if(this->solo == 'A'){
        return 0.9;
    }
    if(this->solo == 'G'){
        return 1.3;
    }
    return 1.1;
}


float Terreno::area(){}