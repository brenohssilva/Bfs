#include <stdlib.h>
#include <stdio.h>
#include "pilhas.h"
#include "graph.h"

Pilha *criaPilha(){
    Pilha p = (Pilha)malloc(sizeof(Pilha)); // cria a pilha
    p->prim = NULL;
    p->n = 0;
    return  p;
}

void pilhaPush (Pilha *p, int num){
    ListaP n = (ListaP)malloc(sizeof(ListaP)); // aloca cada operando
    n->info =  num;
    n->prox = p->prim; // o proximo vai ser o topo
    p->prim = n; // o topo vai ser o atual
    p->n++;
}

int pilhaVazia(Pilha *p){
    return (p->prim == NULL);
}

int pilhaPop (Pilha *p){
    ListaP *t;
    int num;
    if(pilhaVazia(p)){
        printf("Pilha vazia!!\n");
    } else {
        t = p->prim;//topo
        num = t->info;
        p->prim = t->prox; // o topo agora vai ser o prox do topo antigo
        p->n--;
        free(t); // liberando a posicao
        return num;
    }
}

void liberaPilha(Pilha *p){
    ListaP *q = p->prim;
    while(q!= NULL){
        ListaP *t  = q->prox;
        free(q);
        q = t;
    }
    free(p);
}

void imprimePilha(Pilha *p){
    printf("Pilha: \n");
    ListaP *q;
    for (q = p->prim; q != NULL ; q = q->prox) {
        printf("%d\n", q->info);
    }
    printf("fim da pilha\n");
}