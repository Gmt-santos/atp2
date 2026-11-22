#include <stdlib.h>
#include <stdio.h>
typedef struct No{
    int dado;
    struct No* proximo;

}No;
typedef struct Lista{
    No* inicio;
    No* fim;
    int tamanho;
}Lista;
void percorrer_lista(Lista* lista){
    No* pointer=lista->inicio;
    if(pointer ==  NULL){
        printf("A lista nao possui dados!\n");
        return;
    }
    while(pointer!=NULL){
        printf("%d --> ",pointer->dado);
        pointer=pointer->proximo;
        if(pointer == NULL){
            printf("NULL\n");
        }
    }
    return;
}
void inserir_no_inicio(Lista* lista,int dado){
    No* novo_dado;
    novo_dado=malloc(sizeof(No));
    if(lista->inicio == NULL){
        lista->inicio=novo_dado;
        lista->fim=novo_dado;
        novo_dado->proximo=NULL;
        novo_dado->dado=dado;
        lista->tamanho=0;
    }else{
        No* aux=lista->inicio;
        lista->inicio=novo_dado;
        novo_dado->proximo=aux;
        novo_dado->dado=dado;
        
    }
    printf("Dado inserido!\n");
    lista->tamanho++;
    return;
}
void inserir_no_fim(Lista * L,int x){
    No * novo_fim;
    No *ptr=L->fim;
    novo_fim=malloc(sizeof(No));
    if(novo_fim==NULL){
        return;
    }
    novo_fim->dado=x;
    novo_fim->proximo=NULL;
    if(ptr==NULL){
        L->inicio=novo_fim;
        L->fim=novo_fim;
    }else{
        ptr->proximo=novo_fim;
        L->fim=novo_fim;
    }
    L->tamanho++;
    return;
}
// Sejam L = ⟨l1, l2, . . . , ln⟩ e H = ⟨h1, h2, . . . , hm⟩ duas listas simplesmente ligadas, em que li
// e hj representam os nós das listas L e H, respectivamente. Escreva uma função que receba
// as listas L e H e verifique se ambas possuem o mesmo conteúdo.
// #include <stdio.h>
// typedef struct No{
//     int dado;
//     struct No* proximo;

// }No;
// typedef struct Lista{
//     No* inicio;
//     No* fim;
//     int tamanho;
// }Lista;
// int equal(Lista *lista1,Lista *lista2){
//     No* lista1_actual_ptr=lista1->inicio;
//     No* lista2_actual_ptr=lista2->inicio;
//     if(lista1_actual_ptr==NULL && lista2_actual_ptr !=NULL){
//         return 0;
//     }else if(lista1_actual_ptr!=NULL && lista2_actual_ptr==NULL){
//         return 0;
//     }
//     while(lista1_actual_ptr!=NULL){
//         if(lista1_actual_ptr->dado != lista2_actual_ptr->dado){
//             return 0;
//         }
//         lista1_actual_ptr=lista1_actual_ptr->proximo;
//         lista2_actual_ptr=lista2_actual_ptr->proximo;
//         if(lista1_actual_ptr==NULL && lista2_actual_ptr !=NULL){
//             return 0;
//         }else if(lista1_actual_ptr!=NULL && lista2_actual_ptr==NULL){
//             return 0;
//         }
//     }
//     return 1;
// }

// Seja L = ⟨l1, l2, . . . , ln⟩ uma lista simplesmente ligada, em que li é um nó da lista L. Escreva

// uma função que receba a lista L e retorne L com seus elementos dispostos em ordem in-
// versa, ou seja, a lista invertida, denotada por rev(L).

// Note: Se L = ⟨l1, l2, . . . , ln⟩, então rev(L) = ⟨ln, ln−1, . . . , l1⟩. Além disso, não modifique o
// conteúdo dos nós.

// #include <stdio.h>
// typedef struct No{
//     int dado;
//     struct No* proximo;

// }No;
// typedef struct Lista{
//     No* inicio;
//     No* fim;
//     int tamanho;
// }Lista;
// Lista* rev(Lista *lista);
// void percorrer_lista(Lista *lista);
// void inserir_no_inicio(Lista*,int);
// int main(){
//     Lista *revert;
//     Lista lista;
//     lista.inicio=NULL;
//     lista.fim=NULL;
//     lista.tamanho=0;
//     inserir_no_inicio(&lista,2);
//     inserir_no_inicio(&lista,3);
//     inserir_no_inicio(&lista,4);
//     percorrer_lista(revert);
//     revert=rev(&lista);
//     percorrer_lista(revert);
// }
// void inserir_no_inicio(Lista* lista,int dado){
//     No* novo_dado;
//     novo_dado=malloc(sizeof(No));
//     if(lista->inicio == NULL){
//         lista->inicio=novo_dado;
//         lista->fim=novo_dado;
//         novo_dado->proximo=NULL;
//         novo_dado->dado=dado;
//     }else{
//         No* aux=lista->inicio;
//         lista->inicio=novo_dado;
//         novo_dado->proximo=aux;
//         novo_dado->dado=dado;
        
//     }
//     printf("Dado inserido!\n");
//     lista->tamanho++;
//     return;
// }
// Lista* rev(Lista * lista){
//     No* antes=lista->inicio;
//     if(antes == NULL){
//         return lista;
//     }
//     if(lista->inicio == lista->fim){
//         return lista;
//     }
//     No* depois=antes->proximo;
//     No* aux=depois->proximo;
//     lista->fim=antes;
//     antes->proximo =NULL;
//     while(depois!=NULL){
//         depois->proximo=antes;
//         antes=depois;
//         depois=aux;
//         if(depois == NULL){
//             break;
//         }else{
//             aux=aux->proximo;
//         }
//     }
//     lista->inicio=antes;
//     return lista;
// }
// void percorrer_lista(Lista* lista){
//     No* pointer=lista->inicio;
//     if(pointer ==  NULL){
//         printf("A lista nao possui dados!\n");
//         return;
//     }
//     while(pointer!=NULL){
//         printf("%d --> ",pointer->dado);
//         pointer=pointer->proximo;
//         if(pointer == NULL){
//             printf("NULL\n");
//         }
//     }
//     return;
// }

// Sejam L = ⟨l1, l2, . . . , ln⟩ e H = ⟨h1, h2, . . . , hm⟩ duas listas simplesmente ligadas, em que li
// e hj são os nós das listas L e H, respectivamente. Escreva uma função que receba as listas L
// e H e concatene a lista H ao final da lista L, cujo resultado é denotado por concat(L, H) =
// ⟨l1, l2, . . . , ln, h1, h2, . . . , hm⟩.
// void concat_lists(Lista*,Lista*);
// int main(){
//     Lista lista1,lista2;
//     lista1.inicio=NULL;
//     lista1.fim=NULL;
//     lista1.tamanho=0;
//     lista2.inicio=NULL;
//     lista2.fim=NULL;
//     lista2.tamanho=0;
//     inserir_no_inicio(&lista1,1);
//     inserir_no_inicio(&lista1,2);
//     inserir_no_inicio(&lista1,3);
//     inserir_no_inicio(&lista2,4);
//     inserir_no_inicio(&lista2,5);
//     inserir_no_inicio(&lista2,6);
//     concat_lists(&lista1,&lista2);
//     percorrer_lista(&lista1);
//     percorrer_lista(&lista2);
//     return 0;
// }
// void concat_lists(Lista* inicio,Lista * fim){
//     No* ptr;
//     ptr=inicio->inicio;
//     if(ptr==NULL){
//         inicio->inicio=fim->inicio;
//         inicio->fim=fim->fim;
//         return;
//     }
//     if(fim->inicio == NULL && fim->fim==NULL){
//         return;
//     }
//     while(ptr->proximo!=NULL){
//         ptr=ptr->proximo;
//     }
//     ptr->proximo=fim->inicio;
//     inicio->fim=fim->fim;
//     inicio->tamanho+=fim->tamanho;
//     return;
// }

// Seja L = ⟨l1, l2, . . . , ln⟩ uma lista que armazena n números naturais, com n par, em que
// o número natural armazenado no nó li é denotado por k(li) ∈ N. Escreva uma função
// que, percorrendo a lista L uma única vez, construa uma lista H = ⟨h1, h2, . . . , hn/2⟩, tal que
// k(hj) = k(lj) + k(ln−(j−1)
// ).
// Lista * soma_lista(Lista*);
// int main(){
//     Lista *somas;
//     Lista lista;
//     lista.inicio=NULL;
//     lista.fim=NULL;
//     lista.tamanho=0;
//     inserir_no_inicio(&lista,10);
//     inserir_no_inicio(&lista,40);
//     inserir_no_inicio(&lista,50);
//     inserir_no_inicio(&lista,100);
//     percorrer_lista(&lista);
//     somas=soma_lista(&lista);
//     percorrer_lista(somas);
// }
// Lista * soma_lista(Lista * lista){

//    int novo_tamanho=(lista->tamanho)/2;
//    if(lista->tamanho==0 || lista->tamanho%2!=0){
//         return NULL;
//    }
//    Lista * nova_lista=malloc(sizeof(Lista));
//    No * aux;
//    No* actual_ptr;
//    nova_lista->inicio=NULL;
//    nova_lista->fim=NULL;
//    nova_lista->tamanho=novo_tamanho;
//    actual_ptr=nova_lista->inicio;
  
//    while(novo_tamanho>0){
       
//         if(nova_lista->inicio==NULL){
//             novo_tamanho=novo_tamanho-1;
//             aux=malloc(sizeof(No));
//             aux->dado=0;
//             aux->proximo=NULL;
//             nova_lista->inicio=aux;
//             nova_lista->fim=aux;
//             actual_ptr=aux;
//         }else{
//             aux=malloc(sizeof(No));
//             aux->dado=0;
//             aux->proximo=NULL;
//             actual_ptr->proximo=aux;
//             actual_ptr=aux;
//             nova_lista->fim=aux;
//             novo_tamanho=novo_tamanho-1;
//         }
       
        
//    }
//    int * matriz=malloc(sizeof(int) * lista->tamanho);
//    int i=0;
//    actual_ptr=lista->inicio;
//    while(actual_ptr!=NULL){
//         matriz[i]=actual_ptr->dado; 
//         i++;
//         actual_ptr=actual_ptr->proximo;    
//    }
//    i=0;
//    actual_ptr=nova_lista->inicio;
//    while(actual_ptr!=NULL){
//         actual_ptr->dado=matriz[i]+matriz[(lista->tamanho)-i-1];
//         actual_ptr=actual_ptr->proximo;
        
//         i++;
//    }
//    free(matriz);
   
//    return nova_lista;
// }



// Construa um programa que receba da entrada padrão um número n ≥ 1, e em seguida re-
// ceba n valores, que deverão ser armazenados em uma lista simplesmente ligada, denotada
// por L. Após isso, requisitar ao usuário um valor m ≥ 1, e imprimir na saída padrão os
// elementos da lista L após m rotações.
// void rotacionar(Lista*,int);
// int main(){
//     int rot;
//     int tamanho_lista;
//     int num;
//     int i;
//     Lista lista;
//     No* aux,*actualptr;
//     lista.inicio=NULL;
//     lista.fim=NULL;
//     lista.tamanho=0;
//     printf("Digite o tamanho da lista:\n");
//     scanf("%d",&tamanho_lista);
//     for(i=0;i<tamanho_lista;i++){
//         printf("Digite o valor %d:\n",i);
//         scanf("%d",&num);
//         if(lista.inicio==NULL){
//             aux=malloc(sizeof(No));
//             aux->dado=num;
//             aux->proximo=NULL;
//             lista.inicio=aux;
//             lista.fim=aux;
//             lista.tamanho++;
//             actualptr=aux;
//         }else{
//             aux=malloc(sizeof(No));
//             aux->dado=num;
//             aux->proximo=NULL;
//             actualptr->proximo=aux;
//             lista.tamanho++;
//             lista.fim=aux;
//             actualptr=actualptr->proximo;
//         }
//     }
//     printf("Agora,digite o numero de rotacoes:\n");
//     scanf("%d",&rot);
//     rotacionar(&lista,rot);

//     percorrer_lista(&lista);
// }
// void rotacionar(Lista* lista,int rotacoes){
//     if(lista->inicio==lista->fim ){
//         return;
//     }
//     int i,aux;
//     No* actual_ptr,*before_ptr;
    
//     for(i=0;i<rotacoes;i++){
//         before_ptr=lista->inicio;
//         actual_ptr=before_ptr->proximo;
//         while(actual_ptr->proximo!=NULL){
//             actual_ptr=actual_ptr->proximo;
//             before_ptr=before_ptr->proximo;
//         }
//         actual_ptr->proximo=lista->inicio;
//         lista->inicio=actual_ptr;
//         before_ptr->proximo=NULL;
//         lista->fim=before_ptr;

//     }
//     return;
// }

// Seja um polinômio P(x) = a0 + a1x + a2x

// 2 + · · · + anx
// n
// . Construa uma lista encadeada
// L = ⟨l1, l2, . . . , ln, ln+1⟩, em que k(li) = ai−1, isto é, os valores dos nós da lista L carregam
// os coeficientes do polinômio. Nesse contexto, realize os seguintes itens:
// #include <math.h>
// float a(Lista*,float);
// int main(){
//     Lista lista;
//     No* aux,*actualptr;
//     int grau;
//     int num;
//     int i;
//     lista.inicio=NULL;
//     lista.fim=NULL;
//     lista.tamanho=0;
//     printf("Digite o grau do polinomio:\n");
//     scanf("%d",&grau);
//     for(i=0;i<=grau;i++){
//         printf("Digite o coeficiente do grau %d:\n",i);
//         scanf("%d",&num);
//         if(lista.inicio==NULL){
//             aux=malloc(sizeof(No));
//             aux->dado=num;
//             aux->proximo=NULL;
//             lista.inicio=aux;
//             lista.fim=aux;
//             actualptr=aux;
//             lista.tamanho++;
//         }else{
//             aux=malloc(sizeof(No));
//             aux->dado=num;
//             aux->proximo=NULL;
//             actualptr->proximo=aux;
//             lista.fim=aux;
//             lista.tamanho++;
//             actualptr=actualptr->proximo;
//         }
//     }
//     printf("Agora,digite o x:\n");
//     scanf("%d",&num);
//     printf("Resultado:%.2f",a(&lista,num));
//     percorrer_lista(&lista);
// }
// float a(Lista* lista,float x){
//     if(lista->inicio==NULL){
//         return 0;
//     }
//     float result=0;
//     int grau=0;
//     No* ptr;
//     ptr=lista->inicio;
//     while(ptr!=NULL){
//         result+=(ptr->dado)*pow(x,grau);
//         grau++;
//         ptr=ptr->proximo;
//     }
//     return result;
// }

// Seja A uma matriz esparsa m × n, isto é, a maioria de seus elementos são nulos. Em geral,
// o uso de uma lista linear para armazenar os valores dessa matriz consumiria um espaço de
// armazenamento proporcional a mn, o que pode ser proibitivo dependendo da dimensão
// da matriz. Nesse contexto, construa uma estrutura de dados linear que armazene todos os
// elementos não nulos da matriz, consumindo um espaço de armazenamento proporcional
// a k, em que k é o número de elementos não nulos.
// typedef struct No_esparsa{
//     int dado;
//     int x;
//     int y;
//     struct No_esparsa* proximo;

// }No_esparsa;
// typedef struct matriz_esparsa_lista{
//     int linhas;
//     int colunas;
//     No_esparsa* inicio;
//     No_esparsa*fim;
//     int tamanho;
// }matriz_esparsa_lista;
// int main(){

//     // aqui v faz um for na matriz e vai armazenando os valores em No_esparsa
// }

// Sejam L = ⟨l1, l2, . . . , ln⟩ e H = ⟨h1, h2, . . . , hm⟩ duas listas simplesmente ligadas, em que li e
// hj são os nós das listas L e H, respectivamente. Construa uma função REMOÇÃO(L, H) que
// recebe as duas listas L e H, e que retorne uma lista G = ⟨g1, g2, . . . , gp⟩, tal que nenhuma
// chave em G pertença à H.
// Lista * remocao(Lista*,Lista*);
// int * calc_vec_remocao(Lista*,int*);
// int main(){
//     Lista L,H;
//     Lista *G;
//     L.inicio=NULL;
//     L.fim=NULL;
//     L.tamanho=0;
//     H.inicio=NULL;
//     H.fim=NULL;
//     H.tamanho=0;
//     inserir_no_inicio(&L,1);
//     inserir_no_inicio(&L,2);
//     inserir_no_inicio(&L,3);
//     inserir_no_inicio(&L,4);
//     inserir_no_inicio(&H,4);
//     inserir_no_inicio(&H,1);
//     percorrer_lista(&L);
//     percorrer_lista(&H);
//     G=remocao(&L,&H);
//     percorrer_lista(G);
// }
// int *calc_vec_remocao(Lista * H,int* vec_H_size){
//     int i=0;
//     int * vec=NULL;
//     int *aux;
//     No* ptr=H->inicio;
//     while(ptr!=NULL){
//         aux=realloc(vec,(i+1)*sizeof(int));
//         if(aux==NULL){
//             free(vec);
//             return NULL;
//         }
//         vec=aux;
//         vec[i]=ptr->dado;
//         i++;
//         ptr=ptr->proximo;
//     }
//     *vec_H_size=i;
//     return vec;
// }
// Lista * remocao(Lista * L,Lista *H ){
//     if(H->inicio == NULL || L->inicio==NULL){
//         return L;
//     }
//     int vec_H_size=0,i,equal;
//     int* vec_H=calc_vec_remocao(H,&vec_H_size);
//     if(vec_H==NULL){
//         printf("Erro de alocacao!");
//         return NULL;
//     }
//     Lista * G;
//     No* aux,*actual_ptr_G,*actual_ptr_F;
//     actual_ptr_F=L->inicio;
//     G=malloc(sizeof(Lista));
//     G->inicio=NULL;
//     G->fim=NULL;
//     G->tamanho=0;
//     while(actual_ptr_F!=NULL){
//         equal=0;
//         for(i=0;i<vec_H_size;i++){
//             if(actual_ptr_F->dado==vec_H[i]){
//                 equal=1;
//             }
//         }
//         if(!equal){
//             if(G->inicio==NULL){
//                 aux=malloc(sizeof(No));
//                 aux->dado=actual_ptr_F->dado;
//                 aux->proximo=NULL;
//                 G->inicio=aux;
//                 G->fim=aux;
//                 G->tamanho++;
//                 actual_ptr_G=aux;
//             }else{
//                 aux=malloc(sizeof(No));
//                 aux->dado=actual_ptr_F->dado;
//                 aux->proximo=NULL;
//                 actual_ptr_G->proximo=aux;
//                 G->fim=aux;
//                 G->tamanho++;
//                 actual_ptr_G=actual_ptr_G->proximo;
//             }
//         }
//         actual_ptr_F=actual_ptr_F->proximo;
//     }
//     free(vec_H);
//     return G;
// }


// Construa um programa que receba dois números naturais m e n, ambos não nulos, e re-
// ceba duas sequências de números com comprimentos m e n, que deverão ser inseridas

// em listas simplesmente encadeadas L e H, respectivamente. Em seguida, concatene am-
// bas as listas, resultando na lista G, garantindo que não haja elementos duplicados. Por

// fim, imprima na saída padrão os elementos da lista resultante G.
// Lista * concat(Lista *,Lista*);

// int main(){
//     int l_size,h_size;
//     int num,i;
//     No * ptrL,*ptrH,*aux;
//     Lista L,H;
//     Lista *G;
//     H.inicio=NULL;
//     H.fim=NULL;
//     H.tamanho=0;

//     printf("Digite o tamanho da primeira lista encadeada:\n");
//     scanf("%d",&l_size);
//     L.inicio=NULL;
//     L.fim=NULL;
//     L.tamanho=l_size;
//     for(i=0;i<l_size;i++){
//         printf("Digite o %d elemento:\n",i);
//         scanf("%d",&num);
//         if(L.inicio==NULL){
//             aux=malloc(sizeof(No));
//             L.inicio=aux;
//             L.fim=aux;
//             aux->dado=num;
//             aux->proximo=NULL;
//             ptrL=aux;
//         }else{
//             aux=malloc(sizeof(No));
//             L.fim=aux;
//             aux->dado=num;
//             aux->proximo=NULL;
//             ptrL->proximo=aux;
//             ptrL=ptrL->proximo;
//         }
//     }
//     printf("Digite o tamanho da segunda lista encadeada:\n");
//     scanf("%d",&h_size);
//     H.inicio=NULL;
//     H.fim=NULL;
//     H.tamanho=h_size;
//     for(i=0;i<h_size;i++){
//         printf("Digite o %d elemento:\n",i);
//         scanf("%d",&num);
//         if(H.inicio==NULL){
//             aux=malloc(sizeof(No));
//             H.inicio=aux;
//             H.fim=aux;
//             aux->dado=num;
//             aux->proximo=NULL;
//             ptrH=aux;
//         }else{
//             aux=malloc(sizeof(No));
//             H.fim=aux;
//             aux->dado=num;
//             aux->proximo=NULL;
//             ptrH->proximo=aux;
//             ptrH=ptrH->proximo;
//         }
//     }
//     G=concat(&L,&H);
//     percorrer_lista(G);
//     percorrer_lista(&H);
//     percorrer_lista(&L);
//     return 0;
// }

// Lista* concat(Lista* L,Lista *H){
//     int vec_repeat_size=0,i,equal=0;
//     int *vec_repeat=NULL;
//     Lista *G=malloc(sizeof(Lista));
//     No* ptrG,*ptrL,*ptrH,*aux;
//     G->inicio=NULL;
//     G->fim=NULL;
//     G->tamanho=0;
//     ptrL=L->inicio;
//     while(ptrL!=NULL){
//         if(G->inicio==NULL){
//             aux=malloc(sizeof(No));
//             aux->dado=ptrL->dado;
//             aux->proximo=NULL;
//             G->inicio=aux;
//             G->fim=aux;
//             G->tamanho++;
//             ptrG=aux;
           
//             vec_repeat=(int*)realloc(vec_repeat,sizeof(int)*(vec_repeat_size+1));
            
//             vec_repeat[vec_repeat_size]=ptrL->dado;
//             vec_repeat_size++;
            
//         }else{
//             equal=0;
//             for(i=0;i<vec_repeat_size;i++){
//                 if(ptrL->dado==vec_repeat[i]){
//                     equal=1;
//                 }
//             }
//             if(!equal){
//                 aux=malloc(sizeof(No));
//                 aux->dado=ptrL->dado;
//                 aux->proximo=NULL;
//                 ptrG->proximo=aux;
//                 ptrG=ptrG->proximo;
//                 G->fim=aux;
//                 G->tamanho++;
//                 vec_repeat=realloc(vec_repeat,sizeof(int)*(vec_repeat_size+1));
//                 vec_repeat[vec_repeat_size]=ptrL->dado;
//                 vec_repeat_size++;
//             }
//         }
//         ptrL=ptrL->proximo;
//     }
//     ptrH=H->inicio;
//     while(ptrH!=NULL){
//         equal=0;
//         for(i=0;i<vec_repeat_size;i++){
//             if(ptrH->dado==vec_repeat[i]){
//                 equal=1;
//             }
//         }
//         if(!equal){
//             aux=malloc(sizeof(No));
//             aux->dado=ptrH->dado;
//             aux->proximo=NULL;
//             ptrG->proximo=aux;
//             ptrG=ptrG->proximo;
//             G->fim=aux;
//             G->tamanho++;
//             vec_repeat=realloc(vec_repeat,sizeof(int)*(vec_repeat_size+1));
//             vec_repeat[vec_repeat_size]=ptrH->dado;
//             vec_repeat_size++;
        
//             }
//         ptrH=ptrH->proximo;
//     }
//     free(vec_repeat);
//     return G;
// }





// --------------------------------------------------------------------------------------------------//
// Implemente uma lista simplesmente ligada e dinamicamente alocada contendo as seguintes
// operações de inserção, busca e remoção:
// a) INSERÇÃO-CABEÇA(L, x): Inserção do elemento x na cabeça da lista L.
// Note: Garanta que o tempo de execução dessa função seja Θ(1).
// b) INSERÇÃO-CAUDA(L, x): Inserção do elemento x na cabeça da lista L.
// Note: Garanta que o tempo de execução dessa função seja Θ(1).
// c) INSERÇÃO-MEIO(L, x, k): Inserção do elemento x na k-ésima posição da lista N. Você deve
// tratar a condição que k ∈ [1, N + 1], em que N é o comprimento da lista L.
// d) DELEÇÃO-CABEÇA(L): Remoção do elemento na cabeça da lista L.
// Note: Garanta que o tempo de execução dessa função seja Θ(1).
// e) DELEÇÃO-CAUDA(L): Remoção do elemento do fim da lista L.
// f) DELEÇÃO-MEIO(L, k): Deleção do k-ésimo elemento da lista L. Você deve tratar a condição
// que k ∈ [1, N], em que N é o comprimento da lista.
// g) BUSCA(L, x): Retorne 1 se o elemento x estiver na lista L. Caso contrário, retorne o valor 0.
// h) TAMANHO(L): Retorne o comprimento da lista L.
// Note: Garanta que o tempo de execução dessa função seja Θ(1).
// typedef struct Node{
//     int dado;
//     struct Node * proximo;
// }Node;
// typedef struct linkedlist{
//     int tamanho;
//     Node* inicio;
//     Node* fim;
// }linkedlist;
// void insercao_cabeca(linkedlist * L,int x){
//     Node* novo_inicio;
//     novo_inicio=malloc(sizeof(Node));
//     if(novo_inicio==NULL){
//         return;
//     }
//     novo_inicio->dado=x;
//     novo_inicio->proximo=L->inicio;
//     L->inicio=novo_inicio;
//     L->tamanho++;
//     if(novo_inicio->proximo==NULL){
//         L->fim=novo_inicio;
//     }
//     return ;
// }
// void insercao_cauda(linkedlist * L,int x){
//     Node * novo_fim;
//     Node *ptr=L->fim;
//     novo_fim=malloc(sizeof(Node));
//     if(novo_fim==NULL){
//         return;
//     }
//     novo_fim->dado=x;
//     novo_fim->proximo=NULL;
//     if(ptr==NULL){
//         L->inicio=novo_fim;
//         L->fim=novo_fim;
//     }else{
//         ptr->proximo=novo_fim;
//         L->fim=novo_fim;
//     }
//     L->tamanho++;
//     return;
// }
// void insercao_meio(linkedlist * L,int x,int k){
//     if(k>(L->tamanho)+1|| k<1){
//         return;
//     }
//     Node * novo_node=malloc(sizeof(Node));
//     if(novo_node==NULL){
//         return;
//     }
//     novo_node->dado=x;
//     if(k==1){
//         novo_node->proximo=L->inicio;
//         L->inicio=novo_node;
//         if(novo_node->proximo==NULL){
//             L->fim=novo_node;
//         }
//     }else if(k==(L->tamanho)+1){
//         novo_node->proximo=NULL;
//         if(L->fim!=NULL){
//             L->fim->proximo=novo_node;
//             L->fim=novo_node;
//         }else{
//             L->fim=novo_node;
//             L->inicio=novo_node;
//         }

//     }else{
//         int counter=1;
//         Node * ptr=L->inicio,*aux;
//         while(counter+1!=k){
//             ptr=ptr->proximo;
//             counter++;
//         }
//         aux=ptr->proximo;
//         ptr->proximo=novo_node;
//         novo_node->proximo=aux;

//     }
//     L->tamanho++;
//     return;
// }
// void delecao_cabeca(linkedlist *L){
//     if(L->inicio==NULL){
//         return;
//     }
//     Node * aux;
//     aux=L->inicio->proximo;
//     free(L->inicio);
//     L->inicio=aux;
//     L->tamanho--;
//     if(aux==NULL){
//         L->fim=NULL;
//         return;
//     }
//     if(aux->proximo==NULL){
//         L->fim=aux;
//     }
  
// }
// void delecao_cauda(linkedlist *L){
//     if(L->fim==NULL){
//         return;
//     }
//     if(L->fim==L->inicio){
//         free(L->fim);
//         L->inicio=NULL;
//         L->fim=NULL;
//         L->tamanho--;
//         return ;
//     }
//     Node * ptr=L->inicio;
//     while(ptr->proximo!=L->fim){
//         ptr=ptr->proximo;
//     }
//     free(L->fim);
//     L->fim=ptr;
//     ptr->proximo=NULL;
//     L->tamanho--;
//     return;
// }
// void delecao_meio(linkedlist *L,int k){
//     if(k<1 || k>L->tamanho){
//         return ;
//     }
//     if(L->inicio==NULL){
//         return;
//     }
//     Node *aux,*antes,*depois;
//     int counter=1;
//     if(k==1){
//         if(L->inicio->proximo==NULL){
//             free(L->inicio);
//             L->inicio=NULL;
//             L->fim=NULL;
//             L->tamanho--;
//             return;
//         }
//         aux=L->inicio->proximo;
//         free(L->inicio);
//         L->inicio=aux;
//         L->tamanho--;
//         return;
//     }else if(k==L->tamanho){
//         antes=L->inicio;
//         while(antes->proximo!=L->fim){
//             antes=antes->proximo;
//         }
//         free(L->fim);
//         antes->proximo=NULL;
//         L->fim=antes;
//         L->tamanho--;
//         return ;
//     }else{
//         antes=L->inicio;
//         depois=antes->proximo;
//         while(counter+1!=k){
//             antes=antes->proximo;
//             depois=depois->proximo;
//             counter++;
//         }
//         aux=depois->proximo;
//         free(depois);
//         antes->proximo=aux;
//         L->tamanho--;
//     }
//     return;
// }
// int busca(linkedlist * L,int x){
//     if(L->inicio ==  NULL){
//         return 0;
//     }
//     Node * ptr=L->inicio;
//     while(ptr!=NULL){
//         if(ptr->dado==x){
//             return 1;
//         }
//         ptr=ptr->proximo;
//     }
//     return 0;
// }
// int tamanho(linkedlist *L){
//     return L->tamanho;
// }


// 1.12. Implemente uma lista duplamente ligada e dinamicamente alocada contendo as seguintes
// operações de inserção, busca e remoção:
// a) INSERÇÃO-CABEÇA(L, x): Inserção do elemento x na cabeça da lista L.
// Note: Garanta que o tempo de execução dessa função seja Θ(1).
// b) INSERÇÃO-CAUDA(L, x): Inserção do elemento x na cabeça da lista L.
// Note: Garanta que o tempo de execução dessa função seja Θ(1).
// c) INSERÇÃO-MEIO(L, x, k): Inserção do elemento x na k-ésima posição da lista N. Você deve
// tratar a condição que k ∈ [1, N + 1], em que N é o comprimento da lista L.
// d) DELEÇÃO-CABEÇA(L): Remoção do elemento na cabeça da lista L.
// Note: Garanta que o tempo de execução dessa função seja Θ(1).
// e) DELEÇÃO-CAUDA(L): Remoção do elemento do fim da lista L.
// Note: Garanta que o tempo de execução dessa função seja Θ(1).
// f) DELEÇÃO-MEIO(L, k): Deleção do k-ésimo elemento da lista L. Você deve tratar a condição
// que k ∈ [1, N], em que N é o comprimento da lista.
// g) BUSCA(L, x): Retorne 1 se o elemento x estiver na lista L. Caso contrário, retorne o valor 0.
// h) TAMANHO(L): Retorne o comprimento da lista L.
// Note: Garanta que o tempo de execução dessa função seja Θ(1).
// typedef struct Node{
//     struct Node * anterior;
//     struct Node * proximo;
//     int dado;
// }Node;
// typedef struct double_linkedlist{
//     Node * inicio;
//     Node * fim;
//     int tamanho;
// } double_linkedlist;

// void insercao_cabeca(double_linkedlist * L,int dado){
//     Node * novo=malloc(sizeof(Node));
//     if(novo == NULL){
//         return;
//     }
//     novo->dado=dado;
//     novo->proximo=L->inicio;
//     novo->anterior=NULL;
//     if(L->inicio==NULL){
//         L->fim=novo;
//         L->inicio=novo;
//         L->tamanho++;
//         return;
//     }
//     else{
//         L->inicio->anterior=novo;
//         L->inicio=novo;
//         L->tamanho++;
//         return;
//     }
// }
// void insercao_cauda(double_linkedlist *L,int dado){
//     Node * novo=malloc(sizeof(Node));
//     if(novo == NULL){
//         return ;
//     }
//     novo->dado=dado;
//     novo->proximo=NULL;
//     novo->anterior=L->fim;
//     if(L->fim==NULL){
//         L->inicio=novo;
//     }
//     else{
//         L->fim->proximo=novo;
//     }
//     L->fim=novo;
//     L->tamanho++;
//     return;
// }

// void insercao_meio(double_linkedlist *L,int dado,int k){
//     Node * novo=malloc(sizeof(Node));
//     int counter=1;
//     if(novo == NULL){
//         return;
//     }
//     if(k<1 || k>(L->tamanho+1)){
//         free(novo);
//         return;
//     }
//     novo->dado=dado;

//     if(k==1){
//         if(L->inicio==NULL){
//             novo->proximo=NULL;
//             novo->anterior=NULL;
//             L->inicio=novo;
//             L->fim=novo;
//             L->tamanho++;
//             return;
//         }
//         novo->anterior=NULL;
//         novo->proximo=L->inicio;
//         L->inicio->anterior=novo;
//         L->inicio=novo;
//         L->tamanho++;
//         return;
//     }else if(k==(L->tamanho+1)){
//         L->fim->proximo=novo;
//         novo->anterior=L->fim;
//         L->fim=novo;
//         novo->proximo=NULL;
//         L->tamanho++;
//         return;
//     }else{
//         Node * antes=L->inicio;
//         Node * atual=L->inicio->proximo;
//         while(counter+1!=k){
//             counter++;
//             antes=antes->proximo;
//             atual=atual->proximo;
//         }
//         atual->anterior=novo;
//         novo->proximo=atual;
//         antes->proximo=novo;
//         novo->anterior=antes;
//         L->tamanho++;
//         return;
//     }
    
// }
// void delecao_cabeca(double_linkedlist *L){
//     Node * aux;
//     if(L->inicio == NULL){
//         return;
//     }
//     if(L->inicio == L->fim){
//         free(L->inicio);
//         L->fim=NULL;
//         L->inicio=NULL;
//         L->tamanho--;
//         return ;
//     }
//     aux=L->inicio->proximo;
//     free(L->inicio);
//     aux->anterior=NULL;
//     L->inicio=aux;
//     L->tamanho--;
//     return;
// }

// void delecao_cauda(double_linkedlist *L){
//     Node * aux;
//     if(L->inicio==NULL){
//         return;
//     }else if(L->inicio==L->fim){
//         free(L->fim);
//         L->fim=NULL;
//         L->inicio=NULL;
//         L->tamanho--;
//         return;
//     }
//     aux=L->fim->anterior;
//     free(L->fim);
//     aux->proximo=NULL;
//     L->fim=aux;
//     L->tamanho--;   
//     return;
// }
// void delecao_meio(double_linkedlist * L,int k){
//     Node * aux;
//     int counter=1;
//     if(k<1 || k>L->tamanho){
//         return;
//     }
//     if(L==NULL){
//         return;
//     }
//     if(L->inicio==NULL){
//         return;
//     }
//     if(k==1){
//         aux=L->inicio->proximo;
//         free(L->inicio);
//         if(aux==NULL){
//             L->fim=NULL;
//             L->inicio=NULL;
//             L->tamanho--;
//             return;
//         }
//         aux->anterior=NULL;
//         L->inicio=aux;
//         L->tamanho--;
//         return;
//     }else if(k==L->tamanho){
//         aux=L->fim->anterior;
//         free(L->fim);
//         aux->proximo=NULL;
//         L->fim=aux;
//         L->tamanho--;
//     }else{
//         Node * antes,*atual;
//         antes=L->inicio;
//         atual=antes->proximo;
//         while(counter+1!=k){
//             antes=antes->proximo;
//             atual=atual->proximo;
//             counter++;
//         }
//         aux=atual->proximo;
//         antes->proximo=aux;
//         aux->anterior=antes;
//         free(atual);
//         L->tamanho--;
//         return;
//     }
// }
// int busca(double_linkedlist *L,int x){
//     if(L==NULL){
//         return 0;
//     }
//     if(L->inicio==NULL){
//         return 0;
//     }
//     Node *ptr=L->inicio;
//     while(ptr!=NULL){
//         if(ptr->dado==x){
//             return 1;
//         }
//         ptr=ptr->proximo;
//     }
//     return 0;
// }
// int tamanho(double_linkedlist *L){
//     return L->tamanho;
// }

// typedef struct Node{
//     int dado;
//     struct Node * prox;
// }Node;
// typedef struct ring_buffer{
//     int capacidade;
//     int lotacao;
//     Node *inicio;
//     Node *fim;
// }ring_buffer;
// // assume-se que o inicio sao os dados mais antigos e o fim sao os mais novos;
// void inicializar_ring_buffer(ring_buffer *ring,int capacidade){
//     ring->capacidade=capacidade;
//     ring->fim=NULL;
//     ring->inicio=NULL;
//     ring->lotacao=0;
//     return;
// }
// void insercao(ring_buffer* ring,int dado){
//     Node *novo;
//     Node *aux;
   
    
//     if(ring->inicio==NULL){
//         novo=malloc(sizeof(Node));
//         if(novo == NULL){
//             return ;
//         }
//         novo->dado=dado;
//         ring->inicio=novo;
//         ring->fim=novo;
//         novo->prox=ring->inicio;
//         ring->lotacao++;
//         return;

//     }
//     else if(ring->lotacao<ring->capacidade){
//         novo=malloc(sizeof(Node));
//         if(novo == NULL){
//             return ;
//         }
//         novo->dado=dado;
//         aux=ring->fim->prox;
//         ring->fim->prox=novo;
//         ring->fim=novo;
//         novo->prox=aux;
//         ring->lotacao++;
//         return ;
//     }else{
//         ring->inicio->dado=dado;
//         ring->fim=ring->inicio;
//         ring->inicio=ring->inicio->prox;
//         return;
//     }
// }
// Node * recente(ring_buffer * ring){
//     if(ring->fim==NULL){
//         return NULL;
        
//     }
//     return ring->fim;
// }
// Node * antigo(ring_buffer * ring){
//     if(ring-> inicio == NULL){
//         return NULL;
//     }
//     return ring->inicio;
// }

// A estrutura de dados de pilha (em inglês, stack) segue o princípio LIFO (Last In, First
// Out), ou seja, o último elemento que entra é o primeiro a sair. Isso significa que a última
// informação inserida na pilha é a primeira ser removida. Nesse sentido, construa essa
// estrutura de dados dinamicamente alocada contendo as seguintes operações:
// a) EMPILHAR(S, x): Empilha o elemento x na pilha S.
// Nota: Garanta que o tempo de execução dessa função seja Θ(1).
// b) DESEMPILHAR(S): Desempilha o elemento no topo da pilha S.
// Nota: Garanta que o tempo de execução dessa função seja Θ(1).
// c) TOPO(S): Retorne o elemento x no topo da pilha S.
// Nota: Garanta que o tempo de execução dessa função seja Θ(1).
// typedef struct stack{
//     int *itens;
//     int topo;
//     int max;
// }stack;
// stack* inicializar_pilha(int max){
//     stack *pilha=malloc(sizeof(stack));
//     if(pilha == NULL){
//         return NULL;
//     }
//     pilha->itens=malloc(sizeof(int)*max);
//     if(pilha->itens==NULL){
//         free(pilha);
//         return NULL;
//     }
//     pilha->max=max;
//     pilha->topo=-1;
//     return pilha;
// }
// void empilhar(stack * pilha,int x){
//     pilha->topo++;
//     if(pilha->topo==pilha->max){
//         pilha->topo--;
//         return;
//     }
//     pilha->itens[pilha->topo]=x;
//     return;
// }
// void desempilhar(stack * pilha){
//     if(pilha->topo==-1){
//         return;
//     }
//     pilha->topo--;
//     return;
// }
// int* topo(stack * pilha){
//     if(pilha->topo==-1){
//         return NULL;
//     }
//     return &(pilha->itens[pilha->topo]);
// }

// Utilize a estrutura de dados do tipo pilha para implementar uma função que realizará a
// verificação do balanceamento de parênteses. Isto é, escreva uma função que verifique se
// todos os parênteses, colchetes e chaves de uma cadeia de caracteres S estão balanceados.
// A função deve retornar 1 se estiver balanceadas, e 0 caso contrário.
// typedef struct pilha{
//     char str[256];
//     int topo;
// }pilha;

// pilha* inicializar(){
//     pilha * stack=malloc(sizeof(pilha));
//     if(stack==NULL){
//         return NULL ;
//     }
//     stack->topo=-1;
//     return stack;
// }
// void empilhar(pilha * pilha,char c){
//     pilha->topo++;
//     if(pilha->topo==256){
//         return;
//     }
//     pilha->str[pilha->topo]=c;
//     return;
// }
// char* desempilhar(pilha *pilha){
//     if(pilha->topo==-1){
//         return NULL;
//     }
//     char *c=&(pilha->str[pilha->topo]);
//     pilha->topo--;
//     return c;
// }
// int verificar_balanceamento(char* str){
//     pilha * aberto;
//     char *c;
//     int i=0;
//     aberto=inicializar();

//     while(str[i]!='\0'){
//         if(str[i]=='(' || str[i]=='['|| str[i]=='{'){
//             empilhar(aberto,str[i]);
//         }else if(str[i]==')' || str[i]==']'|| str[i]=='}'){
//             c=desempilhar(aberto);
//             if(c == NULL){
//                 return 0;
//             }
//             if(*c == '(' && str[i]!=')'){
//                 return 0;
//             }
//             if(*c == '[' && str[i]!=']'){
//                 return 0;
//             }
//             if(*c == '{' && str[i]!='}'){
//                 return 0;
//             }
            
//         }
//         i++;
//     }
//     if(aberto->topo==-1){
//         return 1;
//     }else{
//         return 0;
//     }
   
// }

// Implemente uma função com pilha que recebe uma cadeia de caracteres S e inverta as
// letras de cada palavra individualmente, mantendo a ordem das palavras intacta.
// Dica: Use uma pilha para realizar a inversão das palavras.
// typedef struct stack{
//     char sequencia[256];
//     int topo;
// }stack;

// void empilhar(stack *pilha,char c){
//     pilha->topo++;
//     if(pilha->topo==256){
//         pilha->topo--;
//         return;
//     }
//     pilha->sequencia[pilha->topo]=c;
//     return;
// }
// char desempilhar(stack *pilha){

//     char c=pilha->sequencia[pilha->topo];
//     pilha->topo--;
//     return c;
// }
// void inverter_palavras(char *str){
//     stack pilha;
//     pilha.topo=-1;
//     int init_inversion=0;
//     int i=0;
//     while(str[i+1]!='\0'){
//         i++;
//     }
//     str[i+1]=' ';
//     str[i+2]='\0';
//     i=0;
//     while(str[i]!='\0'){
        
//         if(str[i]!=' '){
//             empilhar(&pilha,str[i]);
//         }else{
          
//             i=init_inversion;
//             while(str[i]!=' '){
//                 str[i]=desempilhar(&pilha);
//                 i++;
//             }
//             init_inversion=i+1;
        
//         }
       
//         i++;
//     }
   

// }
// int main(){
//     char str[256]="Algoritmos e Tecnicas de Programacao II";
//     inverter_palavras(str);
//     printf("%s ",str);
// }

// Construa um programa que receba da entrada padrão do usuário uma cadeia de carac-
// teres contendo uma expressão matemática no formato pós-fixado (em que os operadores
// aparecem depois dos operandos). O programa deve suportar as operações de adição,
// subtração, multiplicação e divisão.
// typedef struct stack{
//     char sequencia[256];
//     int topo;
// }stack;

// stack * inicializar(){
//     stack * pilha = malloc(sizeof(stack));
//     pilha->topo=-1;
//     return pilha;
// }
// void empilhar(stack * pilha,char c){
//     pilha->topo++;
//     if(pilha->topo == 256){
//         pilha->topo--;
//         return ;
//     }
//     pilha->sequencia[pilha->topo]=c;
//     return;
// }
// char  desempilhar(stack * pilha){
//     if(pilha->topo==-1){
//         return '\0';

//     }
//     char c=pilha->sequencia[pilha->topo];
//     pilha->topo--;
//     return c;
// }
// int calcular_operacao(char operador,int n1,int n2){
//     if(operador == '+'){
//         return n1+n2;
//     }
//     if(operador=='-'){
//         return n2-n1;
//     }
//     if(operador=='*'){
//         return n1*n2;
//     }
//     if(operador== '/'){
//         return n2/n1;
//     }
// }
// int pos_fixado(char * str){
//     stack * pilha=inicializar();
//     if(pilha == NULL){
//         return 0;
//     }
//     int i=0;
//     int result=0;
//     int n1,n2;
//     char c1,c2;
//     while(str[i]!='\0'){
//         if(str[i]=='+' || str[i]=='-' || str[i]=='*'||str[i]=='/'){
//             c2=desempilhar(pilha);
//             c1=desempilhar(pilha);
//             if(c1=='\0' || c2=='\0'){
//                 printf("Formato invalido");
//                 free(pilha);
//                 return 0;
//             }
           
//             n1=atoi(&c1);
//             n2=atoi(&c2);
//             if((n1==0 && c1!='0')||(n2==0 && c2!='0')){
//                 printf("Formato invalido");
//                 free(pilha);
//                 return 0;
//             }
//             printf("nums:%d %d\n",n1,n2);
//             result+=calcular_operacao(str[i],n1,n2);
            
//             empilhar(pilha,(char)result);



//         }else{
//             empilhar(pilha,str[i]);
//         }
//         i++;
//     }
// }
// int main(){
//     char str[256]="51+5*";
//     printf("%d",pos_fixado(str));
// }

// Implemente uma função que reverta a ordem dos elementos em uma pilha S com as
// seguintes estruturas de dados adicionais:
// a) Usando duas pilhas auxiliares.
// b) Usando uma fila auxiliar.
// #define MAX 20
// typedef struct stack{
//     int topo;
//     int itens[MAX];
// }stack;
// typedef struct queue{
//     int items[MAX];
//     int capacidade;
//     int inicio;
//     int fim;
//     int tamanho;
// }queue;
// stack * inicializar(){
//     stack * pilha=malloc(sizeof(stack));
//     if(pilha!=NULL){
//         pilha->topo=-1;
//     }
//     return pilha;
// }
// queue * inicializar_fila(){
//     queue *fila=malloc(sizeof(queue));
//     fila->capacidade=MAX;
//     fila->inicio=0;
//     fila->fim=0;
//     fila->tamanho=0;
//     return fila;
// }

// void enfileirar(queue * fila,int x){
//     if(fila->tamanho==fila->capacidade){
//         return;
//     }
//     fila->tamanho++;
//     fila->items[fila->fim]=x;
//     fila->fim=(fila->fim+1)%fila->capacidade;
// }
// int desenfilerar(queue * fila){
//     if(fila->tamanho==0){
//         return -1;
//     }
//     int x;
//     fila->tamanho--;
//     x=fila->items[fila->inicio];
//     fila->inicio=(fila->inicio+1)%fila->capacidade;
//     return x;
// }
// void empilhar(stack * pilha,int x){
//     pilha->topo++;
//     if(pilha->topo == MAX){
//         pilha->topo--;
//         return;
//     }
//     pilha->itens[pilha->topo]=x;
//     return;
// }
// int desempilhar(stack * pilha){
//     if(pilha->topo==-1){
//         return -1;
//     }
//     int temp=pilha->itens[pilha->topo];
//     pilha->topo--;
//     return temp;
// }
// void change(stack * pilha){
//     queue *fila=inicializar_fila();
//     if(fila==NULL){
//         return;
//     }
//     int i,temp,max=pilha->topo;
//     for(i=0;i<=max;i++){
//         temp=desempilhar(pilha);
//         enfileirar(fila,temp);
//     }
//     for(i=0;i<=max;i++){
//         temp=desenfilerar(fila);
//         empilhar(pilha,temp);
//     }
//     free(fila);
//     return;
// }
// void revert(stack* pilha){
//     change(pilha);
//     return;
// }
// void change(stack * original,stack * aux1,stack * aux2){
//     int counter;
//     int max=original->topo;
//     int temp;
//     for(counter=0;counter<=max;counter++){
//         temp=desempilhar(original);
//         empilhar(aux1,temp);
//     }
//     for(counter=0;counter<=max;counter++){
//         temp=desempilhar(aux1);
//         empilhar(aux2,temp);
//     }
//     for(counter=0;counter<=max;counter++){
//         temp=desempilhar(aux2);
//         empilhar(original,temp);
//     }
//     return ;
// }
// void revert(stack * pilha){
//     stack * aux1=inicializar();
//     if(aux1==NULL){
//         return ;
//     }
//     stack * aux2=inicializar();
//     if(aux2==NULL){
//         free(aux1);
//         return ;
//     }
//     change(pilha,aux1,aux2);
//     free(aux1);
//     free(aux2);
// }




// Implemente uma função que receba duas pilhas S1 e S2, e que transfira os elementos da
// pilha S1 para a pilha S2 de modo que os elementos em S2 estejam na mesma ordem de S1.
// Dica: Use uma pilha adicional.
// #define MAX 100
// typedef struct stack{
//     int itens[MAX];
//     int topo;
// }stack;
// stack * inicializar(){
//     stack * pilha=malloc(sizeof(stack));
//     if(pilha!=NULL){
//         pilha->topo=-1;
//     }
//     return pilha;
// }
// void empilhar( stack * pilha,int dado){
//     pilha->topo++;
//     if(pilha->topo==MAX){
//         pilha->topo--;
//         return;
//     }
//     pilha->itens[pilha->topo]=dado;
//     return;
// }
// int desempilhar(stack * pilha){
//     if(pilha->topo == -1){
//         return -1;

//     }
//     int x=pilha->itens[pilha->topo];
//     pilha->topo--;
//     return x;
// }
// void concat(stack * s1,stack*s2){
//     stack * aux=inicializar();
//     if(aux==NULL){
//         return;
//     }
//     int i,temp;
//     int topo=s1->topo;
//     for(i=0;i<=topo;i++){
//         temp=desempilhar(s1);
//         empilhar(aux,temp);
//     }
//     for(i=0;i<=topo;i++){
//         temp=desempilhar(aux);
//         empilhar(s2,temp);
//     }
//     free(aux);
//     return;
// }


// Escreva um programa com pilha que determine se uma dada cadeia de caracteres S é um
// palíndromo. Você deve ler apenas um caractere por vez da cadeia de caracteres e não
// deve usar um vetor para primeiro armazenar a cadeia de caracteres e depois analisar.
// Dica: Use uma ou mais pilhas.

// #define MAX 100
// typedef struct stack{
//     char itens[MAX];
//     int topo;
// }stack;
// stack * inicializar(){
//     stack * pilha=malloc(sizeof(stack));
//     if(pilha!=NULL){
//         pilha->topo=-1;
//     }
//     return pilha;
// }
// void empilhar( stack * pilha,char dado){
//     pilha->topo++;
//     if(pilha->topo==MAX){
//         pilha->topo--;
//         return;
//     }
//     pilha->itens[pilha->topo]=dado;
//     return;
// }
// char desempilhar(stack * pilha){
//     if(pilha->topo == -1){
//         return -1;

//     }
//     int x=pilha->itens[pilha->topo];
//     pilha->topo--;
//     return x;
// }
// int eh_palindromo(stack * pilha){
//     stack * aux1,*aux2;
//     aux1=inicializar();
//     if(aux1==NULL){
//         return 0;
//     }
//     aux2=inicializar();
//     if(aux2==NULL){
//         free(aux1);
//         return 0;
//     }
//     char temp;
//     int tamanho=pilha->topo;
//     int i;
//     for(i=0;i<=tamanho;i++){
//         temp=desempilhar(pilha);
//         empilhar(aux1,temp);
//         empilhar(aux2,temp);
//     }
//     for(i=0;i<=tamanho;i++){
//         temp=desempilhar(aux2);
//         empilhar(pilha,temp);
//     }
//     for(i=0;i<=tamanho;i++){
//         if(desempilhar(aux1)!=desempilhar(pilha)){
//             free(aux1);
//             free(aux2);
//             return 0;
//         }
//     }
//     free(aux1);
//     free(aux2);
//     return 1;
// }   
// int main(){
//     char c;
//     stack *pilha=inicializar();
//     if(pilha==NULL){
//         printf("Erro de alocacao");
//         return 1;
//     }
//     printf("Digite uma palavra letra por letra,quando quiser parar,digite 0:\n");
//     do{
//         scanf(" %c",&c);
//         if(c!='0'){
//             empilhar(pilha,c);
//         }
        
//     }while(c!='0');
//     if(eh_palindromo(pilha)==0){
//         printf("Nao eh palindromo");
//     }else{
//         printf("eh palindromo");

//     }
//     free(pilha);
//     return 0;
// }

// Implemente uma fila de prioridades utilizando a estrutura de dados fila. Uma fila de
// prioridades é semelhante a uma fila comum, mas cada elemento x possui uma prioridade
// p associada, e o elemento com maior prioridade é removido antes dos outros. Se dois
// elementos tiverem a mesma prioridade, você deve garantir que eles serão removidos de
// acordo com a ordem em que foram inseridos. Nesse sentido, sua fila de prioridades deve
// conter no mínimo as seguintes funções:
// a) ENFILEIRAR(Q, x, p): Adiciona o elemento x com prioridade p na fila Q.
// b) DESENFILEIRAR(Q): Remove da fila Q o elemento x com a maior prioridade.
// typedef struct dado{
//     int prioridade;
//     int num;
// }dado;
// typedef struct queue{
//     int inicio;
//     int fim;
//     int capacidade;
//     int tamanho;
//     dado* itens;
// }queue;
// queue * inicializar(int capacidade){
//     queue * fila=malloc(sizeof(queue));
//     if(fila!=NULL){
//         fila->capacidade=capacidade;
//         fila->tamanho=0;
//         fila->inicio=0;
//         fila->fim=0;
//         fila->itens=malloc(sizeof(dado)*capacidade);
//         if(fila->itens==NULL){
//             free(fila);
//             return NULL;
//         }
//     }
//     return fila;
// }
// void ordenar_por_prioridade(queue*fila){
//     int i;
//     int trocar=1;
//     dado aux;
//     while(trocar!=0){
//         trocar=0;
//         for(i=0;i<fila->tamanho-1;i++){
//             if(fila->itens[(fila->inicio+i+1)%fila->capacidade].prioridade>fila->itens[(fila->inicio+i)%fila->capacidade].
//             prioridade){
//                 trocar=1;
//                 aux=fila->itens[(fila->inicio+i+1)%fila->capacidade];
//                 fila->itens[(fila->inicio+i+1)%fila->capacidade]=fila->itens[(fila->inicio+i)%fila->capacidade];
//                 fila->itens[(fila->inicio+i)%fila->capacidade]=aux;
//             }
//         }
//     }
//     return;
// }
// void enfileirar(queue* fila,int num,int prioridade){
//     if(fila->capacidade==fila->tamanho){
//         return;
//     }
//     fila->itens[fila->fim].num=num;
//     fila->itens[fila->fim].prioridade=prioridade;
//     fila->fim=(fila->fim+1)%fila->capacidade;
//     fila->tamanho++;
//     ordenar_por_prioridade(fila);
//     return;
// }
// void desenfileirar(queue*fila){
//     if(fila->tamanho==0){
//         return;
//     }
//     fila->inicio=(fila->inicio+1)%fila->capacidade;
//     fila->tamanho--;
//     return;
// }


// Construa uma estrutura de dados pilha S (dinamicamente alocada) usando apenas uma
// fila de prioridade Q e uma variável adicional p em cada nó.
// Note: A fila de prioridade Q mencionada neste exercício deve seguir as mesmas restrições
// do exercício anterior.

// Projete e analise uma estrutura de dados do tipo pilha que inclui as operações tradicionais
// EMPILHAR(S, x) e DESEMPILHAR(S), mas também a operação MAX(S), a qual deverá
// retornar o elemento máximo armazenado na pilha S.
// Note: Você não deve percorrer a pilha (ou a estrutura subjacente para implementá-la)
// para saber quem é o elemento máximo.
// typedef struct stack{
//     int *itens;
//     int capacidade;
//     int *max;
//     int topo;
// }stack;
// stack * inicializar(int capacidade){
//     stack *pilha=malloc(sizeof(stack));
//     if(pilha!=NULL){
//         pilha->capacidade=capacidade;
//         pilha->itens=malloc(sizeof(int)*capacidade);
//         if(pilha->itens==NULL){
//             free(pilha);
//             return NULL;
//         }
//         pilha->topo=-1;
//         pilha->max=NULL;
//     }
//     return pilha;
// }
// void empilhar(stack * pilha,int dado){
//     pilha->topo++;
//     if(pilha->topo == pilha->capacidade){
//         pilha->topo--;
//         return;
//     }
    
//     return;
// }
// void desempilhar(stack * pilha){
//     if(pilha->topo==-1){
//         return;
//     }
//     if(pilha->)
// }

// Implemente a estrutura de dados do tipo fila apenas usando estruturas de dados do tipo
// pilha. Sua nova estrutura de dados do tipo fila deve conter no mínimo as seguintes
// funções ENFILEIRAR(Q, x) e DESENFILEIRAR(Q). Em seguida, implemente um programa
// que receba da entrada padrão um número natural m > 0, e em seguida uma sequência de
// m comandos entre:
// #include <string.h>
// typedef struct stack{
//     int *itens;
//     int capacidade;
//     int topo;
// }stack;
// typedef struct queue{
//     stack *pilha;
   
// }queue;
// queue * inicializar_queue(int capacidade){
//     queue * fila=malloc(sizeof(queue));
//     if(fila!=NULL){
//         fila->pilha=malloc(sizeof(stack));
//         if(fila->pilha==NULL){
//             free(fila);
//             return NULL;
//         }
//         fila->pilha->capacidade=capacidade;
//         fila->pilha->topo=-1;
//         fila->pilha->itens=malloc(sizeof(int)*capacidade);
//         if(fila->pilha->itens==NULL){
//             free(fila->pilha);
//             free(fila);
//             return NULL;
//         }
//     }
//     return fila;
// }
// void enfileirar(queue * fila,int dado){
//     fila->pilha->topo++;
//     if(fila->pilha->topo==fila->pilha->capacidade){
//         fila->pilha->topo--;
//         return;
//     }
//     fila->pilha->itens[fila->pilha->topo]=dado;
//     return;
// }
// void desenfileirar(queue * fila){
//     if(fila->pilha->topo==-1){
//         return;
//     }
//     int temp;
//     queue * aux=inicializar_queue(fila->pilha->capacidade);
//     if(aux==NULL){
//         return;
//     }
//     while(fila->pilha->topo>=0){
//         temp=fila->pilha->itens[fila->pilha->topo];
//         fila->pilha->topo--;
//         enfileirar(aux,temp);
//     }
//     aux->pilha->topo--;
//     while(aux->pilha->topo>=0){
//         temp=aux->pilha->itens[aux->pilha->topo];
//         aux->pilha->topo--;
//         enfileirar(fila,temp);
//     }
//     free(aux->pilha);
//     free(aux);
//     return;
// }
// void frente(queue * fila){
//     if(fila->pilha->topo==-1){
//         return;
//     }
//     int temp;
//     queue * aux=inicializar_queue(fila->pilha->capacidade);
//     if(aux==NULL){
//         return;
//     }
//     while(fila->pilha->topo>=0){
//         temp=fila->pilha->itens[fila->pilha->topo];
//         fila->pilha->topo--;
//         enfileirar(aux,temp);
//     }
//     printf("%d",aux->pilha->itens[aux->pilha->topo]);
//     while(aux->pilha->topo>=0){
//         temp=aux->pilha->itens[aux->pilha->topo];
//         aux->pilha->topo--;
//         enfileirar(fila,temp);
//     }
//     free(aux->pilha);
//     free(aux);
//     return;
// }
// void handle_comando(queue*fila,char * str,int *info){
//     if(strcmp(str,"enfileirar")==0){
//         enfileirar(fila,*info);
//         return;
//     }
//     if(strcmp(str,"desenfileirar") ==0){
//         desenfileirar(fila);
//         return;

//     }
//     if(strcmp(str,"frente")==0){
//         frente(fila);
//         return;
//     }


// }
// int main(){
//     char ** comando;
//     int * info;
//     int i;
//     int n;
//     queue * fila=inicializar_queue(100);
//     printf("Digite o numero de comandos:\n");
//     scanf("%d",&n);
//     comando=malloc(sizeof(char*)*n);
//     for(i=0;i<n;i++){
//         comando[i]=malloc(256);
//     }
//     info=malloc(sizeof(int)*n);
//     for(i=0;i<n;i++){
//         scanf(" %s",comando[i]);
//         if(strcmp(comando[i],"enfileirar")==0){
//             scanf("%d",&info[i]);
//         }

//     }
//     for(i=0;i<n;i++){
//         handle_comando(fila,comando[i],&info[i]);
//     }
//     free(fila->pilha);
//     free(fila);
//     return 0;
// }
// Implemente uma função que receba uma lista simplesmente ligada L, a qual armazena
// números inteiros, e um número inteiro x, e que particione a lista de tal forma que todos os
// nós com valores associados menores que x venham antes dos nós com valores associados
// maiores que x.


// void particionar(Lista *L,int x){
//     No *ptr=L->inicio;
//     if(ptr==NULL){
//         return;
//     }
//     int maiores_index=0,menores_index=0,i;
//     No **maiores,**menores;
//     maiores=malloc(sizeof(No*)*L->tamanho);
//     if(maiores==NULL){
//         return;
//     }
//     menores=malloc(sizeof(No*)*L->tamanho);
//     if(menores==NULL){
//         free(maiores);
//         return;
//     }
//     while(ptr!=NULL){
//         if(ptr->dado<x){
//             menores[menores_index]=ptr;
//             menores_index++;
//         }else{
//             maiores[maiores_index]=ptr;
//             maiores_index++;
//         }
//         ptr=ptr->proximo;
//     }
//     if(menores_index!=0){
//         L->inicio=menores[0];
//         ptr=L->inicio;
//         for(i=1;i<menores_index;i++){
//             ptr->proximo=menores[i];
//             ptr=ptr->proximo;
//         }

//     }
//     if(maiores_index!=0){
//         if(menores_index==0){
//             L->inicio=maiores[0];
//             ptr=L->inicio;
//             for(i=1;i<maiores_index;i++){
//                 ptr->proximo=maiores[i];
//                 ptr=ptr->proximo;
//             }
//         }else{
//             for(i=0;i<maiores_index;i++){
//                 ptr->proximo=maiores[i];
//                 ptr=ptr->proximo;
//             }
//         }

//     }
//     L->fim=ptr;
//     ptr->proximo=NULL;
//     free(maiores);
//     free(menores);
//     return;
// }

// Escreva um programa que requisite ao usuário dois números naturais m e n, ambos não
// nulos. Em seguida, requisite da entrada padrão que o usuário insira duas sequncias de
// números de comprimentos m e n, em que a primeira sequência deverá ser inserida em
// uma lista simplesmente ligada, denotada por L, e a segunda deverá ser um subconjunto
// da primeira sequência. Após isso, retorne o número de componentes conectadas em L,
// em que dois elementos x1 e x2 da lista estão conectados se, e somente se, eles aparecem
// consecutivamente na lista.
// int verificar_conexoes(Lista * L,int * vec_ocurr,int m,int n){
//     if(m==1){
//         return 0;
//     }
//     if(L==NULL){
//         return 0;
//     }
//     if(L->inicio==NULL|| L->fim==NULL){
//         return 0;
//     }
//     int verifier1,verifier2;
//     int conections=0;
//     int i;
//     No *ptr1,*ptr2;
//     ptr1=L->inicio;
//     ptr2=ptr1->proximo;
//     while(ptr2!=NULL){
//         verifier1=0;
//         verifier2=0;
//         for(i=0;i<n;i++){
//             if(vec_ocurr[i]==ptr1->dado){
//                 verifier1=1;
//             }
//             if(vec_ocurr[i]==ptr2->dado){
//                 verifier2=1;
//             }

//         }
//         if(verifier1==1 && verifier2==1){
//             conections++;
//         }
//         ptr1=ptr1->proximo;
//         ptr2=ptr2->proximo;
//     }
//     return conections;

// }
// int main(){
//     int m,n,i;
//     int num;
//     int *vec_occur;
//     Lista *L=malloc(sizeof(Lista));
//     L->inicio=NULL;
//     L->fim=NULL;
//     L->tamanho=0;
//     printf("Digite o tamanho da sequencia:\n");
//     scanf("%d",&m);
//     printf("Digite o tamanho da subsequencia:\n");
//     scanf("%d",&n);
//     vec_occur=malloc(sizeof(int)*n);
//     if(vec_occur==NULL){
//         free(L);
//         return 1;
//     }
//     for(i=0;i<m;i++){
//         scanf("%d",&num);
//         inserir_no_fim(L,num);
//     }
//     for(i=0;i<n;i++){
//         scanf("%d",&num);
//         vec_occur[i]=num;
//     }
//    printf("%d",verificar_conexoes(L,vec_occur,m,n));

// }

// Escreva um programa que receba um número natural não nulo m, e que em seguida receba
// 2m números que serão armazenados como tuplas em uma lista simplesmente encadeada
// L. Após isso, receba um número natural não nulo n, e em seguida receba 2n números
// que serão armazenados também como tuplas em uma lista simplesmente encadeada H.
// Além disso, deve-se notar que essas tuplas (elementos da lista) representam intervalos
// fechados [a, b] e que os intervalos em uma mesma lista devem ser mutuamente disjuntos
// (você deve checar isso). Por fim, faça com que o programa imprima na saída padrão a
// intersecção resultante dessas duas listas de intervalos fechados, imprimindo a tupla de
// elementos na saída padrão separadas por linha.

// Exemplo de Intersecção Intervalar: A intersecção de dois intervalos fechados é um con-
// junto de números reais que ou é vazia ou representa um intervalo fechado. Por exemplo,

// a intersecção dos intervalos [1, 3] e [2, 4] é [2, 3].



// Escreva um programa que requisite do usuário por meio da entrada padrão três números
// naturais n ≥ 1, p e r, com as restrições de que p ≥ r, e p, q < n. Em seguida, requisite
// do usuário uma sequência de n números inteiros as quais devem ser armazenadas em
// uma lista simplesmente ligada L. Por fim, faça a troca dos elementos nas posições p e q e
// imprima na saída padrão da aplicação os elementos da lista resultante.
// void troca(Lista *L,int p,int r){
//     No * ptr_inicial,*ptr_final;
//     int position=0,aux;
//     if(p==r){
//         return ;
//     }
//     ptr_inicial=L->inicio;
//     while(position!=r){
//         position++;
//         ptr_inicial=ptr_inicial->proximo;
//     }
//     ptr_final=ptr_inicial;
//     while(position!=p){
//         position++;
//         ptr_final=ptr_final->proximo;
//     }
//     aux=ptr_inicial->dado;
//     ptr_inicial->dado=ptr_final->dado;
//     ptr_final->dado=aux;
//     return;
// }
// int main(){
//     int p,r,n;
//     int i,num;
//     Lista *L=malloc(sizeof(Lista));
//     L->inicio=NULL;
//     L->fim=NULL;
//     L->tamanho=0;
//     printf("Digite o numero total n do tamanho da lista encadeada:\n");
//     scanf("%d",&n);
//     do{
//         printf("Digite o valor p:\n");
//         scanf("%d",&p);
//         if(p>=n){
//             printf("p tem que ser menor que n\n");
//         }
//     }while(p>=n);
//     do{
//         printf("Digite o valor r:\n");
//         scanf("%d",&r);
//         if(r>p){
//             printf("r tem que ser menor ou igual que p\n");
//         }
//     }while(r>p);
//     for(i=0;i<n;i++){
//         scanf("%d",&num);
//         inserir_no_fim(L,num);
//     }
//     percorrer_lista(L);
//     troca(L,p,r);
//     percorrer_lista(L);
//     //libera Nos de L
//     free(L);
    
//     return 0;
// }


// Projete uma estrutura de dados do tipo pilha, a qual armazenará números inteiros, que
// permita empilhar, desempilhar, acessar o elemento do topo, e permitir recuperar o menor
// elemento em tempo de execução Θ(1). Em seguida, projete um programa que requisite
// ao usuário um número natural m > 0, e uma sequência de m comandos entre:
// a) EMPILHAR x: Esse comando empilhará o elemento x na pilha.
// b) DESEMPILHAR: Esse comando desempilhará um elemento da pilha.
// c) TOPO: Esse comando imprimirá na saída padrão da aplicação o elemento no topo da pilha.
// d) MIN: Esse comando imprimirá na saída padrão da aplicação o menor elemento da pilha.
// #include <string.h>
// typedef struct stack{
//     int *itens;
//     int menor;
//     int topo;
//     int tamanho;
// }stack;
// stack * init(int tamanho){
//     if(tamanho ==0){
//         return NULL;
//     }
//     stack * pilha=malloc(sizeof(stack));
//     if(pilha !=NULL){
//         pilha->itens=malloc(sizeof(int)*tamanho);
//         if(pilha->itens==NULL){
//             free(pilha);
//             return NULL;
//         }
//         pilha->topo=-1;
//         pilha->tamanho=tamanho;
//     }
//     return pilha;
// }
// void empilhar(stack * pilha,int dado){
//     if(pilha==NULL){
//         return;
//     }
//     if(pilha->itens==NULL){
//         return;
//     }
//     pilha->topo++;
//     if(pilha->tamanho==pilha->topo){
//         pilha->topo--;
//         return;
//     }
//     pilha->itens[pilha->topo]=dado;
//     if(pilha->topo==0){
//         pilha->menor=dado;
//     }else if(pilha->menor>dado){
//         pilha->menor=dado;
//     }
//     return;
// }
// void desempilhar(stack * pilha){
//     if(pilha==NULL){
//         return;
//     }
//     if(pilha->itens==NULL){
//         return;
//     }
//     if(pilha->topo==-1){
//         return;
//     }
//     if(pilha->itens[pilha->topo]==pilha->menor){
//         int i;
//         pilha->topo--;
//         //nem entra se a pilha tiver sido esvaziada(pilha->topo=-1),"menor" fica com lixo,mas isso será tratado dps
//         if(pilha->topo>=0){
//             pilha->menor=pilha->itens[0];
//         }
//         for(i=0;i<=pilha->topo;i++){
//             if(pilha->itens[i]<menor){
//                 pilha->menor=pilha->itens[i];
        
//             }
//         }
//         return;
//     }
//     pilha->topo--;
//     return;
// }
// void topo(stack * pilha){
//     if(pilha==NULL){
//         return;
//     }
//     if(pilha->itens==NULL){
//         return;
//     }
//     if(pilha->topo==-1){
//         return;
//     }
//     printf("%d\n",pilha->itens[pilha->topo]);
//     return;
// }
// void min(stack * pilha){
//     if(pilha==NULL){
//         return;
//     }
//     if(pilha->itens==NULL){
//         return;
//     }
//     if(pilha->topo==-1){
//         return;
//     }
//     printf("%d\n",pilha->menor);
//     return;
// }
// void handle_comando(stack *pilha,char * str,int *dado){
//     if(strcmp(str,"empilhar")==0){
//         empilhar(pilha,*dado);
//         return;
//     }
//     if(strcmp(str,"desempilhar")==0){
//         desempilhar(pilha);
//         return;
//     }
//     if(strcmp(str,"topo")==0){
//         topo(pilha);
//         return ;
//     }
//     if(strcmp(str,"min")==0){
//         min(pilha);
//         return;
//     }

// }
// int main(){
//     stack * pilha=init(100);
//     if(pilha==NULL){
//         printf("Erro de alocacao!");
//         return 1;
//     }
//     int i,j;
//     int comando;
//     char **comando_strings;
//     int *comando_numeros;
//     printf("Digite a quantidade de comandos:\n");
//     scanf("%d",&comando);
//     comando_numeros=malloc(sizeof(int)*comando);
//     if(comando_numeros==NULL){
//         free(pilha);
//         printf("Erro de alocacao!");
//         return 1;
//     }
//     comando_strings=malloc(sizeof(char *)*comando);
//     if(comando_strings==NULL){
//         free(pilha);
//         free(comando_numeros);
//         printf("Erro de alocacao!");
//         return 1;
//     }
//     for(i=0;i<comando;i++){
//         comando_strings[i]=malloc(256);
//         if(comando_strings[i]==NULL){
//             for(j=0;j<i;j++){
//                 free(comando_strings[j]);
//             }
//             free(comando_strings);
//             free(pilha);
//             free(comando_numeros);
//             printf("Erro de alocacao!");
//             return 1;
//         }
//     }

//     for(i=0;i<comando;i++){
//         scanf(" %s",comando_strings[i]);
//         if(strcmp(comando_strings,"empilhar")==0){
//             scanf("%d",&comando_numeros[i]);
//         }
//     }
//     for(i=0;i<comando;i++){
//         handle_comando(pilha,comando_strings[i],&comando_numeros[i]);
//     }
//     return 0;
// }



// Construa um programa que leia um número n e, em seguida, n números inteiros, inserindo-
// os no final de uma lista duplamente encadeada. Após a leitura, imprima os elementos da
// lista do início para o fim e, em seguida, do fim para o início. Libere todos os nós ao final.
// typedef struct Node{
//     struct Node * ant;
//     struct Node * prox;
//     int dado;
// }Node;
// typedef struct duplamente{
//     Node * inicio;
//     Node * fim;
//     int tamanho;
// }duplamente;

// duplamente * init(){
//     duplamente * lista=malloc(sizeof(duplamente));
//     if(lista != NULL){
//         lista->inicio=NULL;
//         lista->fim=NULL;
//         lista->tamanho=0;
//     }
//     return lista;
// }
// void inserir_no_final(duplamente * L ,int dado){
//     Node * novo=malloc(sizeof(Node));
//     Node * ptr;
//     if(novo == NULL){
//         return;
//     }
//     novo->dado=dado;
//     if(L->inicio==NULL){
        
//         novo->ant=NULL;
//         novo->prox=NULL;
//         L->inicio=novo;
//         L->fim=novo;
//         L->tamanho++;
//         return;
//     }
//     ptr=L->inicio;
//     while(ptr->prox!=NULL){
//         ptr=ptr->prox;
//     }
//     novo->ant=ptr;
//     novo->prox=NULL;
//     ptr->prox=novo;
//     L->fim=novo;
//     L->tamanho++;
//     return;
// }

// void percorrer_reta(duplamente *L){
//     if(L==NULL){
//         return;
//     }
//     if(L->inicio==NULL){
//         return;
//     }
//     Node * ptr=L->inicio;
//     while(ptr!=NULL){
//         printf("%d ",ptr->dado);
//         ptr=ptr->prox;
//     }
//     return;
// }
// void percorrer_re(duplamente *L){
//     if(L==NULL){
//         return;
//     }
//     if(L->fim==NULL){
//         return;
//     }
//     Node * ptr=L->fim;
//     while(ptr!=NULL){
//         printf("%d ",ptr->dado);
//         ptr=ptr->ant;
//     }
//     return;
// }
// void liberar_lista(duplamente *L){
//     if(L==NULL){
//         return;
//     }
//     if(L->inicio==NULL){
//         free(L);
//         return;
//     }
//     Node *ptr,*aux;
//     ptr=L->inicio;
//     while(ptr!=NULL){
//         aux=ptr;
//         ptr=ptr->prox;
//         free(aux);
//     }
//     free(L);
//     return;
// }
// int main(){
//     duplamente * L=init();
//     if(L==NULL){
//         printf("Erro de alocacao!");
//         return 1;
//     }
//     int qtde;
//     int num;
//     int i;
//     printf("Digite o tamanho da lista encadeada:\n");
//     scanf("%d",&qtde);
//     for(i=0;i<qtde;i++){
//         scanf("%d",&num);
//         inserir_no_final(L,num);
//     }
//     percorrer_reta(L);
//     printf("\n");
//     percorrer_re(L);
//     liberar_lista(L);
//     return 0;
// }

// No problema de Josephus, n pessoas, numeradas de 1 a n, estão dispostas em um círculo.
// Começando pela pessoa 1, conta-se k pessoas no sentido horário e a k-ésima pessoa é
// eliminada. A contagem recomeça a partir da pessoa seguinte à eliminada, até que reste
// apenas uma pessoa. Utilizando uma lista circular simplesmente encadeada, escreva um
// programa que leia n e k e imprima a ordem de eliminação e o sobrevivente.
// typedef struct lista_circular{
//     No * inicio;
//     No * fim;
//     int tamanho;
// }lista_circular;

// lista_circular * init(){
//     lista_circular* lista=malloc(sizeof(lista_circular));
//     if(lista!=NULL){
//         lista->inicio=NULL;
//         lista->fim=NULL;
//         lista->tamanho=0;
//     }
//     return lista;
// }
// void constroi(lista_circular* L,int n){
//     No * aux,*ptr;
//     int count=1;
//     L->tamanho=n;
//     while(count<=n){
           
//         aux=malloc(sizeof(No));
          
//         aux->dado=count;
         
//         if(L->inicio==NULL){
             
//             L->inicio=aux;
//             L->fim=aux;
//             ptr=aux;
//             aux->proximo=NULL;
            
//         }
//         else if(count==n){
            
//            ptr->proximo=aux;
//            aux->proximo=L->inicio;
//            L->fim=aux;
//         }else{
              
//             ptr->proximo=aux;
//             aux->proximo=NULL;
//             L->fim=aux;
//             ptr=ptr->proximo;            
//         }
//         count++;
//     }
//     return;
// }
// int josephus(lista_circular* L,int * eliminados,int k){
 
//     if(L->inicio==NULL){
//         return 0;
//     }
//     if(L->inicio==L->fim){
//         return L->inicio->dado;
//     }
//     No * anterior,*atual,*aux;
//     int eliminados_index=0;
//     int count=1;
//     anterior=L->fim;
//     atual=L->inicio;
//     while(L->tamanho!=1){
       
//         if(count==k){
//             aux=atual->proximo;
//             anterior->proximo=aux;
//             eliminados[eliminados_index]=atual->dado;
//             eliminados_index++;
//             free(atual);
//             atual=aux;
//             count=1;
//             L->tamanho--;
            
//         }else{
//             count++;
//             anterior=anterior->proximo;
//             atual=atual->proximo;

//         }

//     }
//     return atual->dado;
// }
// int main(){
//     int n,k;
//     int i;
//     int * eliminados;
//     int vencedor;
//     lista_circular * L=init();
//     if(L==NULL){
//         printf("Erro de alocacao!!!");
//         return 1;
//     }
//     printf("Digite o numero de pessoas:\n");
//     scanf("%d",&n);
//     printf("Digite o passo de avanco:\n");
//     scanf("%d",&k);
//     constroi(L,n);
//     eliminados=malloc(sizeof(int)*(n-1));
//     if(eliminados==NULL){
//         free(L);
//         printf("Erro de alocacao!!!");
//         return 1;
//     }
//     vencedor=josephus(L,eliminados,k);
//     printf("Eliminados: ");
//     for(i=0;i<n-1;i++){
//         printf("%d ",eliminados[i]);
//     }
    
//     printf("\nSobrevivente:%d",vencedor);
   
// }

// Utilizando uma fila (dinamicamente alocada) de cadeias de caracteres, escreva um pro-
// grama que leia um número natural n e imprima as representações binárias dos números
// de 1 a n. A ideia é iniciar a fila com "1" e, a cada passo, remover o elemento da frente,
// imprimi-lo, e inserir no final da fila esse elemento concatenado com "0" e com "1", nessa
// ordem.
// #include <string.h>
// #define natural_size 8
// typedef struct queue{
//     char ** bins;
//     int inicio;
//     int fim;
//     int n;
// }queue;
// queue * init(int n){
//     queue * fila=malloc(sizeof(queue));
//     if(fila!=NULL){
//         fila->bins=malloc(sizeof(char*)*n);
//         fila->fim=0;
//         fila->inicio=0;
//         fila->n=n;
//         if(fila->bins!=NULL){
//             int i,j;
//             for(i=0;i<n;i++){
//                 fila->bins[i]=malloc(natural_size+1);
//                 if(fila->bins[i]==NULL){
//                     for(j=0;j<i;j++){
//                         free(fila->bins[j]);
//                     }
//                     free(fila->bins);
//                     free(fila);
//                     return NULL;
//                 }
//             }
//         }else{
//             free(fila);
//             return NULL;
//         }
//     }
//     return fila;
// }
// void binaries(int n){
//     queue * L=init(n);
//     char dummy[natural_size+1];
//     int i;
//     if(L==NULL){
//         return;
//     }
    
//     strcpy(L->bins[L->inicio],"1");
   
//     for(i=0;L->fim<n;i++){
//         L->fim++;
//         strcpy(dummy,L->bins[i]);
       
//         if(L->fim>=n){
//             break;
//         }
//         strcpy(L->bins[L->fim],strcat(dummy,"0"));
//         L->fim++;
//         if(L->fim>=n){
//             break;
//         }
//         strcpy(dummy,L->bins[i]);
//         strcpy(L->bins[L->fim],strcat(dummy,"1"));
//     }
//     for(i=0;i<n;i++){
//         printf(" %s\n",L->bins[i]);
//     }
//     return;
// }
// int main(){
//     int n;
//     scanf("%d",&n);
//     binaries(n);
// }