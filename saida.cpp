#include "saida.h"

void imprime_saida(Lista<Imovel *> l, Lista<Imovel *> lb, Lista<Imovel *> lc)
{
    ofstream myfile;
    myfile.open("saida.txt");
    if (l.lenght() > 0)
    {
        myfile << l.getElement(0)->getIdent();
        for (int cont = 1; cont != l.lenght(); cont++)
        {
            myfile << ", " << l.getElement(cont)->getIdent();
        }
    }
    myfile << "\n";
    if (lb.lenght() > 0)
    {
        myfile << lb.getElement(0)->getIdent();
        for (int cont = 1; cont != lb.lenght(); cont++)
        {
            myfile << ", " << lb.getElement(cont)->getIdent();
        }
    }
    myfile << "\n";
    if (lc.lenght() > 0)
    {
        myfile << lc.getElement(0)->getIdent();
        for (int cont = 1; cont != lc.lenght(); cont++)
        {
            myfile << ", " << lc.getElement(cont)->getIdent();
        }
    }
    myfile.close();
}

void imprime_result(Lista<Imovel *> l, Lista<Imovel *> lb, Lista<Imovel *> lc, vector<int> espec)
{
    ofstream myfile;
    myfile.open("result.txt");
    int i, j, k;
    int result = 0;
    i = 0;
    j = 0;
    k = 0;
    if (l.lenght() >= espec.operator[](4) && espec.operator[](4) != 0)
    {
        i = l.getElement(espec.operator[](4)-1)->getIdent();
    }
    if (lb.lenght() >= espec.operator[](5) && espec.operator[](5) != 0)
    {
        j = lb.getElement(espec.operator[](5)-1)->getIdent();
    }
    if (lc.lenght() >= espec.operator[](6) && espec.operator[](6) != 0)
    {
        k = lc.getElement(espec.operator[](6)-1)->getIdent();
    }
    result = i + j + k;
    myfile << result;
    myfile.close();
}