// Crie uma função com o seguinte protótipo void split(long int x, int *l, int *h), a
// qual recebe um número inteiro longo x e coloca nas variáveis l e h seus 32 bits menos e
// // mais significativos, respectivamente.
// #include <stdio.h>
// #include <stdlib.h>
// // long long int tem 8 bytes,long int só 4 bytes. Portanto,não faz sentido pensar em 4 bytes nesse exercicio,pois
// // o long int só tem 32 bits,já o long long tem 64 bits
// void split(long long int x,int *l,int *h){
//     int * ptr_temp=(int *)&x;
//     *l=ptr_temp[0];
//     *h=ptr_temp[1];
//     return;
// }
// int main(){
//     int l,h;
//     int i;
//     long long int x=100000;
//     split(x,&l,&h);
    
//     printf("Valor de h:\n%d\n",h);
//     printf("Valor de l:\n%d\n",l);
//     return 0;
// }


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
// #include <stdio.h>
// void ordena3(int *a, int *b, int *c);
// int main(){
//     int a,b,c;
//     printf("Digite 'a':\n");
//     scanf("%d",&a);
//     printf("\nDigite 'b':\n");
//     scanf("%d",&b);
//     printf("\nDigite 'c':\n");
//     scanf("%d",&c);
//     printf("\nValores antes:\na=%d,b=%d,c=%d",a,b,c);
//     ordena3(&a,&b,&c);
//     printf("\nValores depois:\na=%d,b=%d,c=%d",a,b,c);

   
//     return 0;
// }
// void ordena3(int *a, int *b, int *c){
//     int temp1,temp2;
//     if(*a == *b && *b == *c){
//         return;

//     }
//     if(*a >=*b ){
//         if(*c>=*b){
//             if(*c>=*a){
//                 temp1=*a;
//                 *a=*b;
//                 *b=temp1;
//                 return;
//                 //b a c
//             }else{
//                 temp1=*a;
//                 *a=*b;
//                 *b=*c;
//                 *c=temp1;
//                 return;
//                 // b c a
//             }
//         }else{
//             temp1=*c;
//             *c=*a;
//             *a=temp1;
//             return;
//             // c b a
//         }
//     }else if(*a>=*c){
//             temp1=*a;
//             *a=*c;
//             *c=*b;
//             *b=temp1;
//             return;
//             // c a b
//     }else if(*c>=*b){
//         return;
//         // a b c
//     }else{
//         temp1=*b;
//         *b=*c;
//         *c=temp1;
//         return;
//         // a c b 
//     }

// }


//Crie um programa que receba um número inteiro N e que aloque memória dinamicamente

// para um vetor de números inteiros. A seguir, imprima na saída padrão da aplicação o en-
// dereço de memória de cada elemento do vetor. Além disso, supondo que saiba o tamanho

// em bytes de um número inteiro por meio de sizeof(int) qual padrão pode ser notado nos
// endereços de memória impressos?
// #include <stdio.h>
// #include <stdlib.h>
// int main(){
//     int *ptr;
//     int N;
//     printf("Digite um numero:\n");
//     scanf("%d",&N);
//     ptr=(int *)malloc(sizeof(int)*N);
//     for(int i=0;i<N;i++){
//         printf("\nEndereco numero %d:%p",i,&ptr[i]);
//     }
//     return 0;
// }    

// Crie um programa que receba um número inteiro N e que aloque memória dinamica-
// mente para dois vetores u e v de tamanho N com seus elementos preenchidos pelo usuário

// por meio da entrada padrão. A seguir, realize os seguintes itens:
// a) Imprima o resultado da soma desses vetores: ⃗u +⃗v.
// b) Imprima o resultado da subtração desses vetores: ⃗u −⃗v.
// c) Imprima o resultado do produto interno/ponto desses vetores: ⃗u ·⃗v.
// d) Imprima o ângulo θ = ang(⃗u,⃗v) entre esses vetores, em que

// θ = arccos 
//  u ·v
// ∥⃗u∥∥⃗v∥

// , θ ∈ [0, π]
// #include <stdio.h>
// #include <stdlib.h>
// #include <math.h>
// void a(float *,float*,int);
// void b(float *,float*,int);
// float c(float *,float*,int);
// void d(float *,float*,int);
// float calcula_norma(float*,int);
// int main(){
//     float *u,*v;
//     int N;
//     printf("Digite as dimensoes dos vetores:\n");
//     scanf("%d",&N);
//     u=malloc(sizeof(float)*N);
//     v=malloc(sizeof(float)*N);
//     for(int i=0;i<N;i++){
//         printf("Digite a %d dimensao de u:\n",i+1);
//         scanf("%f",&u[i]);
//         printf("Digite a %d dimensao de v:\n",i+1);
//         scanf("%f",&v[i]);
//     }
//     a(u,v,N);
//     b(u,v,N);
//     printf("\nO produto interno de u e v eh de %.2f:\n",c(u,v,N));
//     d(u,v,N);
//     return 0;
// }
// void a(float *u,float* v,int N){
//     int i;
//     for(i=0;i<N;i++){
//         printf("\nDimensao %d de u+v: %.2f",i+1,u[i]+v[i]);
//     }
    
// }
// void b(float *u,float* v,int N){
//     int i;
//     for(i=0;i<N;i++){
//         printf("\nDimensao %d de u-v: %.2f",i+1,u[i]-v[i]);
//     }
    
// }
// float c(float *u,float* v,int N){
//     int i;
//     float soma=0;
//     for(i=0;i<N;i++){

//         soma+=u[i]*v[i];

//     }
  
//     return soma;
// }
// void d(float * u,float* v,int N){
//     float norma_u,norma_v,produto_u_v;
//     norma_u=calcula_norma(u,N);
//     norma_v=calcula_norma(v,N);
//     produto_u_v=c(u,v,N);
//     printf("\nO angulo de u e v eh de :%.2f",acos(produto_u_v/(norma_u*norma_v)));

// }
// float calcula_norma(float* vec,int N){
//     int i;
//     float soma=0;
//     for(i=0;i<N;i++){
//         soma+=pow(vec[i],2);

//     }
//     return sqrt(soma);
// }

//Crie um programa que receba dois números inteiros m e n, que receba as entradas de uma
// matriz A de tamanho m × n, e que imprima na saída padrão da aplicação essa matriz.
// Entretanto, nesse exercício você está encarregado de implementar essa matriz como um
// vetor simples alocado dinamicamente (e não como um vetor de vetores).
// #include <stdio.h>
// #include <stdlib.h>
// int main(){
//     // m = linhas
//     // n = colunas
//     int m,n,i,j;
//     int *matriz;
//     printf("Digite o numero de linhas da matriz:\n");
//     scanf("%d",&m);
//     printf("Digite o numero de colunas da matriz:\n");
//     scanf("%d",&n);
//     matriz=malloc(sizeof(int)*m*n);
//     for(i=0;i<m;i++){
//         for(j=0;j<n;j++){
//             printf("Digite o valor da posicao (%d,%d):\n",i,j);
//             scanf("%d",&matriz[(n*i)+j]);
//         }
//     }
//     printf("Printando a matriz:\n");
//     for(i=0;i<m;i++){
//         for(j=0;j<n;j++){
//             printf("%d\t",matriz[(n*i)+j]);
//         }
//         printf("\n");
//     }
//     free(matriz);
//     return 0;
// }

// Crie uma função que receba uma matriz A ∈ Rm×n
// e dois números inteiros m e n, e que
// transponha a matriz A, retornando a matriz A
// T alocada dinamicamente.
// #include <stdio.h>
// #include <stdlib.h>
// int **transpondo(int **,int,int);
// int main(){
//     int **matriz,**matriz_trans;
//     int m,n,i,j;
//     printf("Digite o numero de linhas da matriz:\n");
//     scanf("%d",&m);

//     printf("Digite o numero de colunas da matriz:\n");
//     scanf("%d",&n);

//     matriz=(int **)malloc(sizeof(int *)*m);

//     for( i=0;i<m;i++){
//         matriz[i]=malloc(sizeof(int)*n);
//     }

//     for(i=0;i<m;i++){

//         for(j=0;j<n;j++){
//             printf("Digite o valor de (%d,%d) da matriz: ",i,j);
//             scanf("%d",&matriz[i][j]);
//         }

//     }

//     matriz_trans=transpondo(matriz,m,n);

//     printf("Matriz normal:\n");
//     for(i=0;i<m;i++){

//         for(j=0;j<n;j++){
           
//             printf("%d\t",matriz[i][j]);
//         }
//         free(matriz[i]);
//         printf("\n");

//     }
//     printf("Matriz transposta:\n");
//     for(i=0;i<n;i++){
//         for(j=0;j<m;j++){

//            printf("%d\t",matriz_trans[i][j]);
//         }
//         free(matriz_trans[i]);
//         printf("\n");
//     }
//     free(matriz);
//     free(matriz_trans);
//     return 0;
// }
// int **transpondo(int ** matriz,int m,int n){
//     int i,j;
//     int **matriz_trans=(int **)malloc(sizeof(int *)*n);
//     for(i=0;i<n;i++){
//         matriz_trans[i]=malloc(sizeof(int)*m);
//     }
//     for(i=0;i<n;i++){
//         for(j=0;j<m;j++){
//             matriz_trans[i][j]=matriz[j][i];
//         }
       
//     }
//     return matriz_trans;
// }
// Crie uma função com o protótipo int *concatena(const int *a, int na, const int
// *b, int nb), a qual retorna um novo vetor alocado dinamicamente de tamanho na + nb,
// contendo os elementos de a seguidos dos elementos de b. Caso a alocação falhe, a função
// deve retornar NULL. No programa principal, os vetores a e b também devem ser alocados
// dinamicamente, e toda a memória deve ser liberada ao final.

// #include <stdio.h>
// #include <stdlib.h>
// int ** mult_matriz(int**,int**,int,int,int);
// void free_matrizes(int **,int **,int **,int,int);
// int main(){
//     int m,n,p,i,j;
//     int **A,**B,**C;

//     printf("Digite o valor de M:\n");
//     scanf("%d",&m);
//     printf("Digite o valor de N:\n");
//     scanf("%d",&n);
//     printf("Digite o valor de P:\n");
//     scanf("%d",&p);
//     if(n<=0 || m<=0 || p<=0){
//         printf("Dados invalidos de matriz!\nPrograma encerrando...");
//         return 0;
//     }
//     // A=mxn e B=nxp
//     A=(int**)malloc(sizeof(int*)*m);
//     B=(int**)malloc(sizeof(int*)*n);
//     for(i=0;i<m;i++){
//         A[i]=(int*)malloc(sizeof(int)*n);
//     }
//     for(i=0;i<n;i++){
//         B[i]=(int *)malloc(sizeof(int)*p);
//     }

//     printf("Preenchendo os vetores:\nA\n");
//     for(i=0;i<m;i++){
//         for(j=0;j<n;j++){
//             printf("Posicao (%d,%d) de A:\n",i,j);
//             scanf("%d",&A[i][j]);
            
//         }
//     }
//     printf("Preenchendo os vetores:\nB\n");
//     for(i=0;i<n;i++){
//         for(j=0;j<p;j++){
//             printf("Posicao (%d,%d) de B:\n",i,j);
//             scanf("%d",&B[i][j]);
            
//         }
//     }
//     C=mult_matriz(A,B,m,n,p);
//     printf("Printando o vetor C:\n");
//     for(i=0;i<m;i++){
//         for(j=0;j<p;j++){
//             printf("%d\t",C[i][j]);
//         }
//         printf("\n");
//     }
//     free_matrizes(A,B,C,m,n);
//     return 0;
// }
// int ** mult_matriz(int** A,int** B,int m,int n ,int p){
//     int ** C=(int **)malloc(sizeof(int*)*m);
//     int i,j,k;
//     for(i=0;i<m;i++){
//         C[i]=calloc(p,sizeof(int));
//     }
//     for(i=0;i<m;i++){
//         for(j=0;j<p;j++){
//             for(k=0;k<n;k++){
//                 C[i][j]+=A[i][k]*B[k][j];
//             }
//         }
//     }
//     return C;
// }

// void free_matrizes(int ** A,int **B,int **C,int m,int n){
//     int i;
//     for(i=0;i<m;i++){
//         free(A[i]);
//     }
//     for(i=0;i<n;i++){
//         free(B[i]);

//     }
//     for(i=0;i<m;i++){
//         free(C[i]);
//     }
//     free(C);
//     free(A);
//     free(B);
//     return;
// }


// Crie uma função com o protótipo int *concatena(const int *a, int na, const int
// *b, int nb), a qual retorna um novo vetor alocado dinamicamente de tamanho na + nb,
// contendo os elementos de a seguidos dos elementos de b. Caso a alocação falhe, a função
// deve retornar NULL. No programa principal, os vetores a e b também devem ser alocados
// dinamicamente, e toda a memória deve ser liberada ao final.
// #include <stdio.h>
// #include <stdlib.h>
// int *concatena(const int *a, int na, const int *b, int nb);
// int main(){
//     int *a,*b,*c;
//     int na,nb,i;
//     printf("Digite o tamanho de A:\n");
//     scanf("%d",&na);
//     printf("Digite o tamanho de B:\n");
//     scanf("%d",&nb);
//     a=(int *)malloc(sizeof(int)*na);
//     b=(int *)malloc(sizeof(int)*nb);
//     if(a==NULL && b!=NULL){
//         free(b);
//         printf("Erro de alocacao!");
//         return 0;
//     }else if(a!=NULL && b == NULL){
//         free(a);
//         printf("Erro de alocacao!");
//         return 0;
//     }else if(a==NULL && b==NULL){
//         printf("Erro de alocacao!");
//         return 0;
//     }
//     printf("\nPreenchendo A:\n");
//     for(i=0;i<na;i++){
//         printf("Digite o valor %d de A:\n",i);
//         scanf("%d",&a[i]);
//     }
//     printf("\nPreenchendo B:\n");
//     for(i=0;i<nb;i++){
//         printf("Digite o valor %d de B\n",i);
//         scanf("%d",&b[i]);
    
//     }
//     c=concatena(a,na,b,nb);
//     if(c == NULL){
//         free(a);
//         free(b);
//         printf("Erro de alocacao!");
//         return 0;
//     }
//     printf("\nA:");
//     for(i=0;i<na;i++){
//         printf("%d\t",a[i]);
//     }
//     printf("\nB:");
//     for(i=0;i<nb;i++){
//         printf("%d\t",b[i]);
    
//     }
//     printf("\nC:");
//     for(i=0;i<na+nb;i++){
//         printf("%d\t",c[i]);
//     }
//     free(a);
//     free(b);
//     free(c);
//     return 0;

// }
// int *concatena(const int *a, int na, const int *b, int nb){
//     int *c;
//     int i;
//     c=(int *)malloc(sizeof(int)*(na+nb));
//     if(c == NULL){
//         return NULL;
//     }
//     for(i=0;i<na;i++){
//         c[i]=a[i];
//     }
//     for(i=0;i<nb;i++){
//         c[i+na]=b[i];
//     }
//     return c;
// }

// Crie uma função com o protótipo char *duplica(const char *s), a qual aloca dinami-
// camente a quantidade exata de memória necessária e retorna uma cópia da cadeia de

// caracteres s (não utilize strdup). No programa principal, leia uma palavra, duplique-a,
// altere o primeiro caractere da cópia para ’X’ e imprima a original e a cópia, mostrando
// que ocupam regiões de memória distintas. Libere a memória ao final.
// // Dica: Lembre-se de reservar espaço para o caractere terminador ’\0’.
// #include <stdio.h>
// #include <stdlib.h>
// char *duplica(const char *s);
// int main(){
//     char s[256];
//     char *copia;
//     printf("Digite uma palavra:\n");
//     scanf(" %s",s);
//     copia=duplica(s);
    
//     if(copia ==  NULL){
//         printf("Erro de alocacao!");
//         return 0;
//     }
//     copia[0]='X';
//     printf("Original:%s\nCopia:%s",s,copia);
//     free(copia);
//     return 0;
// }
// char *duplica(const char *s){
//     int i=0;
//     char *copia;
//     while(s[i]!='\0'){
//         i++;
//     }
//     if(i==0){
//         return NULL;
//     }
//     copia=malloc(i+1);
//     if(copia == NULL){
//         return NULL;
//     }
//     for(i=0;s[i]!='\0';i++){
//         copia[i]=s[i];
//     }
//     copia[i]='\0';
//     return copia;


// }

//Crie as funções int **aloca_matriz(int m, int n) e void libera_matriz(int **M,

// int m), as quais alocam e liberam, respectivamente, uma matriz de inteiros m × n repre-
// sentada como um vetor de ponteiros. Escreva um programa que leia m, n e os elementos

// da matriz, e imprima na saída padrão da aplicação a soma de cada linha.
// #include <stdio.h>
// #include <stdlib.h>
// int ** aloca_matriz(int m,int n);
// void libera_matriz(int **M,int m);
// int main(){
//     int m,n;
//     int i,j;
//     int **M;
//     int *soma_linhas;
//     printf("Digite o numero de linhas da matriz:\n");
//     scanf("%d",&m);
//     printf("Digite o numero de colunas da matriz:\n");
//     scanf("%d",&n);
//     M=aloca_matriz(m,n);
//     if(M == NULL){
//         printf("Erro de alocacao!");
//         return 0;

//     }
//     soma_linhas=calloc(m,sizeof(int));
//     if(soma_linhas==NULL){
//         free(M);
//         printf("Erro de alocacao!");
//         return 0;
//     }
//     for(i=0;i<m;i++){
//         for(j=0;j<n;j++){
//             printf("Digite o numero de coordenada (%d,%d):\n",i,j);
//             scanf("%d",&M[i][j]);
//             soma_linhas[i]+=M[i][j];
//         }
//     } 
//     for(i=0;i<m;i++){
//         printf("\nSoma da %d linha: %d",i,soma_linhas[i]);
//     }
//     libera_matriz(M,m);
//     free(soma_linhas);
// }

// int ** aloca_matriz(int m,int n){
//     int **M;
//     int i;
//     M=malloc(sizeof(int*)*m);
//     if( M == NULL){
//         return NULL;
//     }
//     for(i=0;i<m;i++){
//         M[i]=malloc(sizeof(int)*n);
//         if(M[i] == NULL){
//             return NULL;

//         }

//     }
//     return M;
    
// }
// void libera_matriz(int **M,int m){
//     for(int i=0;i<m;i++){
//         free(M[i]);

//     }
//     free(M);
// }


// Crie uma função com o protótipo int *filtra_pares(const int *v, int n, int *tam),
// a qual retorna um novo vetor alocado dinamicamente contendo apenas os elementos
// pares de v, na mesma ordem em que aparecem. O vetor retornado deve ter exatamente o
// tamanho necessário, e esse tamanho deve ser devolvido por meio do ponteiro tam. Caso
// não existam elementos pares, a função deve retornar NULL e *tam deve valer 0.
#include <stdio.h>
#include <stdlib.h>
int *filtra_pares(const int *v, int n, int *tam);
int main(){
    int tam;
    int n,*v,*pares;
    printf("Digite o tamanho do vetor desejado:\n");
    scanf("%d",&n);
    v=malloc(sizeof(int)*n);
    if(v == NULL){
        printf("Erro de alocacao!");
        return 0;
    }
    for(int i=0;i<n;i++){
        printf("Digite a posicao %d:\n",i);
        scanf("%d",&v[i]);

    }
    pares=filtra_pares(v,n,&tam);
    if(pares == NULL){
        free(v);
        printf("Erro de alocacao ou nao ha pares!");
        return 0;
    }
    printf("Pares(%d)\n",tam);
    for(int i=0;i<tam;i++){
        printf("%d\t",pares[i]);
    }
    free(v);
    free(pares);
    return 0;
}
int *filtra_pares(const int *v, int n, int *tam){
    int *pares;
    *tam=0;
    int index=0;
    for(int i=0;i<n;i++){
        if(v[i]%2 ==0){
            *tam+=1;
        }
   
    }
    if(*tam ==  0){
        return NULL;
    }
    pares=malloc(sizeof(int)*(*tam));
    if(pares ==  NULL){
        return NULL;
    }
    for(int i=0;i<n;i++){
        if(v[i]%2 ==0){
            pares[index]=v[i];
            index++;
        }
   
    }
    return pares;
}
