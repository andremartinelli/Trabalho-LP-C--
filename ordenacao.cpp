#include "ordenacao.h"
#include <math.h>


int ordena_a(Imovel *a,Imovel *b)
{
    if (a->getValor() > b->getValor())
    {
        return 1;
    }
    if (a->getValor() == b->getValor())
    {
        if (a->getIdent() > b->getIdent())
        {
            return 1;
        }
    }
    return 0;
}


Lista<Imovel*> recorta_a(vector<int> espec, Lista<Imovel*> l){
    int eliminar;
    eliminar = espec.operator[](0) * l.lenth()/100.0;
    eliminar = floor(eliminar);
    int i = l.lenth();
    eliminar = l.lenth() - eliminar;
    for(eliminar; eliminar != 0; eliminar--){
        l.remove(1);
    }   
        return l;
}