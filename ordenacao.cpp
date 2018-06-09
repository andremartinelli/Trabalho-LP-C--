#include "ordenacao.h"
#include <math.h>
#include <string>

int ordena_a(Imovel *a, Imovel *b)
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

Lista<Imovel *> recorta_a(vector<int> espec, Lista<Imovel *> l)
{
    float eliminar;
    eliminar = espec.operator[](0) * l.lenght() / 100.0;
    eliminar = floor(eliminar);
    int i = l.lenght();
    eliminar = l.lenght() - eliminar;
    for (eliminar; eliminar > 0; eliminar--)
    {
        l.remove(1);
    }
    return l;
}

Lista<Imovel *> recorta_b(vector<int> espec, Lista<Imovel *> l)
{
    string str;
    float fm = 1.3;
    Terreno *t;
    Lista<Imovel *> lb;
    Lista<Imovel *> lbcomplete;
    for (int i = 0; i < l.lenght(); i++)
    {
        str = l.getElement(i)->defineTipo();
        if (!str.compare("retang"))
        {
            lb.insere(l.getElement(i));
        }
        if (!str.compare("triang"))
        {
            lb.insere(l.getElement(i));
        }
        if (!str.compare("trapez"))
        {
            lb.insere(l.getElement(i));
        }
    }
    for (int i = 0; i < lb.lenght(); i++)
    {
        t = (Terreno *)lb.getElement(i);
        if (t->fator_multiplicativo() == fm)
        {
            lbcomplete.insere(lb.getElement(i));
        }
    }

    float eliminar;
    eliminar = espec.operator[](1) * l.lenght() / 100.0;
    eliminar = floor(eliminar);
    int i = lbcomplete.lenght();
    eliminar = lbcomplete.lenght() - eliminar;
    for (eliminar; eliminar > 0; eliminar--)
    {
        lbcomplete.remove(1);
    }

    return lbcomplete;
}

int ordena_b(Imovel *a, Imovel *b)
{
    Terreno *ta = (Terreno *)a;
    Terreno *tb = (Terreno *)b;
    if (ta->area() < tb->area())
    {
        return 1;
    }
    if (ta->area() == tb->area())
    {
        if (a->getIdent() < b->getIdent())
        {
            return 1;
        }
    }
    return 0;
}

Lista<Imovel *> recorta_c(vector<int> espec, Lista<Imovel *> l)
{
    Lista<Imovel *> lc;
    Casa *casa;
    for (int i = 0; i < l.lenght(); i++)
    {
        if (!l.getElement(i)->defineTipo().compare("casa"))
        {
            casa = (Casa *)l.getElement(i);
            if (casa->area() > espec.operator[](2))
            {
                if (l.getElement(i)->getValor() < espec.operator[](3))
                {
                    lc.insere(l.getElement(i));
                }
            }
        }
    }
    return lc;
}

int ordena_c(Imovel *a, Imovel *b)
{
    Residencia *ra = (Residencia *)a;
    Residencia *rb = (Residencia *)b;
    if (ra->getQuartos() < rb->getQuartos())
    {
        return 1;
    }
    if (ra->getQuartos() == rb->getQuartos())
    {
        if (a->getIdent() < b->getIdent())
        {
            return 1;
        }
    }
    return 0;
}