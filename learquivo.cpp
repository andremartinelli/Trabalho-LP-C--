#include "learquivo.h"

using namespace std;

Lista<Imovel *> le_catalogo(Lista<Imovel *> l)
{
    ifstream in("catalogo.txt");
    string nome;
    char solo, alazer;
    float base1, base2, altura, apavimento, alivre, aconstruida, palivre;
    int quartos, vagas, pavimentos, andar, identificador, precom2, totalandares;
    string str;
    float preco;
    while (getline(in, str))
    {
        if (!str.compare("apto"))
        {
            getline(in, str);
            identificador = atoi(str.c_str());
            getline(in, str);
            nome = str;
            getline(in, str);
            quartos = atoi(str.c_str());
            getline(in, str);
            vagas = atoi(str.c_str());
            getline(in, str);
            andar = atoi(str.c_str());
            getline(in, str);
            aconstruida = atof(str.c_str());
            getline(in, str);
            precom2 = atof(str.c_str());
            getline(in, str);
            alazer = str.operator[](0);
            getline(in, str);
            totalandares = atoi(str.c_str());
            Imovel *i = new Apartamento(nome, identificador, quartos, precom2, vagas, andar, aconstruida, alazer, totalandares);
            l.insere(i);
        }
        if (!str.compare("casa"))
        {
            getline(in, str);
            identificador = atoi(str.c_str());
            getline(in, str);
            nome = str;
            getline(in, str);
            quartos = atoi(str.c_str());
            getline(in, str);
            vagas = atoi(str.c_str());
            getline(in, str);
            pavimentos = atoi(str.c_str());
            getline(in, str);
            apavimento = atof(str.c_str());
            getline(in, str);
            precom2 = atof(str.c_str());
            getline(in, str);
            alivre = atof(str.c_str());
            getline(in, str);
            palivre = atoi(str.c_str());
            Imovel *i = new Casa(nome, identificador, quartos, precom2, vagas, pavimentos, apavimento, alivre, palivre);
            l.insere(i);
        }
        if (!str.compare("triang"))
        {
            getline(in, str);
            identificador = atoi(str.c_str());
            getline(in, str);
            nome = str;
            getline(in, str);
            solo = str.operator[](0);
            getline(in, str);
            precom2 = atof(str.c_str());
            getline(in, str);
            base1 = atof(str.c_str());
            getline(in, str);
            altura = atof(str.c_str());
            Imovel *i = new Triangulo(nome, identificador, precom2, solo, base1, altura);
            l.insere(i);
        }
        if (!str.compare("retang"))
        {
            getline(in, str);
            identificador = atoi(str.c_str());
            getline(in, str);
            nome = str;
            getline(in, str);
            solo = str.operator[](0);
            getline(in, str);
            precom2 = atof(str.c_str());
            getline(in, str);
            base1 = atof(str.c_str());
            getline(in, str);
            altura = atof(str.c_str());
            Imovel *i = new Retangulo(nome, identificador, precom2, solo, base1, altura);
            l.insere(i);
        }
        if (!str.compare("trapez"))
        {
            getline(in, str);
            identificador = atoi(str.c_str());
            getline(in, str);
            nome = str;
            getline(in, str);
            solo = str.operator[](0);
            getline(in, str);
            precom2 = atof(str.c_str());
            getline(in, str);
            base1 = atof(str.c_str());
            getline(in, str);
            base2 = atof(str.c_str());
            getline(in, str);
            altura = atof(str.c_str());
            Imovel *i = new Trapezio(nome, identificador, precom2, solo, base1, base2, altura);
            l.insere(i);
        }
    }
    return l;
}

Lista<Imovel *> le_atual(Lista<Imovel *> l)
{
    ifstream in("atual.txt");
    string str, str2, str3;
    string nome;
    char solo, alazer;
    float base1, base2, altura, apavimento, alivre, aconstruida, palivre;
    int quartos, vagas, pavimentos, andar, identificador, precom2, totalandares;
    float preco;
    while (getline(in, str))
    {
        if (!str.compare("i"))
        {
            getline(in, str);
            if (!str.compare("apto"))
            {
                getline(in, str);
                identificador = atoi(str.c_str());
                getline(in, str);
                nome = str;
                getline(in, str);
                quartos = atoi(str.c_str());
                getline(in, str);
                vagas = atoi(str.c_str());
                getline(in, str);
                andar = atoi(str.c_str());
                getline(in, str);
                aconstruida = atof(str.c_str());
                getline(in, str);
                precom2 = atof(str.c_str());
                getline(in, str);
                alazer = str.operator[](0);
                getline(in, str);
                totalandares = atoi(str.c_str());
                Imovel *i = new Apartamento(nome, identificador, quartos, precom2, vagas, andar, aconstruida, alazer, totalandares);
                l.insere(i);
            }
            if (!str.compare("casa"))
            {
                getline(in, str);
                identificador = atoi(str.c_str());
                getline(in, str);
                nome = str;
                getline(in, str);
                quartos = atoi(str.c_str());
                getline(in, str);
                vagas = atoi(str.c_str());
                getline(in, str);
                pavimentos = atoi(str.c_str());
                getline(in, str);
                apavimento = atof(str.c_str());
                getline(in, str);
                precom2 = atof(str.c_str());
                getline(in, str);
                alivre = atof(str.c_str());
                getline(in, str);
                palivre = atoi(str.c_str());
                Imovel *i = new Casa(nome, identificador, quartos, precom2, vagas, pavimentos, apavimento, alivre, palivre);
                l.insere(i);
            }
            if (!str.compare("triang"))
            {
                getline(in, str);
                identificador = atoi(str.c_str());
                getline(in, str);
                nome = str;
                getline(in, str);
                solo = str.operator[](0);
                getline(in, str);
                precom2 = atof(str.c_str());
                getline(in, str);
                base1 = atof(str.c_str());
                getline(in, str);
                altura = atof(str.c_str());
                Imovel *i = new Triangulo(nome, identificador, precom2, solo, base1, altura);
                l.insere(i);
            }
            if (!str.compare("retang"))
            {
                getline(in, str);
                identificador = atoi(str.c_str());
                getline(in, str);
                nome = str;
                getline(in, str);
                solo = str.operator[](0);
                getline(in, str);
                precom2 = atof(str.c_str());
                getline(in, str);
                base1 = atof(str.c_str());
                getline(in, str);
                altura = atof(str.c_str());
                Imovel *i = new Retangulo(nome, identificador, precom2, solo, base1, altura);
                l.insere(i);
            }
            if (!str.compare("trapez"))
            {
                getline(in, str);
                identificador = atoi(str.c_str());
                getline(in, str);
                nome = str;
                getline(in, str);
                solo = str.operator[](0);
                getline(in, str);
                precom2 = atof(str.c_str());
                getline(in, str);
                base1 = atof(str.c_str());
                getline(in, str);
                base2 = atof(str.c_str());
                getline(in, str);
                altura = atof(str.c_str());
                Imovel *i = new Trapezio(nome, identificador, precom2, solo, base1, base2, altura);
                l.insere(i);
            }
        }
        if (!str.compare("a"))
        {
            getline(in, str);
            if (!str.compare("apto"))
            {
                getline(in, str);
                identificador = atoi(str.c_str());
                getline(in, str);
                nome = str;
                getline(in, str);
                quartos = atoi(str.c_str());
                getline(in, str);
                vagas = atoi(str.c_str());
                getline(in, str);
                andar = atoi(str.c_str());
                getline(in, str);
                aconstruida = atof(str.c_str());
                getline(in, str);
                precom2 = atof(str.c_str());
                getline(in, str);
                alazer = str.operator[](0);
                getline(in, str);
                totalandares = atoi(str.c_str());
                Imovel* ap = new Apartamento(nome, identificador, quartos, precom2, vagas, andar, aconstruida, alazer, totalandares);
                for (int i = 0; i < l.lenght(); i++)
                {
                    if (l.getElement(i)->getIdent() == identificador)
                    {
                        l.remove(i+1);
                        break;
                    }
                }
                l.insere(ap);
            }
            if (!str.compare("casa"))
            {
                getline(in, str);
                identificador = atoi(str.c_str());
                getline(in, str);
                nome = str;
                getline(in, str);
                quartos = atoi(str.c_str());
                getline(in, str);
                vagas = atoi(str.c_str());
                getline(in, str);
                pavimentos = atoi(str.c_str());
                getline(in, str);
                apavimento = atof(str.c_str());
                getline(in, str);
                precom2 = atof(str.c_str());
                getline(in, str);
                alivre = atof(str.c_str());
                getline(in, str);
                palivre = atoi(str.c_str());
                Imovel* ca = new Casa(nome, identificador, quartos, precom2, vagas, pavimentos, apavimento, alivre, palivre);
                l.insere(ca);
                for (int i = 0; i < l.lenght(); i++)
                {
                    if (l.getElement(i)->getIdent() == identificador)
                    {
                        l.remove(i+1);
                        break;
                    }
                }
            }
            if (!str.compare("triang"))
            {
                getline(in, str);
                identificador = atoi(str.c_str());
                getline(in, str);
                nome = str;
                getline(in, str);
                solo = str.operator[](0);
                getline(in, str);
                precom2 = atof(str.c_str());
                getline(in, str);
                base1 = atof(str.c_str());
                getline(in, str);
                altura = atof(str.c_str());
                Imovel* tr = new Triangulo(nome, identificador, precom2, solo, base1, altura);
                l.insere(tr);
                for (int i = 0; i < l.lenght(); i++)
                {
                    if (l.getElement(i)->getIdent() == identificador)
                    {
                        l.remove(i+1);
                        break;
                    }
                }
            }
            if (!str.compare("retang"))
            {
                getline(in, str);
                identificador = atoi(str.c_str());
                getline(in, str);
                nome = str;
                getline(in, str);
                solo = str.operator[](0);
                getline(in, str);
                precom2 = atof(str.c_str());
                getline(in, str);
                base1 = atof(str.c_str());
                getline(in, str);
                altura = atof(str.c_str());
                Imovel* ret = new Retangulo(nome, identificador, precom2, solo, base1, altura);
                l.insere(ret);
                for (int i = 0; i < l.lenght(); i++)
                {
                    if (l.getElement(i)->getIdent() == identificador)
                    {
                        l.remove(i+1);
                        break;
                    }
                }
            }
            if (!str.compare("trapez"))
            {
                getline(in, str);
                identificador = atoi(str.c_str());
                getline(in, str);
                nome = str;
                getline(in, str);
                solo = str.operator[](0);
                getline(in, str);
                precom2 = atof(str.c_str());
                getline(in, str);
                base1 = atof(str.c_str());
                getline(in, str);
                base2 = atof(str.c_str());
                getline(in, str);
                altura = atof(str.c_str());
                Imovel* trap = new Trapezio(nome, identificador, precom2, solo, base1, base2, altura);
                l.insere(trap);
                for (int i = 0; i < l.lenght(); i++)
                {
                    if (l.getElement(i)->getIdent() == identificador)
                    {
                        l.remove(i+1);
                        break;
                    }
                }
            }
        }
        if (!str.compare("e"))
        {
            getline(in, str);
            identificador = atoi(str.c_str());
            for (int i = 0; i < l.lenght(); i++)
            {
                if (l.getElement(i)->getIdent() == identificador)
                {
                    l.remove(i+1);
                    break;
                }
            }
        }
    }

    return l;
}

vector<int> le_espec(vector<int> v)
{
    ifstream in("espec.txt");
    string str;
    while (getline(in, str))
    {
        v.push_back(atoi(str.c_str()));
    }
    return v;
}