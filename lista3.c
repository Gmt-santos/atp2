// Faça uma função recursiva que receba uma matriz dinâmica e calcula o somatório dos
// elementos na diagonal secundária.
// #include <stdio.h>
// #include <stdlib.h>
// int calcula_dig_sec(int **,int,int);
// int main(){
//     int soma,l,c;
//     int **matriz;
//     printf("Digite as linhas da matriz:\n");
//     scanf("%d",&l);
//     printf("Digite as colunas da matriz:\n");
//     scanf("%d",&c);
//     if(l!=c){
//         printf("A matriz n eh quadrada,entao nao tem diagonais!");
//         return 0;
//     }else if(l == 0){
//         printf("Matriz de dimensoes zero por zero nao possuem diagonais secundarias!");
//         return 0;
//     }
//     matriz=malloc(sizeof(int*)*l);
//     for(int i=0;i<c;i++){
//         matriz[i]=malloc(sizeof(int)*c);
//     }
//     for(int i=0;i<l;i++){
//         for(int j=0;j<c;j++){
//             printf("Digite o numero da posicao %d %d:\n",i,j);
//             scanf("%d",&matriz[i][j]);
//         }
//     }
//     soma=calcula_dig_sec(matriz,l-1,c-1);
//     printf("A soma eh de %d",soma);
//     for(int i=0;i<c;i++){
//         free(matriz[i]);
    
//     }
//     free(matriz);
//     return 0;
// }
// int calcula_dig_sec(int **matriz,int l,int c){
//     if(l==0){
//         return matriz[l][c-l];
//     }else{
//         return matriz[l][c-l]+calcula_dig_sec(matriz,l-1,c);
//     }
// }

// Implemente uma função recursiva que receba uma matriz dinâmica e calcula a soma de
// todos os elementos na matriz.
#include <stdio.h>
#include <stdlib.h>
int soma_mat(int **,const int*,const int*,int,int);
int main(){
    int soma,l,c;
    int **matriz;
    printf("Digite as linhas da matriz:\n");
    scanf("%d",&l);
    printf("Digite as colunas da matriz:\n");
    scanf("%d",&c);
    if(l == 0){
        printf("Matriz de dimensoes zero por zero nao possuem elementos pra somar");
        return 0;
    }
    matriz=malloc(sizeof(int*)*l);
    for(int i=0;i<c;i++){
        matriz[i]=malloc(sizeof(int)*c);
    }
    for(int i=0;i<l;i++){
        for(int j=0;j<c;j++){
            printf("Digite o numero da posicao %d %d:\n",i,j);
            scanf("%d",&matriz[i][j]);
        }
    }
    soma=soma_mat(matriz,&l,&c,0,0);
    printf("A soma eh de %d",soma);
    for(int i=0;i<c;i++){
        free(matriz[i]);
    }
    free(matriz);
    return 0;
}
int soma_mat(int ** matriz,const int *row_origin,const int *col_origin,int row,int col){
    if(row == *row_origin-1 && col == *col_origin-1){
        return matriz[row][col];
    }
    else if(col == *col_origin-1){
        return matriz[row][col]+soma_mat(matriz,row_origin,col_origin,row+1,0);
    }else{
        return matriz[row][col]+soma_mat(matriz,row_origin,col_origin,row,col+1);
    }
    
}