// Escreva um programa que permitirá ao usuário inserir um padrão específico, denominado
// P. O programa, ao receber esse padrão P, deverá calcular o vetor LPS, um conceito muito
// importante para algoritmos de busca de padrões, como o algoritmo de Knuth-Morris-Pratt
// (KMP) visto em sala de aula. Esse vetor também conhecido como "vetor de prefixo", ar-
// mazena informações sobre o padrão, ajudando a otimizar buscas ao evitar a comparação
// de caracteres redundantes. Após concluir o cálculo do vetor LPS, o programa deverá exbir
// na saída padrão todos os elementos desse vetor.
// Nota: Cada elemento impresso do vetor deverá ser separado por espaço (não por linha).
// #include <stdlib.h>
// #include <stdio.h>
// int *lps(char * pattern,int pattern_size);
// int main(){
//     int pattern_size;
//     int * lps_vec;
//     int i;
//     char * pattern;
//     printf("Digite o tamanho do padrão:\n");
//     scanf("%d",&pattern_size);
//     pattern=malloc(sizeof(char)*(pattern_size+1));
//     printf("Agora,digite o padrao: ");
//     scanf("%s",pattern);
//     lps_vec=lps(pattern,pattern_size);
//     if(lps_vec==NULL){
//         free(pattern);
//         printf("\nErro de alocacao ou informacoes invalidas!");
//         return 1;
//     }
//     for(i=0;i<pattern_size;i++){
//         printf("%d ",lps_vec[i]);
//     }
//     free(pattern);
//     free(lps_vec);
//     return 0;
// }
// int *lps(char * pattern,int pattern_size){
//     if(pattern_size<=0){
//         return NULL;
//     }
//     if(pattern==NULL){
//         return NULL;
//     }
//     int * lps=malloc(sizeof(int)*pattern_size);
//     if(lps==NULL){
//         return NULL;
//     }
//     int i=1,len=0;
//     lps[0]=0;
//     while(i<pattern_size){
//         if(pattern[i]==pattern[len]){
//             lps[i]=len+1;
//             len++;
//             i++;
//         }else{
//             if(len!=0){
//                 len=lps[len-1];
//             }else{
//                 lps[i]=0;
//                 i++;
//             }
//         }
//     }
//     return lps;
// }

// Escreva um programa interativo que permitirá ao usuário inserir um texto qualquer, de-
// nominado de T, e um padrão específico, nomeado P. Esse programa deverá ser capaz de
// realizar uma busca com o KMP dentro do texto fornecido pelo usuário, localizando to-
// das as ocorrências do padrão P dentro do conteúdo do texto T. Ao finalizar a busca, o
// programa deverá imprimir na saída padrão da aplicação, duas informações principais: A
// primeira delas será o número total de ocorrências de P em T, independentemente de onde
// ou como essas ocorrências estão distribuídas ao longo do texto. Em seguida, o programa
// também deverá exibir todas as posições exatas das ocorrências dentro do texto T onde cada
// ocorrência do padrão P foi identificada.
// Nota: Cada impressão na saída padrão deve ser separada por linha.
// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
// int * lps(char * pattern,int pattern_size);
// int * kmp(int *lps,char * T,char * P,int t_size,int p_size,int *return_size);
// int main(){
//     char T[256],P[256];
//     int return_kmp_size;
//     int *lps_vec,*kmp_vec;
//     int t_size,p_size,i;
//     printf("Digite o texto:\n");
//     scanf(" %s",T);
//     t_size=strlen(T);
//     printf("Agora,digite o padrao:\n");
//     scanf(" %s",P);
//     p_size=strlen(P);
//     lps_vec=lps(P,p_size);
//     if(lps_vec==NULL){
//         return 1;
//     }
//     kmp_vec=kmp(lps_vec,T,P,t_size,p_size,&return_kmp_size);
//     if(kmp_vec==NULL){
//         free(lps_vec);
//         return 1;
//     } 
//     printf("Total de ocorrencias: %d",return_kmp_size);
//     printf("\nOcorrencias: ");
//     for(i=0;i<return_kmp_size;i++){
//         printf("%d ",kmp_vec[i]);
//     }
//     free(kmp_vec);
//     free(lps_vec);
//     return 0;
// }
// int *lps(char * pattern,int pattern_size){
//     if(pattern_size<=0){
//         return NULL;
//     }
//     if(pattern==NULL){
//         return NULL;
//     }
//     int * lps=malloc(sizeof(int)*pattern_size);
//     if(lps==NULL){
//         return NULL;
//     }
//     int i=1,len=0;
//     lps[0]=0;
//     while(i<pattern_size){
//         if(pattern[i]==pattern[len]){
//             lps[i]=len+1;
//             len++;
//             i++;
//         }else{
//             if(len!=0){
//                 len=lps[len-1];
//             }else{
//                 lps[i]=0;
//                 i++;
//             }
//         }
//     }
//     return lps;
// }
// int * kmp(int *lps,char * T,char * P,int t_size,int p_size,int *return_size){
//     int i=0,j=0;
//     int * occr=NULL;
//     *return_size=0;
//     while(  (t_size-i)>=(p_size-j)){
//         if(T[i]==P[j]){
//             i++;
//             j++;
//         }
//         if(j==p_size){
//             *return_size=*return_size+1;
//             occr=realloc(occr,sizeof(int)*(*return_size));
//             occr[*return_size-1]=i-j;
//             j=lps[j-1];
//         }else{
//             if(i<t_size&& T[i]!=P[j]){
//                 if(j!=0){
//                     j=lps[j-1];
//                 }else{
//                     i++;
//                 }

//             }
//         }
//     }
//     return occr;
// }


// Escreva um programa que solicitará ao usuário a entrada de dois textos distintos, denomi-
// nados T1 e T2. Esses textos devem ser compostos por sequência contígua de caracteres (sem
// espaços). Uma vez fornecidos esses dois textos pelo usuário, o programa deverá verificar,
// utilizando o algoritmo Knuth-Morris-Pratt (KMP), se o texto T2 é um rotação do texto T1.
// Dessa forma, caso o texto T2 seja um rotação de T1, o programa deverá imprimir o valor 1.
// Caso contrário, o programa imprimirá o valor −1.

// Crie um programa que solicitará ao usuário a entrada de dois valores: o primeiro valor
// será um texto T, consistindo de caracteres justapostos, e o segundo valor será um número
// natural k > 0. O programa terá como objetivo verificar se o texto T pode ser construído
// repetindo um padrão inicial, ou seja, um prefixo do próprio texto de comprimento k, várias
// vezes de forma justaposta. Se o texto T poder ser formado dessa maneira, imprima na saída
// padrão 1. Caso contrário, imprima −1.
// #include <string.h>
// #include <stdio.h>
// int justaposto(char *T,int k);
// int main(){
//     char T[256];
//     int result,k;
//     printf("Digite o texto T:\n");
//     scanf(" %s",T);
//     printf("Digite agora o tamanho do padrao:\n");
//     scanf("%d",&k);
//     result=justaposto(T,k);
//     printf("%d",result);
// }
// int justaposto(char *T,int k){
//     int i,j;
//     int len=strlen(T);
//     for(i=0;i<len;i+=k){
//         for(j=0;j<k;j++){
//             if(i+j>=len){
//                 return -1;
//             }
//             if(T[j]!=T[i+j]){
//                 return -1;
//             }
//         }
//     }
//     return 1;
// }

// Escreva um programa que receberá do usuário um texto T e um padrão específico p. Em
// seguida, o programa deverá verificar se P é uma subsequência de T. Note que, uma sub-
// sequência é uma sequência de caracteres que aparece na mesma ordem em T, mas não
// necessariamente de forma contígua. Dessa forma, se o padrão específico P for uma subse-
// quência do texto T, o programa deverá imprimir na saída padrão o valor 1. Caso contrário,
// o programa imprimirá −1.
// #include <stdio.h>
// int substring(char * texto,char * pattern);
// int main(){
//     char T[256],p[256];
//     printf("Digite o texto:\n");
//     scanf(" %s",T);
//     printf("Digite o padrao:\n");
//     scanf(" %s",p);
//     printf("%d",substring(T,p));
//     return 0;
// }
// int substring(char * texto,char * pattern){
//     int i;
//     int position_pattern=0;
//     for(i=0;texto[i]!='\0';i++){
//         if(texto[i]==pattern[position_pattern]){
//             position_pattern++;
//             if(pattern[position_pattern]=='\0'){
//                 return 1;
//             }
//         }
//     }
//     return -1;
// }

// Crie um programa que solicitará ao usuário a entrada dois valores: um texto T e um padrão
// específico P. O padrão P pode conter caracteres coringas representados por ?, onde cada ?
// pode corresponder a qualquer caractere dentro do texto T. Com isso, você deverá projetar
// e implementar uma versão modificada do algoritmo de Knuth-Morris-Pratt (KMP) que
// permita o uso desses caracteres coringa no padrão P. Por fim, o programa deverá localizar
// todas as posições de ocorrências do padrão P no texto T, levando em consideração os
// caracteres coringa. Além disso, o programa deverá imprimir, na saída padrão, o número
// de ocorrências, e as posições de todas ocorrências, com o número de ocorrências e cada
// posição em uma linha separada.
// #include <stdlib.h>
// #include <string.h>
// #include <stdio.h>
// int *lps(char *str);
// int * kmp(int *lps,char * text,char * pattern,int * return_size);
// int main(){
//     char text[256],pattern[256];
//     int return_size,i;
//     int *vec_occr,*lps_vec;
//     printf("Digite o texto:\n");
//     scanf(" %s",text);
//     printf("Digite o padrao:\n");
//     scanf(" %s",pattern);
//     lps_vec=lps(pattern);
    
//     vec_occr=kmp(lps_vec,text,pattern,&return_size);
//     printf("Vetor de lps:\n");
//     for(i=0;i<strlen(pattern);i++){
//         printf("%d ",lps_vec[i]);
//     }
//     printf("\nVetor de ocorrencias:\n");
//     for(i=0;i<return_size;i++){
//         printf("%d ",vec_occr[i]);
//     }
//     free(lps_vec);
//     free(vec_occr);
//     return 0;

// }
// int * lps(char *str){
//     int *lps_vec=malloc(sizeof(int)*strlen(str));
//     if(lps_vec==NULL){
//         return NULL;
//     }
//     int i=1;
//     int len=0;
//     lps_vec[0]=0;
//     while(str[i]!='\0'){
//         if(str[i]==str[len]|| str[i]=='?'|| str[len]=='?'){
//             len++;
//             lps_vec[i]=len;
//             i++;
//         }else{
//             if(len!=0){
//                 len=lps_vec[len-1];
//             }else{
//                 lps_vec[i]=0;
//                 i++;
//             }
//         }
//     }
//     return lps_vec;
// }
// int * kmp(int *lps,char * text,char * pattern,int * return_size){
//     int text_size=strlen(text);
    
//     int pattern_size=strlen(pattern);
//     int i=0,j=0;
//     int * vec_occr=NULL;
//     *return_size=0;
//     while( (text_size-i) >= (pattern_size-j) ){

//         if(text[i]=='?'||pattern[j]=='?'||text[i]==pattern[j]){
//             i++;
//             j++;
           
//         }
        
//         if(j==pattern_size){
            
//             *return_size=*return_size+1;
//             vec_occr=realloc(vec_occr,sizeof(int)*(*return_size));
           
//             vec_occr[(*return_size)-1]=i-j;
            
//             j=lps[j-1];
//         }else{
//             if((text[i]!='?' && pattern[j]!='?') && pattern[j]!=text[i]&& i<text_size){
//                 if(j!=0){
//                     j=lps[j-1];
//                 }else{
//                     i++;
//                 }
//             }
//         }
//     }
//     return vec_occr;
// }


// Seja o seguinte protótipo size_t ibilce_strlen(char *str). Implemente a função dada
// por este protótipo, a qual deve retornar o comprimento da cadeia de caracteres apontada
// por str.
// size_t ibilce_strlen(char *str){
//     if(str==NULL){
//         return 0;
//     }
//     size_t counter=0;
//     int i;
//     for(i=0;str[i]!='\0';i++){
//         counter++;
//     }
//     return counter;
// }

// Implemente o algoritmo de casamento de padrões por força bruta por meio de uma função
// int forca_bruta(const char *T, const char *P, int pos[]), a qual armazena no ve-
// tor pos as posições (iniciando em 0) de todas as ocorrências do padrão P no texto T e
// retorna o número de ocorrências. Além disso, conte e imprima o número total de com-
// parações entre caracteres realizadas e compare-o com o número de comparações realizadas
// pelo algoritmo KMP para a mesma entrada.
// #include <stdio.h>
// #include <string.h>
// #include <stdlib.h>
// int forca_bruta(const char *T, const char *P, int * pos);
// int * calc_lps(char *pattern);
// int kmp(const char *T,const char *P,int *pos,int * lps);
// int main(){
//     char str[256]="blaaamamkakkkqqkaaaaabbbccc";
//     char pattern[256]="aaaaa";
//     int pos[200];
//     int pos_size,i;
//     int *lps;
//     pos_size=forca_bruta(str,pattern,pos);
//     printf("Posicoes de ocorrencia forca bruta:\n");
//     for(i=0;i<pos_size;i++){
//         printf("%d ",pos[i]);
//     }

//     lps=calc_lps(pattern);
//     pos_size=kmp(str,pattern,pos,lps);
//     printf("Posicoes de ocorrencia kmp:\n");
//     for(i=0;i<pos_size;i++){
//         printf("%d ",pos[i]);
//     }
//     return 0;
// }
// int forca_bruta(const char *T, const char *P, int *pos){
//     int counter=0,i,j,flag;
//     int operations=0;
//     int pattern_size,text_size;
//     int * aux=NULL;
//     pattern_size=strlen(P);
//     text_size=strlen(T);
//     for(i=0;(text_size-i)>=(pattern_size);i++){
//         flag=0;
//         for(j=0;j<pattern_size;j++){
//             operations++;
//             if(T[i+j]!=P[j]){
//                 flag=1;
//                 break;
//             }
           
//         }
//         if(flag==0){
//             pos[counter]=i;
//             counter++;
           
//             // realloc,aux,etc
//         }

//     }
//     printf("\nOperacoes forca bruta: %d\n",operations);
//     return counter;
// }

// int * calc_lps(char * pattern){
//     if(pattern==NULL){
//         return NULL;
//     }
//     int pattern_size,i=1,len=0,operations=0;
//     int *lps;
//     pattern_size=strlen(pattern);
//     lps=malloc(sizeof(int)*pattern_size);
//     if(lps==NULL){
//         return NULL;
//     }
//     lps[0]=0;
//     while(i<pattern_size){
//         if(pattern[i]==pattern[len]){
//             operations++;
//             len++;
//             lps[i]=len;
//             i++;
//         }else if(len!=0){
//             operations+=2;
//             len=lps[len-1];
//         }else{
//             operations+=2;
//             lps[i]=0;
//             i++;
//         }
//     }
//     printf("\n Operacoes realizadas no lps: %d\n",operations);
//     return lps;
// }

// int kmp(const char *T,const char *P,int *pos,int *lps){
//     int operations=0;
//     int i=0,j=0;
//     int T_size=strlen(T),P_size=strlen(P);
//     int pos_size=0;//return
//     while( (T_size-i)>=(P_size-j)){
//          operations++;
//         if(T[i]==P[j]){
//             i++;
//             j++;
           
//         }
//         if(j==P_size){
            
//             pos[pos_size]=i-j;
//             pos_size++;
//             j=lps[j-1];
//         }else{
//              operations++;
//             if(i<=T_size && T[i]!=P[j]){
              
//                 if(j!=0){
                    
//                     j=lps[j-1];
//                 }else{
//                     i++;
//                 }
//             }
//         }
//     }
//     printf("\nOperacoes realizadas no kmp: %d\n",operations);
//     return pos_size;
// }
