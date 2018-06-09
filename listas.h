#ifndef LISTAS_H
#define LISTAS_H

#include <iostream>
#include <cstdio>
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
    T getElement(int i);
    int lenght();
    void remove_primeiro();

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
    T element;
    int i = 0;
    for (curr = head; curr != NULL; curr = curr->prox)
    {
        for (aux = curr->prox; aux != NULL; aux = aux->prox)
        {
            if ((*f)(curr->ele, aux->ele) == 1)
            {
                element = curr->ele;
                curr->ele = aux->ele;
                aux->ele = element;
            }
        }
    }
}

template <class T>
T Lista<T>::getElement(int i)
{
    curr = head;
    while (i != 0)
    {
        curr = curr->prox;
        i--;
    }
    return curr->ele;
}

template <class T>
int Lista<T>::lenght()
{
    int i = 0;

    for (curr = head; curr != NULL; curr = curr->prox)
    {
        i++;
    }
    return i;
}

template <class T>
void Lista<T>::remove_primeiro()
{
    node<T> *deleta = head;
    head = head->prox;
    delete deleta;
}
#endif