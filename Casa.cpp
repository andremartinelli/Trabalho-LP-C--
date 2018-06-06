#include "Casa.h"
#include <string>



Casa::Casa(string nome, int ident, int quartos, int precom2, int vagas, int numpavimentos, float apavimento, float alivre, int palivre):Residencia(nome, ident, quartos, precom2, vagas)
{
    this->numpavimentos = numpavimentos;
    this->apavimento = apavimento;
    this->alivre = alivre;
    this->palivre = palivre;
}