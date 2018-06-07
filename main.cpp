#include <cstdio>
#include "learquivo.cpp"
// #include "listas.h"
#include "lista.cpp"
#include "Imovel.h"
#include "Casa.h"
#include "Apartamento.h"
#include "Triangular.h"
#include "Trapezoidal.h"
#include "Retangular.h"
#include "Terreno.h"
#include "Residencia.h"

using namespace std;

int ordena_a(const Imovel a, const Imovel b)
{
    if (a.getValor() < b.getValor())
    {
        return 1;
    }
    if (a.getValor() == b.getValor())
    {
        if (a.getIdent() < b.getIdent())
        {
            return 1;
        }
    }
    return 0;
}

int main()
{
    // le_catalogo();
    // int i = l.lenth();
    // for(int cont = 0; cont < i; cont ++){
    // cout << l.getElement(cont).getNome() << endl;
    // }

    return 0;
}