#include <stdio.h>
#include <stdlib.h>
// pilha com vetor
// typedef struct stack{
//     int *itens;
//     int topo;
//     int capacidade;
// }stack;

// stack * inicializar_pilha(int capacidade){
//     if(capacidade<=0){
//         return NULL;
//     }
//     stack * pilha=malloc(sizeof(stack));
//     if(pilha==NULL){
//         return NULL;
//     }
//     pilha->itens=malloc(sizeof(int)*capacidade);
//     if(pilha->itens==NULL){
//         free(pilha);
//         return NULL;
//     }
//     pilha->topo=-1;
//     pilha->capacidade=capacidade;
//     return pilha;
// }
// int desempilhar(stack * pilha){
//     if(pilha==NULL){
//         return 0;// admitir como valor impossivel numa situação normal na pilha;
//     }
//     if(pilha->topo==-1){
//         return 0;
//     }
//     int dado=pilha->itens[pilha->topo];
//     pilha->topo--;
//     return dado;
// }
// void empilhar(stack * pilha,int dado){
//     if(pilha==NULL){
//         return;
//     }
//     if(pilha->itens==NULL){
//         return;
//     }
//     if(pilha->capacidade==pilha->topo+1){
//         return;
//     }
//     pilha->topo++;
//     pilha->itens[pilha->topo]=dado;
//     return;
// }
// void limpar_pilha(stack * pilha){
//     if(pilha==NULL){
//         return;
//     }
//     if(pilha->itens==NULL){
//         return;
//     }
//     pilha->topo=-1;
//     return;
// }
// void printar(stack * pilha){
//     if(pilha==NULL){
//         return;
//     }
//     if(pilha->itens==NULL){
//         return;
//     }
//     int i;
//     printf("\nTopo:\n");
//     for(i=pilha->topo;i>=0;i--){
//         printf("%d\n",pilha->itens[i]);
//     }
//     return;
// }
// int main(){
//     stack * pilha=inicializar_pilha(100);
//     empilhar(pilha,10);
//     printar(pilha);
//     empilhar(pilha,20);
//     printar(pilha);
//     desempilhar(pilha);
//     printar(pilha);
//     return 0;
// }

// pilha com lista encadeada

// typedef struct No{
//     int dado;
//     struct No * prox;
// }No;
// typedef struct stack{
//     No * topo;
//     int tamanho_atual;
//     int tamanho_max;
// }stack;
// stack * inicializar(int tamanho_max){
//     if(tamanho_max<=0){
//         return NULL;
//     }
//     stack * pilha=malloc(sizeof(stack));
//     if(pilha == NULL){
//         return NULL;
//     }
//     pilha->tamanho_atual=0;
//     pilha->topo=NULL;
//     pilha->tamanho_max=tamanho_max;
//     return pilha;
// }
// void printar(stack * pilha){
//     if(pilha == NULL){
//         return;
//     }
//     if(pilha->topo==NULL){
//         printf("\nTopo:NULL");
//         return;
//     }
     
//     No * ptr=pilha->topo;
//     printf("\nTopo:");
//     while(ptr!=NULL){
//         printf("\n%d",ptr->dado);
//         ptr=ptr->prox;
//     }
//     return;
// }
// void empilhar(stack * pilha,int dado){
//     if(pilha==NULL){
//         return;
//     }
//     if(pilha->tamanho_atual>=pilha->tamanho_max && pilha->tamanho_atual!=0){
       
//         return;
//     }
//     No * novo=malloc(sizeof(No));
//     if(novo==NULL){
//         return;
//     }
//     pilha->tamanho_atual++;
//     novo->dado=dado;
//     novo->prox=pilha->topo;
//     pilha->topo=novo;
   
//     return;
// }
// int desempilhar(stack * pilha){
//     if(pilha == NULL){
//         return 0;//assuma que 0 é um valor impossivel em situações normais dos nós
//     }
//     if(pilha->tamanho_atual==0){
//         return 0;
//     }
//     int dado;
//     No * aux;
//     aux=pilha->topo;
//     dado=pilha->topo->dado;
//     pilha->topo=pilha->topo->prox;
//     pilha->tamanho_atual--;
//     free(aux);
//     return dado;
// }

// int main(){

//     stack * pilha=inicializar(100);
   
//     empilhar(pilha,1055);
     
//     printar(pilha);
//     empilhar(pilha,103330);
//     printar(pilha);
//     empilhar(pilha,1020);
//     printar(pilha);
//     empilhar(pilha,1100);
//     printar(pilha);
//     desempilhar(pilha);
//     desempilhar(pilha);
//     desempilhar(pilha);
//     desempilhar(pilha);
//     desempilhar(pilha);
//     desempilhar(pilha);
//     desempilhar(pilha);
//     desempilhar(pilha);

//     printar(pilha);
//     return 0;
// }

// fila com vetor
// typedef struct queue{
//     int tamanho_max;
//     int tamanho_atual;
//     int inicio;
//     int fim;
//     int *itens;
// }queue;
// queue * inicializar_fila(int tamanho_max){
//     if(tamanho_max<=0){
//         return NULL;
//     }
//     queue * fila=malloc(sizeof(queue));
//     if(fila==NULL){
//         return NULL;
//     }
//     fila->itens=malloc(sizeof(int)*tamanho_max);
//     if(fila->itens==NULL){
//         free(fila);
//         return NULL;
//     }
//     fila->inicio=0;
//     fila->fim=0;
//     fila->tamanho_atual=0;
//     fila->tamanho_max=tamanho_max;
//     return fila;
// }
// void enfileirar(queue * fila,int dado){
//     if(fila==NULL){
//         return;
//     }
//     if(fila->tamanho_atual==fila->tamanho_max){
//         return;
//     }
//     fila->itens[fila->fim]=dado;
//     fila->fim=(fila->fim+1)%fila->tamanho_max;
//     fila->tamanho_atual++;
//     return;

// }
// int desenfileirar(queue * fila){
//     if(fila==NULL){
//         return 0;
//     }
//     if(fila->tamanho_atual==0){
//         return 0;
//     }
//     int dado=fila->itens[fila->inicio];
//     fila->inicio=(fila->inicio+1)%fila->tamanho_max;
//     fila->tamanho_atual--;
//     return dado;
// }
// void printar(queue* fila){
//     if(fila==NULL){
//         return;
//     }
//     int i;
//     printf("\nInicio:");
//     for(i=0;i<fila->tamanho_atual;i++){
//         printf("\n%d",fila->itens[(fila->inicio+i)%fila->tamanho_max]);
//     }
//     return;
// }
// int main(){
//     queue * fila=inicializar_fila(3);
//     enfileirar(fila,101);
//     printar(fila);
//     enfileirar(fila,200);
//     printar(fila);
//     enfileirar(fila,1111);
//     printar(fila);
//     desenfileirar(fila);
//     printar(fila);
//     enfileirar(fila,10101);
//     printar(fila);
//     desenfileirar(fila);
//     printar(fila);
//     enfileirar(fila,50000);
//     printar(fila);
//     desenfileirar(fila);
//     printar(fila);
// }

// // fila com lista encadeada
// typedef struct No{
//     int dado;
//     struct No * prox;
// }No;
// typedef struct queue{
//     int tamanho_max;
//     int tamanho_atual;
//     No * inicio;
//     No * fim;
// }queue;

// queue * inicializar(int tamanho_max){
//     if(tamanho_max<=0){
//         return NULL;
//     }
//     queue * fila=malloc(sizeof(queue));
//     if(fila==NULL){
//         return NULL;
//     }
//     fila->inicio=NULL;
//     fila->fim=NULL;
//     fila->tamanho_atual=0;
//     fila->tamanho_max=tamanho_max;
//     return fila;
// }
// void enfileirar(queue * fila,int dado){
//     if(fila==NULL){
//         return;
//     }
//     if(fila->tamanho_max==fila->tamanho_atual){
//         return;
//     }
//     No * novo=malloc(sizeof(No));
//     if(novo==NULL){
//         return;
//     }
//     novo->dado=dado;
//     novo->prox=NULL;
//     if(fila->inicio==NULL){
//         fila->inicio=novo;
//         fila->fim=novo;
//         fila->tamanho_atual++;
//         return;
//     }else{
//         fila->fim->prox=novo;
//         fila->fim=novo;
//         fila->tamanho_atual++;
//         return;
//     }
// }
// void desenfileirar(queue * fila){
//     if(fila==NULL){
//         return;
//     }
//     if(fila->tamanho_atual<=0 || fila->inicio==NULL){
       
//         return;
//     }
//     No * aux;
//     aux=fila->inicio;
//     fila->inicio=fila->inicio->prox;
//     free(aux);
//     if(fila->inicio==NULL){
//         fila->fim=NULL;
//     }
//     fila->tamanho_atual--;
//     return;
// }
// void printar(queue *fila){
//     if(fila==NULL){
//         return;
//     }
//     if(fila->inicio==NULL){
        
//         return;
//     }
//     No * ptr=fila->inicio;
//     printf("\nTamanho %d e Inicio:",fila->tamanho_atual);
//     while(ptr!=NULL){
//         printf("\n%d",ptr->dado);
//         ptr=ptr->prox;
//     }
//     return;
// }
// int main(){
//     queue * fila=inicializar(100);
//     printar(fila);
//     enfileirar(fila,100);
//     printar(fila);
//     enfileirar(fila,200);
//     printar(fila);
//     enfileirar(fila,300);
//     printar(fila);
//     desenfileirar(fila);
//     printar(fila);
//     enfileirar(fila,400);
//     printar(fila);
//     desenfileirar(fila);
//     printar(fila);
//     desenfileirar(fila);
//     printar(fila);
//     desenfileirar(fila);
//     printar(fila);
//     desenfileirar(fila);
//     printar(fila);
//     desenfileirar(fila);
//     printar(fila);
//     desenfileirar(fila);
//     printar(fila);
// }

// // ring buffer lista
// typedef struct No{
//     int dado;
//     struct No * prox;
// }No;
// typedef struct ring{
//     No * inicio;
//     No * fim;
//     int tamanho_atual;
//     int tamanho_max;
// }ring;
// ring * init(int max){
//     if(max<=0){
//         return NULL;
//     }
//     ring * ring_buffer=malloc(sizeof(ring));
//     if(ring_buffer==NULL){
//         return NULL;
//     }
//     ring_buffer->tamanho_atual=0;
//     ring_buffer->tamanho_max=max;
//     ring_buffer->inicio=NULL;
//     ring_buffer->fim=NULL;
//     return ring_buffer;
// }
// void enfileirar(ring* ring_buffer,int dado){
//     if(ring_buffer==NULL){
//         return;
//     }
   
//     if(ring_buffer->tamanho_atual==0){
//         No* novo=malloc(sizeof(No));
//         if(novo==NULL){
//             return;
//         }
//         novo->dado=dado;
//         ring_buffer->inicio=novo;
//         ring_buffer->fim=novo;
//         novo->prox=novo;
//         ring_buffer->tamanho_atual++;
//         return;
//     }
//     if(ring_buffer->tamanho_atual<ring_buffer->tamanho_max){
//         No* novo=malloc(sizeof(No));
//         if(novo==NULL){
//             return;
//         }
//         novo->dado=dado;
//         ring_buffer->fim->prox=novo;
//         ring_buffer->fim=novo;
//         novo->prox=ring_buffer->inicio;

//         ring_buffer->tamanho_atual++;
//         return;
//     }
//     if(ring_buffer->tamanho_atual==ring_buffer->tamanho_max){
//         //dois jeitos
//         // 1-novo nó
//         // No* novo=malloc(sizeof(No));
//         // No * aux;
//         // if(novo==NULL){
//         //     return;
//         // }
//         // novo->dado=dado;
//         // aux=ring_buffer->inicio;
//         // ring_buffer->inicio=ring_buffer->inicio->prox;
//         // free(aux);
//         // ring_buffer->fim->prox=novo;
//         // novo->prox=ring_buffer->inicio;
//         // ring_buffer->fim=novo;
//         // return;
//         // 2-sobrescrevendo
//         ring_buffer->inicio->dado=dado;
//         ring_buffer->inicio=ring_buffer->inicio->prox;
//         ring_buffer->fim=ring_buffer->fim->prox;
//         return;
//     }
// }
// No* recente(ring * ring_buffer){
//     if(ring_buffer==NULL){
//         return NULL;
//     }
//     if(ring_buffer->fim==NULL){
//         return NULL;
//     }
//     return ring_buffer->fim;
// }
// No* antigo(ring * ring_buffer){
//     if(ring_buffer==NULL){
//         return NULL;
//     }
//     if(ring_buffer->inicio==NULL){
//         return NULL;
//     }
//     return ring_buffer->inicio;
// }
typedef struct No{
   int dado;
   struct No* prox;
}No;
typedef struct linkedlist{
    No * inicio;
    No * fim;
}linkedlist;
void inverter(linkedlist * L){
    if(L==NULL){
        return;
    }
    if(L->inicio==L->fim){
        return;
    }
    No * antes=L->inicio;
    No * atual=L->inicio->prox;
    No * depois=L->inicio->prox->prox;
    antes->prox=NULL;
    L->fim=antes;
    while(depois!=NULL){
        atual->prox=antes;
        antes=atual;
        atual=depois;
        depois=depois->prox;
    }
    atual->prox=antes;
    L->inicio=atual;
    return;
}