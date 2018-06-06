#include <cstdio>
using namespace std;


class Lista{
private:
    typedef struct node{
        void* e;
        node* prox;
    }node;
    node* head;
    node* curr;
    node* temp;
public:
    Lista();
    void adicionaNode(void* e);
    void removeNode(int i);

};
