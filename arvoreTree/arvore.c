#include "arvore.h"
#include <stdio.h>
#include <stdlib.h>

struct arv{
    char info;
    struct arv* esq;
    struct arv* dir;
};


Arv* criar_vazia(){
    return NULL;
};

Arv* criar(char c, Arv* sae, Arv* sad){
    Arv* p = (Arv*)malloc(sizeof(Arv));
    p->info = c;
    p->esq = sae;
    p->dir = sad;
    return p;
};

int vazia(Arv* a){

return a == NULL;
};

void imprimir(Arv* a){
    if(!vazia(a)){
        printf("%c -> ", a->info); //mostra a raíz
        imprimir(a->esq); //subarvore a esquerda
        imprimir(a->dir); //subarvore a direita
    }

}
