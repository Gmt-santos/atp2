#include <stdio.h>
#include <stdlib.h>
typedef struct{
    int dado;
    int prox;
}No;
typedef struct{
    No* inicio;
    No* fim;
    int tamanho;
}Lista;
Lista lista;
void inserir_no_inicio(Lista*,int); 
int lista_vazia(Lista *);
void excluir_valor(Lista*,int);
void excluir_no_inicio(Lista*);
void excluir_no_fim(Lista*);
void percorrer_lista(Lista*);
int buscar_valor(Lista*,int);
No* obter_elemento(Lista *,int);
void liberar_lista(Lista*);
int main(){
    int option,data;
    lista.inicio=NULL;
    lista.fim=NULL;
    lista.tamanho=0;
    while(1){
        printf("\n -------------------------------------------------\n");
        printf("Digite as opcoes:\n1-Inserir no inicio\n2-Excluir no inicio\n3-Inserir no fim\n4-Excluir no fim\n5-Percorrer a lista\n");
        printf("6-Verificar a existencia de dados na lista\n7-Buscar valor\n8-Buscar indice\n");
        printf("9-Tamanho da lista\n10-Excluir valor da lista\n");
        printf("\n -------------------------------------------------\n");
        scanf("%d",&option);
        if(option == 1){
            printf("Digite o dado:\n");
            scanf("%d",&data);
            inserir_no_inicio(&lista,data);
        }else if(option==2){
            excluir_no_inicio(&lista);
        }else if(option==3){
            printf("Digite o dado:\n");
            scanf("%d",&data);
            inserir_no_fim(&lista,data);
        }else if(option == 4){
            excluir_no_fim(&lista);
        }else if(option==5){
            percorrer_lista(&lista);

        }else if(option == 6){
            int verifier=lista_vazia(&lista);
            if(verifier == 1){
                printf("Lista vazia!\n");

            }else{
                printf("Lista nao vazia!\n");
            }

        }else if(option == 7){
            int result;
            printf("Digite o dado:\n");
            scanf("%d",&data);
            result=buscar_valor(&lista,data);
            if(result >=0){
                printf("O dado esta na posicao %d\n",result);

            }else{
                printf("O dado nao esta na lista!\n");
            }
        }else if(option == 8){
            No* aux;
            printf("Digite o indice do dado:\n");
            scanf("%d",&data);
            aux=obter_elemento(&lista,data);
            if(aux!=NULL){
                printf("Dado encontrado!\n Valor:%d\n",aux->dado);
            }else{
                printf("Dado nao encontrado nesse indice!\n");
            }
        }
        else if(option == 9){
            printf("%d\n",lista.tamanho);
        }
        else if(option == 10){
            printf("Digite o dado:\n");
            scanf("%d",&data);
            excluir_valor(&lista,data);
        }
        else if(option == 100){
            liberar_lista(&lista);
            printf("\nEncerrando...");
            break;
        }else{
            printf("Opcao invalida!\n");
        }

    }
}
void inserir_no_inicio(Lista* lista,int dado){
    No* novo_dado;
    novo_dado=malloc(sizeof(No));
    if(lista->inicio == NULL){
        lista->inicio=novo_dado;
        lista->fim=novo_dado;
        novo_dado->prox=NULL;
        novo_dado->dado=dado;
    }else{
        No* aux=lista->inicio;
        lista->inicio=novo_dado;
        novo_dado->prox=aux;
        novo_dado->dado=dado;
        
    }
    printf("Dado inserido!\n");
    lista->tamanho++;
    return;
}
void inserir_no_fim(Lista* lista,int dado){
    No* novo_dado;
    novo_dado=malloc(sizeof(No));
    if(lista->fim==NULL){
        lista->inicio=novo_dado;
        lista->fim=novo_dado;
        novo_dado->prox=NULL;
        novo_dado->dado=dado;
    }else{
        lista->fim->prox=novo_dado;
        novo_dado->dado=dado;
        novo_dado->prox=NULL;
        lista->fim=novo_dado;
    }
    printf("Dado inserido!\n");
    lista->tamanho++;
    return;
}
void percorrer_lista(Lista* lista){
    No* pointer=lista->inicio;
    if(pointer ==  NULL){
        printf("A lista nao possui dados!\n");
        return;
    }
    while(pointer!=NULL){
        printf("%d --> ",pointer->dado);
        pointer=pointer->prox;
        if(pointer == NULL){
            printf("NULL\n");
        }
    }
    return;
}
int buscar_valor(Lista* lista,int buscado){
    No* atual=lista->inicio;
    int index=0;
    if(atual== NULL){
        return -1;
    }
    while(atual!=NULL){
        if(atual->dado== buscado){
            return index;

        }else{
            atual=atual->prox;
            index++;
        }
    }
    return -1;
}
No* obter_elemento(Lista * lista,int index){
    if(index<0){
        return NULL;
    }
    else{
        No* atual=lista->inicio;
        int local_index=0;
        if(atual == NULL){
            return NULL;
        }
        while(atual!=NULL){
            if(local_index == index){
                return atual;
            }else{
                local_index++;
                atual=atual->prox;
            }
        }
        return NULL;
    }
    
}
void excluir_no_inicio(Lista* lista){
    No* excluindo_ptr;
    No* novo_inicio;
    if(lista->inicio == NULL){
        printf("A lista nao possui dados!\n");
        return;
    }else{
        novo_inicio=lista->inicio->prox;
        excluindo_ptr=lista->inicio;
        free(excluindo_ptr);
        lista->inicio=novo_inicio;
        if(lista->inicio==NULL){
            lista->fim=NULL;
        }
        printf("Dado Excluido!\n");
        lista->tamanho--;
        return;
    }
}

void excluir_no_fim(Lista* lista){
    No* anterior;
    anterior=lista->inicio;
    
    if(anterior == NULL){
        printf("A lista nao possui dados!\n");
        return;
    }
    if(anterior== lista->fim){
        free(anterior);
        lista->inicio=NULL;
        lista->fim=NULL;
        printf("Dado Excluido!\n");
        return;
    }
    while(anterior->prox!=lista->fim){
        anterior=anterior->prox;
    }
    free(lista->fim);
    lista->fim=anterior;
    anterior->prox=NULL;
    lista->tamanho--;
    printf("Dado Excluido!\n");
    return;
   
}
void excluir_valor(Lista* lista,int buscado){
    No * atual=lista->inicio;
    No* anterior=NULL;
    if(atual == NULL){
        printf("A lista nao possui dados!");
        return;
    }
    if(atual->dado== buscado){
        lista->inicio=atual->prox;
        free(atual);
        if(lista->inicio==NULL){
            lista->fim=NULL;
        }
        lista->tamanho--;
    }else{
        anterior=atual;
        atual=atual->prox;
        while(atual!=NULL){
            if(atual->dado == buscado){
                anterior->prox=atual->prox;
                if(lista->fim == atual){
                    lista->fim= anterior;
                
                }
                free(atual);
                atual=anterior->prox;
                lista->tamanho--;
                printf("Dado excluido!\n");
            }else{
                anterior=atual;
                atual=atual->prox;
            }
            
        }
        return;
    }
}

void liberar_lista(Lista * lista){
    No* atual=lista->inicio;
    No* aux;
    while(atual!=NULL){
        aux=atual;
        atual=atual->prox;
        free(aux);
    }
    return;
}

int lista_vazia(Lista* lista){
    if(lista->inicio==NULL && lista->fim==NULL){
        return 1;
    }else{
        return 0;
    }
}