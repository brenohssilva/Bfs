#include "graph.h"

#ifndef GRAFO1_PILHAS_H
#define GRAFO1_PILHAS_H
typedef struct listap  {
    int info;
    struct listap *prox;
} ListaP;

typedef struct pilha{
    ListaP *prim;
    int n;
} Pilha;

Pilha *criaPilha();
void pilhaPush (Pilha *p, int info);
int pilhaVazia(Pilha *p);
int pilhaPop (Pilha *p);
void liberaPilha(Pilha *p);
void imprimePilha(Pilha *p);
#endif //GRAFO1_PILHAS_H
