// #include <stdio.h>
// #include <stdlib.h>
// #include "teste_lib.h"
// int main(){
//     // int *numptr=NULL;
//     // numptr=malloc(10*sizeof(int));
//     // for(int i=0;i<10;i++){
//     //     *(numptr+i)=i;   
      
//     // }
//     // printar_matriz_inteiros(numptr,10);
//     // free(numptr);
//     struct dado{
//         int n;
//         struct dado *prox;
//     };
//     struct dado *dado1,*dado2,*dado3,*atual;
    
//     dado1=malloc(sizeof(struct dado));
//     dado2=malloc(sizeof(struct dado));
//     dado3=malloc(sizeof(struct dado));
//     (*dado1).n=2;
//     (*dado1).prox=dado2;
//     (*dado2).n=3;
//     (*dado2).prox=dado3;
//     (*dado3).n=20;
//     (*dado3).prox=NULL;
//     (atual)=dado1;
//     while((atual)!=NULL){
//         printf("%d ->",(*atual).n);
//         atual=(*atual).prox;

//     }
//     return 0;
// }

// #include <stdio.h>
// int ja_foi(char *str,int esquerda,int atual){
//     int i;
//     for(i=esquerda;i<atual;i++){
//         if(str[i] ==  str[atual]){
//             return 0;
//         }
//     }
//     return 1;
// }
// void permutar(char *str,int esquerda,int direita){
//     int i;
//     char temp;
//     if( direita == esquerda){
//         printf(" %s\n",str);
//         return;
//     }
//     for(i=esquerda;i<=direita;i++){
//         if(ja_foi(str,esquerda,i)){
//             temp=str[i];
//             str[i]=str[esquerda];
//             str[esquerda]=temp;
//             permutar(str,esquerda+1,direita);
//             temp=str[esquerda];
//             str[esquerda]=str[i];
//             str[i]=temp;
//         }

//     }
//     return;
// }
// int main(){
//     char str[256]="batata";
    
//     permutar(str,0,5);
// }

// #include <stdio.h>
// #include <stdlib.h>
// int fib(int *,int);
// int main(){
//     int *vec;
//     int n,i;
//     printf("Digite o n-esimo numero de fibonacci que deseja:\n");
//     scanf("%d",&n);
//     vec=malloc((n+1)*sizeof(int));
//     for(i=0;i<n+1;i++){
//         vec[i]=-1;
//     }
//     printf("%d",fib(vec,n));
// }
// int fib(int *vec,int n){
//     if(n <=1){
//        return n;
//     }else if(vec[n] == -1){
//         int fib1,fib2;
//         fib1=fib(vec,n-1);
//         fib2=fib(vec,n-2);
//         vec[n]=fib1+fib2;
//         return vec[n];
//     }else{
//         return vec[n];
//     }
   
// }
#include <stdio.h>
it mai