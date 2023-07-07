#ifndef GRAFO1_FILAS_H
#define GRAFO1_FILAS_H

typedef struct listaf {
    int v;
    struct listaf *prox;
}ListaF;

typedef struct fila{
    ListaF *ini;
    ListaF *fim;
    int n;
} Fila;

Fila *criarFila();
void inserirFila(Fila *f, int v);
int retirarFila(Fila *f);
void imprimirFila (Fila *f);
void liberarFila(Fila *f);

#endif //GRAFO1_FILAS_H