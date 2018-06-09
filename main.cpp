#include <cstdio>
#include <vector>
#include <typeinfo>
#include "learquivo.h"
#include "listas.h"
#include "Imovel.h"
#include "Casa.h"
#include "Apartamento.h"
#include "Triangular.h"
#include "Trapezoidal.h"
#include "Retangular.h"
#include "Terreno.h"
#include "Residencia.h"
#include "ordenacao.h"
#include <string>

using namespace std;

int main()
{
    Lista<Imovel *> l;
    Lista<Imovel *> lb;
    Lista<Imovel *> lc;
    vector<int> espec;
    l = le_catalogo(l);
    l = le_atual(l);
    lb = le_catalogo(lb);
    lb = le_atual(lb);
    lc = le_catalogo(lc);
    lc = le_atual(lc);
    espec = le_espec(espec);
    for (int cont = 0; cont < l.lenth(); cont++)
    {
        l.getElement(cont)->setValor();
    }
    l.ordena(ordena_a);
    l = recorta_a(espec, l);
    for (int cont = 0; cont != l.lenth(); cont++)
    {
        cout << l.getElement(cont)->getIdent() <<", ";
    }
    // cout << l.lenth() << endl;
    // cout << lb.lenth() << endl;
    // cout << lc.lenth() << endl;
    

    return 0;
}