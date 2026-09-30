#include "teste_lib.h"
#include <stdio.h>
void printar_matriz_inteiros(int *matriz,int matrizsize){
    for(int i=0;i<matrizsize;i++){
        printf("%d - ",matriz[i]);
    }
    printf("\n");
}