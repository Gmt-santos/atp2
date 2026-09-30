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
// // brepõem.
// #include <stdio.h>
// #include <stdlib.h>
// void ibilce_memcpy(void *dest, void *src, size_t n);
// int main(){
//     int src=0,dest=0;
//     printf("Digite um numero:\n");
//     scanf("%d",&src);
//     ibilce_memcpy(&dest,&src,4);
//     printf("%d - %d",src,dest);
//     return 0;
// }
// void ibilce_memcpy(void *dest, void *src, size_t n){
//     if(src == NULL || dest == NULL){
//         printf("Erro de alocacao!");
//         return;
//     }
//     unsigned char *ptr_src=src,*ptr_dest=dest;
//     for(int i=0;i<n;i++){
//         *(ptr_dest)=*(ptr_src);
//         ptr_dest++;
//         ptr_src++;
//     }
//    
//     return;
// }
//Analise o seguinte protótipo void ibilce_memmove(void *dest, void *src, size_t n).
// Implemente a função dada por este protótipo, a qual deve copiar os n primeiros bytes da
// região de memória apontada por src para a região de memória apontada por dest.
// Note: Nenhuma restrição é imposta sobre as localizações das regiões de memória.

// Crie uma função com o protótipo int soma(const int *ini, const int *fim), a qual
// recebe um ponteiro para o primeiro elemento de um vetor e um ponteiro para a posição
// imediatamente após o último elemento, e retorna a soma dos elementos. A função deve
// percorrer o vetor utilizando apenas aritmética de ponteiros, isto é, sem utilizar o operador
// de indexação []. Escreva um programa que leia n e os n elementos do vetor e imprima a
// soma.
// #include <stdio.h>
// int soma(const int *ini, const int *fim){
//     int soma=0;
//     for(int i=0;ini<fim;i++){
//         soma+=*(ini);
//          ini++;
//     }
//     return soma;
// }

//Crie uma função com o protótipo void ordena3(int *a, int *b, int *c), a qual re-
// cebe os endereços de três variáveis inteiras e reorganiza seus conteúdos de modo que,

// ao final da chamada, ∗a ≤ ∗b ≤ ∗c. Escreva também a função principal que leia os três
// valores, chame ordena3 e imprima o resultado.
#include <stdio.h>
void ordena3(int *a, int *b, int *c);
int main(){
    int a,b,c;
    printf("Digite 'a':\n");
    scanf("%d",&a);
    printf("\nDigite 'b':\n");
    scanf("%d",&b);
    printf("\nDigite 'c':\n");
    scanf("%d",&c);
    printf("\nValores antes:\na=%d,b=%d,c=%d",a,b,c);
    ordena3(&a,&b,&c);
    printf("\nValores depois:\na=%d,b=%d,c=%d",a,b,c);

   
    return 0;
}
void ordena3(int *a, int *b, int *c){
    int temp1,temp2;
    if(*a == *b && *b == *c){
        return;

    }
    if(*a >=*b ){
        if(*c>=*b){
            if(*c>=*a){
                temp1=*a;
                *a=*b;
                *b=temp1;
                return;
                //b a c
            }else{
                temp1=*a;
                *a=*b;
                *b=*c;
                *c=temp1;
                return;
                // b c a
            }
        }else{
            temp1=*c;
            *c=*a;
            *a=temp1;
            return;
            // c b a
        }
    }else if(*a>=*c){
            temp1=*a;
            *a=*c;
            *c=*b;
            *b=temp1;
            return;
            // c a b
    }else if(*c>=*b){
        return;
        // a b c
    }else{
        temp1=*b;
        *b=*c;
        *c=temp1;
        return;
        // a c b 
    }

}

