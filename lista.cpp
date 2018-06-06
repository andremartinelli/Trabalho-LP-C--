#include <cstdio>
#include <fstream>
#include <iostream>
// #include "listas.h"

using namespace std;

template <class T>
struct node
{
    T ele;
    node<T> *prox;
};

template <class T>
class Lista
{
  public:
    Lista();
    void insere(T e);
    void remove(int i);
    void imprime();
    void ordena(int (*f)(T, T));

  private:
    node<T> *head;
    node<T> *curr;
    node<T> *temp;
};

template <class T>
Lista<T>::Lista()
{
    head = NULL;
    curr = NULL;
    temp = NULL;
}

template <class T>
void Lista<T>::insere(T e)
{
    node<T> *n = new node<T>;
    n->prox = NULL;
    n->ele = e;

    if (head != NULL)
    {
        curr = head;
        while (curr->prox != NULL)
        {
            curr = curr->prox;
        }
        curr->prox = n;
    }
    else
    {
        head = n;
    }
}

template <class T>
void Lista<T>::remove(int i)
{
    node<T> *deleta = NULL;
    temp = head;
    curr = head;
    int cont = 0;
    while (curr != NULL && cont != i - 1)
    {
        cont++;
        temp = curr;
        curr = curr->prox;
    }
    if (curr == NULL)
    {
        cout << "Valor fornecido maior do que a lista" << endl;
        delete deleta;
    }
    else
    {
        deleta = curr;
        curr = curr->prox;
        temp->prox = curr;
        if (deleta == head)
        {
            head = head->prox;
            temp = NULL;
        }
        delete deleta;
    }
}

template <class T>
void Lista<T>::imprime()
{
    for (curr = head; curr != NULL; curr = curr->prox)
    {
        cout << curr->ele << endl;
    }
}

template <class T>
void Lista<T>::ordena(int (*f)(T, T))
{
    node<T> *aux;
    node<T> *ant;
    int i = 99;

}