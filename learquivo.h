#include <cstdio>
#include <vector>
#include <fstream>
#include <iostream>
#include <string>
#include <string.h>
#include <stdlib.h>
#include "Casa.h"
#include "Apartamento.h"
#include "Triangular.h"
#include "Trapezoidal.h"
#include "Retangular.h"
#include "Terreno.h"
#include "Residencia.h"
#include "listas.h"


Lista<Imovel *> le_catalogo(Lista<Imovel *> l);

Lista<Imovel *> le_atual(Lista<Imovel *> l);

vector<int> le_espec(vector<int> v);