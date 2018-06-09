#include "Imovel.h"
#include "Casa.h"
#include "Apartamento.h"
#include "Triangular.h"
#include "Trapezoidal.h"
#include "Retangular.h"
#include "Terreno.h"
#include "Residencia.h"
#include <vector>
#include "listas.h"


int ordena_a(Imovel *a, Imovel *b);

Lista<Imovel*> recorta_a(vector<int> espec, Lista<Imovel*> l);


Lista<Imovel*> recorta_b(vector<int> espec, Lista<Imovel*> l);

int ordena_b(Imovel *a, Imovel *b);


Lista<Imovel*> recorta_c(vector<int> espec, Lista<Imovel*> l);

int ordena_c(Imovel *a, Imovel *b);
