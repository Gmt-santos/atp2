#include <stdio.h>
#include <stdlib.h>
#include "teste_lib.h"
int main(){
    // int *numptr=NULL;
    // numptr=malloc(10*sizeof(int));
    // for(int i=0;i<10;i++){
    //     *(numptr+i)=i;   
      
    // }
    // printar_matriz_inteiros(numptr,10);
    // free(numptr);
    struct dado{
        int n;
        struct dado *prox;
    };
    struct dado *dado1,*dado2,*dado3,*atual;
    
    dado1=malloc(sizeof(struct dado));
    dado2=malloc(sizeof(struct dado));
    dado3=malloc(sizeof(struct dado));
    (*dado1).n=2;
    (*dado1).prox=dado2;
    (*dado2).n=3;
    (*dado2).prox=dado3;
    (*dado3).n=20;
    (*dado3).prox=NULL;
    (atual)=dado1;
    while((atual)!=NULL){
        printf("%d ->",(*atual).n);
        atual=(*atual).prox;

    }
    return 0;
}