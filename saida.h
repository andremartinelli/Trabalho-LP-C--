#include <iostream>
#include <fstream>
#include "Imovel.h"
#include "Casa.h"
#include "Apartamento.h"
#include "Triangular.h"
#include "Trapezoidal.h"
#include "Retangular.h"
#include "Terreno.h"
#include "Residencia.h"
#include "listas.h"
#include <vector>

using namespace std;

void imprime_saida(Lista<Imovel *> l, Lista<Imovel *> lb, Lista<Imovel *> lc);

void imprime_result(Lista<Imovel *> l, Lista<Imovel *> lb, Lista<Imovel *> lc, vector<int> espec);