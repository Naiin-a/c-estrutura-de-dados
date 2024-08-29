#include <stdio.h>
#include <stdlib.h>

#define TAM 10

typedef struct pilha
{
    int vet [TAM];
    int topo;
}pilhavet;

void empilha(int valor, pilhavet*p){
    if(p->topo==TAM-1){
        printf("\npilha cheia");
        exit(0);

    }
    p->topo++;
    p-> vet[p->topo]=valor;

}

int desempilhar(pilhavet*p){
    int aux;
    if(p->topo<0){
        printf("\npilha vazia");
        exit(1);
    }
    aux=p->vet[p->topo];
    p->topo--;
    return aux;
    
}
int main(void){
    pilhavet pilha;
    int valor;
    pilha.topo = -1;
    for (int i=0; i<TAM; i++){
        printf("\n digite o valor o ser empilhado");
        scanf("%d",&valor);
        empilha(valor,&pilha);

    }
    for(int i=0; i<TAM; i++){
        printf("\n%d", desempilhar(&pilha));
    }
    printf("\n");
    return 0;
}
