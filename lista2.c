// Crie uma função com o seguinte protótipo void split(long int x, int *l, int *h), a
// qual recebe um número inteiro longo x e coloca nas variáveis l e h seus 32 bits menos e
// mais significativos, respectivamente.

//Crie uma função que receba um vetor com n números reais e que “retorne” à função chamadora
//o maior e o menor número do vetor, simultaneamente.
// #include <stdio.h>
// void maior_menor(float* vec,float *maior,float *menor,int size){
//     *maior=vec[0];
//     *menor=vec[0];
//     for(int i=0;i<size;i++){
//         if(vec[i]>*maior){
//             *maior=vec[i];
//         }
//         if(vec[i]<*menor){
//             *menor=vec[i];
//         }
//     }
// }

// Crie uma função que recebe uma cadeia de caracteres S e um caractere c e retorne a primeira
// e a última ocorrência de c na cadeia S. Caso não houver nenhuma ocorrência de c em S,
// retorne −1 para ambas ocorrências.
// #include <stdio.h>
// #include <stdlib.h>
// int achar_char(char*,char,int*,int*);
// int main(){
//     int *first_ocu=malloc(4),*last_ocu=malloc(4);
//     char *palavra,letra;
//     palavra=malloc(256);
//     printf("Digite uma palavra:\n");
//     scanf(" %s",palavra);
//     printf("Agora um char:\n");
//     scanf(" %c",&letra);
    
//     achar_char(palavra,letra,first_ocu,last_ocu);
//     printf("%d - %d",*first_ocu,*last_ocu);
//     return 0;
// }
// int achar_char(char* palavra,char letra,int* first_ocu,int* last_ocu){
//     *first_ocu=-1;
//     *last_ocu=-1;
//     for(int i=0;palavra[i]!='\0';i++){
//         if(letra == palavra[i]){
//             if(*first_ocu == -1){
//                 *first_ocu=i;
//             }
//             *last_ocu=i;
//         }
       
//     }
//     return 0;
// }
// Considere o seguinte protótipo void ibilce_memcpy(void *dest, void *src, size_t
// n). Implemente a função dada por este protótipo, a qual deve copiar os n primeiros bytes
// da região de memória apontada por src para a região de memória apontada por dest.

// Note: É assegurado que as regiões de memória apontadas por src e dest não se so-
// brepõem.