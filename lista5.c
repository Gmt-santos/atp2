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
typedef struct Node{
    int dado;
    struct Node * proximo;
}Node;
typedef struct linkedlist{
    int tamanho;
    Node* inicio;
    Node* fim;
}linkedlist;
void insercao_cabeca(linkedlist * L,int x){
    Node* novo_inicio;
    novo_inicio=malloc(sizeof(Node));
    if(novo_inicio==NULL){
        return;
    }
    novo_inicio->dado=x;
    novo_inicio->proximo=L->inicio;
    L->inicio=novo_inicio;
    L->tamanho++;
    if(novo_inicio->proximo==NULL){
        L->fim=novo_inicio;
    }
    return ;
}
void insercao_cauda(linkedlist * L,int x){
    Node * novo_fim;
    Node *ptr=L->fim;
    novo_fim=malloc(sizeof(Node));
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
void insercao_meio(linkedlist * L,int x,int k){
    if(k>(L->tamanho)+1|| k<1){
        return;
    }
    Node * novo_node=malloc(sizeof(Node));
    if(novo_node==NULL){
        return;
    }
    novo_node->dado=x;
    if(k==1){
        novo_node->proximo=L->inicio;
        L->inicio=novo_node;
        if(novo_node->proximo==NULL){
            L->fim=novo_node;
        }
    }else if(k==(L->tamanho)+1){
        novo_node->proximo=NULL;
        if(L->fim!=NULL){
            L->fim->proximo=novo_node;
            L->fim=novo_node;
        }else{
            L->fim=novo_node;
            L->inicio=novo_node;
        }

    }else{
        int counter=1;
        Node * ptr=L->inicio,*aux;
        while(counter+1!=k){
            ptr=ptr->proximo;
            counter++;
        }
        aux=ptr->proximo;
        ptr->proximo=novo_node;
        novo_node->proximo=aux;

    }
    L->tamanho++;
    return;
}
void delecao_cabeca(linkedlist *L){
    if(L->inicio==NULL){
        return;
    }
    Node * aux;
    aux=L->inicio->proximo;
    free(L->inicio);
    L->inicio=aux;
    L->tamanho--;
    if(aux==NULL){
        L->fim=NULL;
        return;
    }
    if(aux->proximo==NULL){
        L->fim=aux;
    }
  
}
void delecao_cauda(linkedlist *L){
    if(L->fim==NULL){
        return;
    }
    if(L->fim==L->inicio){
        free(L->fim);
        L->inicio=NULL;
        L->fim=NULL;
        L->tamanho--;
        return ;
    }
    Node * ptr=L->inicio;
    while(ptr->proximo!=L->fim){
        ptr=ptr->proximo;
    }
    free(L->fim);
    L->fim=ptr;
    ptr->proximo=NULL;
    L->tamanho--;
    return;
}
void delecao_meio(linkedlist *L,int k){
    if(k<1 || k>L->tamanho){
        return ;
    }
    if(L->inicio==NULL){
        return;
    }
    Node *aux,*antes,*depois;
    int counter=1;
    if(k==1){
        if(L->inicio->proximo==NULL){
            free(L->inicio);
            L->inicio=NULL;
            L->fim=NULL;
            L->tamanho--;
            return;
        }
        aux=L->inicio->proximo;
        free(L->inicio);
        L->inicio=aux;
        L->tamanho--;
        return;
    }else if(k==L->tamanho){
        antes=L->inicio;
        while(antes->proximo!=L->fim){
            antes=antes->proximo;
        }
        free(L->fim);
        antes->proximo=NULL;
        L->fim=antes;
        L->tamanho--;
        return ;
    }else{
        antes=L->inicio;
        depois=antes->proximo;
        while(counter+1!=k){
            antes=antes->proximo;
            depois=depois->proximo;
            counter++;
        }
        aux=depois->proximo;
        free(depois);
        antes->proximo=aux;
        L->tamanho--;
    }
    return;
}
int busca(linkedlist * L,int x){
    if(L->inicio ==  NULL){
        return 0;
    }
    Node * ptr=L->inicio;
    while(ptr!=NULL){
        if(ptr->dado==x){
            return 1;
        }
        ptr=ptr->proximo;
    }
    return 0;
}
int tamanho(linkedlist *L){
    return L->tamanho;
}