#include <stdlib.h>
#include <stdio.h>
#include "filas.h"

Fila *criarFila(){
    Fila f = (Fila)malloc(sizeof(Fila));
    f->ini = f->fim = NULL;
    f->n = 0;
    printf("Fila criada!\n");
    return f;
}

void inserirFila(Fila *f, int v){
    ListaF novo = (ListaF)malloc(sizeof(ListaF));
    novo->v = v;
    novo->prox = NULL;
    if(f->fim == NULL && f->ini == NULL){
        f->ini = novo;
        f->fim = novo;
    } else {
        f->fim->prox = novo;
        f->fim = novo;
    }
    f->n++;
    printf("Elemento inserido!\n");
}

int retirarFila(Fila *f){
    ListaF *t;
    int v;
    if (f->fim == NULL && f->ini == NULL){
        printf("Lista vazia!\n");
    } else {
        t=f->ini;
        v=t->v;
        f->ini = t->prox;
        if(f->ini == NULL)
            f->fim = NULL;
        free(t);
        f->n--;
        return v;
    }
}

void imprimirFila (Fila *f){
    ListaF *q;
    for (q = f->ini; q != NULL ; q = q->prox) {
        printf("%d\n", q->v);
    }
}

void liberarFila(Fila *f){
    ListaF *q = f->ini;
    while (q != NULL){
        ListaF *t = q->prox;
        free(q);
        q = t;
    }
    free(f);
}