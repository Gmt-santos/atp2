// Crie uma função que receba um número inteiro positivo n e que imprima na saída padrão
// da aplicação a seguinte árvore de asteriscos.
// Exemplo: A saída a seguir é resultante da chamada da função com n = 5.
//      *    
//     ***
//    *****
//   *******
//  *********
// #include <stdio.h>
// void printar_espaco(int);
// void printar_asterisco(int);
// int main(){
//     int n,i;
//     printf("Digite as linhas de asteriscos que quer:\n");
//     scanf("%d",&n);
//     for(i=1;i<n+1;i++){
//         printar_espaco(n-i);
//         printar_asterisco(2*(i-1)+1);
       
//     }
//     return 0;

// }
// void printar_espaco(int qtde){
//     int i;
//     for(i=0;i<qtde;i++){
//         printf(" ");
//     }
// }
// void printar_asterisco(int qtde){
//     int i;
//      for(i=0;i<qtde;i++){
//         printf("*");
//     }
//     printf("\n");
// }

// Crie uma função que receba quatro número reais x1, y1, x2, y2 e que retorne a distância
// euclidiana entre os pontos P1 = (x1, y1) e P2 = (x2, y2).
// #include <stdio.h>
// #include <math.h>
// float calcular_distancia_euclidiana(float x1,float y1,float x2,float y2t);
// int main(){
//     float x1,x2,y1,y2;

//     printf("Digite o x1:\n");
//     scanf("%f",&x1);
//     printf("Digite o x2:\n");
//     scanf("%f",&x2);

//     printf("Digite o y1:\n");
//     scanf("%f",&y1);

//     printf("Digite o y2:\n");
//     scanf("%f",&y2);

//     printf("A distancia euclidiana eh de %.2f",calcular_distancia_euclidiana(x1,y1,x2,y2));
//     return 0;
// }
// float calcular_distancia_euclidiana(float x1,float y1,float x2,float y2){
//     return sqrt(pow((x1-x2),2)+pow((y1-y2),2));
// }    

// Crie uma função que receba dois vetores u, v ∈ Rn e um número inteiro positivo n, e que
// retorne a distância euclidiana entre u e v.
// #include <stdio.h>
// #include <stdlib.h>
// #include <math.h>
// float distancia_euclidiana(float*,float*,int);
// int main(){
//     float *v,*u;
//     int n;
//     printf("Digite as dimensões dos vetores:\n");
//     scanf("%d",&n);
//     v=malloc(n*sizeof(float));
//     u=malloc(n*sizeof(float));
//     for(int i=0;i<n;i++){
//         printf("Digite a dimensao %d de u: ",i+1);
//         scanf("%f",&u[i]);
//         printf("\n");
//     }
//     for(int i=0;i<n;i++){
//         printf("Digite a dimensao %d de v: ",i+1);
//         scanf("%f",&v[i]);
//         printf("\n");
//     }
//     printf("A distancia entre os dois eh de : %.2f",distancia_euclidiana(u,v,n));
//     free(u);
//     free(v);
//     return 0;
// }
// float distancia_euclidiana(float* u,float* v,int n){
//     float coordenadas_subtraidas=0;
//     for(int i=0;i<n;i++){
//         coordenadas_subtraidas+=pow((u[i]-v[i]),2);
//     }
//     return sqrt(coordenadas_subtraidas);
// }

// Realize os seguintes itens.
// a) Crie uma função que receba um vetor com n números reais e que retorne à função chamadora
// o maior número no vetor.
// b) Crie uma função que receba um vetor com n números reais e que retorne à função chamadora
// o menor número no vetor.
// #include <stdio.h>
// #include <stdlib.h>
// #include <time.h>
// float achar_maior(float*,int);
// float achar_menor(float *,int);
// void encher_vetor(float*,int);
// void printar_vetor(float*,int);
// int main(){
//     float *p;
//     int n;
//     printf("Digite o tamanho N do vetor:\n");
//     scanf("%d",&n);
//     p=malloc(sizeof(float)*n);
//     encher_vetor(p,n);
//     printar_vetor(p,n);
//     printf("\n");
//     printf("O maior eh:\n%f",achar_maior(p,n));
//     printf("\nO menor eh:\n%f",achar_menor(p,n));
//     free(p);
//     return 0;
    
// }
// float achar_maior(float *vec,int size){
//     float maior=vec[0];
//     for(int i=0;i<size;i++){
//         if(maior<vec[i]){
//             maior=vec[i];
//         }
//     }
//     return maior;
// }
// float achar_menor(float *vec,int size){
//     float menor=vec[0];
//     for(int i=0;i<size;i++){
//         if(menor>vec[i]){
//             menor=vec[i];
//         }
//     }
//     return menor;
// }
// void encher_vetor(float *vec,int size){
//     srand(time(NULL));
//     for(int i=0;i<size;i++){
//         vec[i]=(float)(rand()%100);
//     }

// }
// void printar_vetor(float *vec,int size){  
//     for(int i=0;i<size;i++){
//         printf("%f\t",vec[i]);
//         if((i+1)%9==0){
//             printf("\n");
//         }
//     }
// }

// Crie uma função que receba um número inteiro longo não negativo n e que imprima na
// saída padrão da aplicação a representação binária deste número.
// #include <stdio.h>
// void int_to_binary(long long int,char*);
// void reverse_binary(char*,int);
// int main(){
//     // long long int = 8 bytes = 64 bits
//     char binary[64];
//     long long int numero;
//     printf("Digite um numero:\n");
//     scanf("%lld",&numero);
//     int_to_binary(numero,binary);
//     printf("Binario:%s",binary);
//     return 0;
// }
// void reverse_binary(char* binary,int size){
//     int i;
//     char aux;
//     // size -1 pra ignorar o '\0'
//     for(i=0;i<size-1-i;i++){
//         aux=binary[i];
//         binary[i]=binary[size-1-i];
//         binary[size-1-i]=aux;
//     }
// }
// void int_to_binary(long long int numero,char* binary){
 
//     int actual_ptr=0;

//     while(numero>0){
//         if(numero%2 == 0){
//             binary[actual_ptr]='0';
           
//         }else{
//             binary[actual_ptr]='1';
//         }
//         actual_ptr++;
//         numero*=0.5;
//     }
//     binary[actual_ptr]='\0';
   
//     reverse_binary(binary,actual_ptr);
// }   

// Crie uma função que receba um vetor com n números inteiros e que inverta a ordem dos
// elementos no vetor, ou seja, faça com que o primeiro elemento mova-se para o último, o
// segundo para o penúltimo, e assim por diante.

// #include <stdio.h>
// #include <stdlib.h>
// void inverter_matriz(int*,int);
// int main(){
//     int *matriz;
//     int n;
//     printf("Digite o tamanho da matriz:\n");
//     scanf("%d",&n);
//     matriz=malloc(n*sizeof(int));
//     for(int i=0;i<n;i++){
//         printf("Digite o numero %d da matriz:\n",i);
//         scanf("%d",&matriz[i]);
//     }
//     inverter_matriz(matriz,n);
//     for(int i=0;i<n;i++){
//         printf("%d\t",matriz[i]);
//     }
//     free(matriz);
// }
// void inverter_matriz(int *matriz,int size){
//     int i,aux;
//     for(i=0;i<size-i-1;i++){
//         aux=matriz[i];
//         matriz[i]=matriz[size-1-i];
//         matriz[size-1-i]=aux;
//     }
// }


// Crie uma função que receba um número inteiro positivo n e que imprima na saída padrão
// da aplicação as seguintes árvores de asteriscos intercaladas.

// #include <stdio.h>
// void printar_espaco(int);
// void printar_asterisco(int);
// void printar_arvore(int);
// int main(){
//     int n;
//     printf("Digite as linhas de asteriscos que quer:\n");
//     scanf("%d",&n);
//     printar_arvore(n);
//     return 0;

// }
// void printar_espaco(int qtde){
//     int i;
//     for(i=0;i<qtde;i++){
//         printf(" ");
//     }
// }
// void printar_asterisco(int qtde){
//     int i;
//      for(i=0;i<qtde;i++){
//         printf("*");
//     }
   
// }
// void printar_arvore(int n){
//     int i,j;
//     for(i=1;i<n+1;i++){
           
//         for(j=0;j<2*n-1;j++){
//             if(j==0){
//                 printar_espaco(n-i);
//             }
//             if(j%2 == 0)
//                 printar_asterisco(2*(i-1)+1);
            
//             else
//                 printar_asterisco(2*n-(2*(i-1)+1));
//             printar_espaco(1);
//         }
//         printf("\n");
       
//     }
// }

//Crie uma função int eh_primo(int n) que retorne 1 se n for primo e 0 caso contrário. Em
// seguida, escreva um programa que leia dois números inteiros a e b, com a ≤ b, e que utilize
// a função eh_primo para imprimir na saída padrão da aplicação todos os números primos
// no intervalo [a, b].
// #include <stdio.h>
// int eh_primo(int n);
// int main(){
//     int a,b,i;
//     do{
//         printf("Digite um numero inteiro:\n");
//         scanf("%d",&a);
//         printf("\nDigite outro numero inteiro maior que o anterior:\n");
//         scanf("%d",&b);
//         if(a>b){
//             printf("Entradas invalidas!\n");
//         }
//     }while(a>b);
//     for(i=a;i<=b;i++){
//         if(eh_primo(i) == 1){
//             printf("%d\t",i);
//         }
//     }

//     return 0;
// }
// int eh_primo(int n){
//     int i;
//     if(n == 0 || n==1){
//         return 0;
//     }else{
//         for(i=2;i<=(int)(n/2);i++){
//         if(n % i == 0){
//             return 0;
//         }
           
//     }
//     return 1;
//     }
    
// }

// Crie uma função int inverte_numero(int n) que receba um número inteiro não nega-
// tivo n e retorne o número formado pelos seus dígitos em ordem inversa. Em seguida, crie

// uma função int eh_palindromo(int n) que retorne 1 se n for um número palíndromo
// (isto é, igual ao seu inverso) e 0 caso contrário, reutilizando a função inverte_numero.
// Escreva um programa que leia n e imprima o seu inverso e se ele é palíndromo.

// #include <stdio.h>
// int eh_palindromo(int n);
// int inverte_numero(int n);
// int main(){
//     int n,n_inverso;
//     printf("Digite um numero inteiro:\n");
//     scanf("%d",&n);
//     n_inverso=inverte_numero(n);
//     printf("O inverso de %d eh %d\n",n,n_inverso);
//     if(eh_palindromo(n)){
//         printf("Entao, eles sao palindromos!");
//     }else{
//         printf("Entao, eles nao sao palindromos!");
//     }
//     return 0;
// }
// int inverte_numero(int n){
//     int n_inverso=0;
//     while(n>0){
//         n_inverso*=10;
//         n_inverso+=(n%10);
//         n=n/10;
//     }
//     return n_inverso;
// }
// int eh_palindromo(int n){
//     int n_inverso=inverte_numero(n);
//     if(n_inverso ==  n){
//         return 1;

//     }else{
//         return 0;
//     }
    
// }

// Crie uma função int mdc(int a, int b) que calcule o máximo divisor comum de dois
// números inteiros positivos utilizando o algoritmo de Euclides (versão iterativa). Em
// seguida, crie uma função int mmc(int a, int b) que calcule o mínimo múltiplo comum
// reutilizando a função mdc. Escreva um programa que leia dois números e imprima o MDC
// e o MMC.
// #include <stdio.h>
// int mdc(int,int);
// int mmc(int,int);
// int main(){
//     int a,b;
//     printf("Digite um numero:\n");
//     scanf("%d",&a);
//     printf("Digite outro numero:\n");
//     scanf("%d",&b);
//     printf("MMC:%d\nMDC:%d",mmc(a,b),mdc(a,b));

//     return 0;
// }
// int mdc(int a ,int b){
//     int n=a;
//     int resto;
//     int div=b;
//     while(div!=0){
//         resto=n%div;
//         n=div;
//         div=resto;

//     }
//     return n;
// }
// int mmc(int a,int b){
//     return (a*b)/mdc(a,b);
// }

// Crie uma função double media(double v[], int n) que retorne a média dos n elemen-
// tos do vetor v e uma função double desvio(double v[], int n) que retorne o desvio

// padrão populacional dos elementos, reutilizando a função media. Escreva um programa
// que leia n e os n valores, e imprima os resultados com duas casas decimais.
// #include <stdio.h>
// #include <math.h>
// #include <stdlib.h>
// double media(double*,int);
// double desvio(double*,int);
// int main(){
//     int n;
//     double *vec;
//     printf("Digite o tamanho do vetor:\n");
//     scanf("%d",&n);
//     vec=malloc(n*sizeof(double));
//     for(int i=0;i<n;i++){
//         printf("Digite um numero pra posicao %d:\n",i);
//         scanf("%lf",&vec[i]);

//     }
//     printf("Media=%.2f",media(vec,n));
//     printf("\nDesvio=%.2f",desvio(vec,n));
//     free(vec);
//     return 0;
   
    
// }
// double media(double* vec,int n){
//     int i;
//     double sum=0;
//     for(i=0;i<n;i++){
//         sum+=vec[i];
//     }
//     return (sum/n);
// }
// double desvio(double* vec,int n){
//     double sum=0,med;
//     med=media(vec,n);
//     int i;
//     for(i=0;i<n;i++){
//         sum+=pow((vec[i]-med),2);

//     }
//     return sqrt(((double)1/n)*sum);
// }

#include <stdio.h>
int main(void) {
int a = 1200;
int b = 500;
int x = 0;
int *d = &x;
d = a + b;
printf("Valor de x: %d.\n", x);
return 0;
}