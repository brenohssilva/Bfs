#ifndef GRAFO1_GRAPH_H
#define GRAFO1_GRAPH_H

typedef struct aresta{
    int dest; // destino do nodo
    int peso;
    struct aresta *prox;
} Aresta;

typedef struct nodo{
    int orig; //origem
    struct nodo *prox;
    Aresta *adj; // lista de adjacencias
} Nodo;

typedef struct grafo{//descritor
    Nodo *list;// lista de nodos
    int size; //tamanho da lista

} Grafo;

void criaNodos(Grafo *g, int nodos); //cria lista de nodos com base na primeira linha do arquivo
Aresta *inserirAresta(Aresta *ar, int d, int p);  //insere uma aresta numa lista
Grafo* criaGrafo(FILE *fp); // criacao e montagem do grafo
void imprimeGrafo(Grafo *g);  //imprime lista adjacencia
void liberar(Grafo *g); //libera memoria
Nodo* buscarNodo(Grafo *g, int v);
int possuiNodo( int *res, int v, int tam);
int* BFS(Grafo *g, int v);
void printBusca(int *res, int tam);
#endif //GRAFO1_GRAPH_H