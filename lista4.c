// Crie um programa que leia a partir de um arquivo um número inteiro e escreva no mesmo
// arquivo o número consecutivo, substituindo o número anterior.
// #include <stdio.h>
// int main(){
// 	FILE *f_read=fopen("arquivo.txt","r");
// 	FILE *f_printf;
// 	int n;
// 	if(f_read == NULL ){
// 		printf("Erro de abertura!");
// 		return 1;
// 	}
// 	while(fscanf(f_read,"%d",&n)==1){
		
// 	}
// 	n++;
// 	f_printf=fopen("arquivo.txt","w");
// 	fprintf(f_printf,"%d",n);
// 	fclose(f_read);
// 	fclose(f_printf);
// 	return 0;


// }

//Crie um programa que mostre o tamanho de um arquivo.
// #include <stdio.h>
// int main(){
// 	FILE *f=fopen("arquivo.txt","rb");
// 	if(f ==  NULL){
// 		printf("Falha na abertura do arquivo!");
// 		return 1;
// 	}
// 	fseek(f,0,SEEK_END);
	
// 	printf("%d bytes",ftell(f));
// 	fclose(f);
// 	return 0;
// }

//Crie um programa que conte quantas linhas um arquivo de texto possui.
// #include <stdio.h>
// int main(){
// 	FILE *f=fopen("arquivo.txt","rb");
// 	int lines=0;
// 	char caracter;
// 	while(fread(&caracter,1,1,f)==1){
// 		if(caracter == '\n'){
// 			lines++;
// 		}
		
// 	}
// 	printf("O numero de linhas sao: %d",lines+1);
// 	fclose(f);
// 	return 0;
// }


// Crie um programa que receba o nome de dois arquivos A e B, e que copie todo o conteúdo
// do arquivo A para o arquivo B, substituindo todo o conteúdo previamente em B.
// #include <stdio.h>
// #include <stdlib.h>
// int main(){
// 	FILE*A;
// 	FILE *B;
// 	int A_SIZE;
// 	char A_name[256],B_name[256];
// 	char *info_vec;
// 	printf("Digite o nome de A:\n");
// 	scanf(" %s",A_name);
// 	printf("Digite o nome de B:\n");
// 	scanf(" %s",B_name);
// 	A=fopen(A_name,"rb");
// 	B=fopen(B_name,"wb");
// 	if(A==NULL||B==NULL){
// 		printf("Falha em abrir os arquivos!!!");
// 		return 1;
// 	}
// 	fseek(A,0,SEEK_END);
// 	A_SIZE=ftell(A);
// 	rewind(A);
// 	info_vec=malloc(A_SIZE);
// 	if(info_vec == NULL){
// 		printf("Falha em alocar memoria!");
// 		return 1;
// 	}
// 	fread(info_vec,1,A_SIZE,A);
// 	fwrite(info_vec,1,A_SIZE,B);
// 	fclose(A);
// 	fclose(B);
// 	free(info_vec);
// 	return 0;
// }




//Crie um programa que receba o nome de três arquivos de texto A, B e C, e que concatene
//o conteúdo dos arquivos A e B, nessa ordem, gerando um arquivo C.
// #include <stdio.h>
// #include <stdlib.h>
// int main(){
// 	char A_name[256],B_name[256],C_name[256];
// 	int A_SIZE,B_SIZE,C_SIZE;
// 	char * concat_vec;
// 	FILE *A,*B,*C;
// 	printf("Digite o nome do arquivo A:\n");
// 	scanf(" %s",A_name);
// 	printf("Digite o nome do arquivo B:\n");
// 	scanf(" %s",B_name);
// 	printf("Digite o nome do arquivo C:\n");
// 	scanf(" %s",C_name);
// 	A=fopen(A_name,"rb");
// 	B=fopen(B_name,"rb");
// 	C=fopen(C_name,"wb");
// 	if(A ==  NULL || B ==  NULL || C ==  NULL){
// 		printf("Erro de abertura de arquivo!!!");
// 		return 1;
// 	}
// 	fseek(A,0,SEEK_END);
// 	fseek(B,0,SEEK_END);
// 	A_SIZE=ftell(A);
// 	B_SIZE=ftell(B);
// 	rewind(A);
// 	rewind(B);
// 	concat_vec=malloc(A_SIZE+B_SIZE);
// 	if(concat_vec ==  NULL){
// 		printf("Erro de alocacao!!!");
// 		return 1;
// 	}
// 	fread(concat_vec,1,A_SIZE,A);
//     fread(&concat_vec[A_SIZE],1,B_SIZE,B);
//     fwrite(concat_vec,1,A_SIZE+B_SIZE,C);
//     free(concat_vec);
//     fclose(A);
//     fclose(B);
//     fclose(C);
//     return 0;
// }

//Crie um programa que receba o nome de um arquivo A contendo uma sequência de
// números separados por linha, e armazene esses números em um vetor. É assegurado que
// o número de linhas neste arquivo é menor ou igual a 1000.
// #include <stdio.h>
// #include <stdlib.h>
// int main(){
//     char A_name[256];
//     int *vec=NULL,num_file_aux,i;
//     int vec_size=0;
//     FILE *f;
//     printf("Digite o nome do arquivo:\n");
//     scanf(" %s",A_name);
//     f=fopen(A_name,"r");
//     if(f ==  NULL){
//         printf("Nao foi possivel abrir esse arquivo!!!");
//         return 1;
//     }
    
//     while(fscanf(f,"%d",&num_file_aux)==1){
      
//         vec_size++;
//         vec=realloc((int*)vec,vec_size*sizeof(int));
//         if(vec ==  NULL){
//             printf("Erro de alocacao!!!");
//             return 1;
//         }
//         vec[vec_size-1]=num_file_aux;
       
//     }
   
   
//     for(i=0;i<vec_size;i++){
//         printf("%d\n",vec[i]);
//     }
//     fclose(f);
//     free(vec);
//     return 0;
// }

// Crie um programa que receba o nome de um arquivo A e que imprima na saída padrão da
// aplicação a quantidade de caracteres, a quantidade de palavras, e a quantidade de linhas
// presentes no arquivo A.
// #include <stdio.h>
// #include <stdlib.h>
// int main(){
//     int soma_char=0,soma_word=0,soma_line=0;
//     char arq_name[256],s_temp[2];
//     char temp;
//     FILE *f;
//     printf("Digite o nome do arquivo:\n");
//     scanf(" %s",arq_name);
//     f=fopen(arq_name,"r");
//     if(f  ==  NULL){
//         printf("Erro ao tentar encontrar esse arquivo!!!");
//         return 1;
//     }
//     while(fscanf(f,"%c",&temp)==1){
//         if(temp == '\n'){
//             soma_line++;
//         }
//         else 
//         if(((int)temp >= (int)'a'&& (int)temp<=(int)'z') || ((int)temp >= (int)'A'&& (int)temp<=(int)'Z')   )
//         {
//             soma_char++;
//         }
//     }
//     soma_line++;
//     // ultima linha nn tem \n
//     rewind(f);
    
//     while(fscanf(f,"%s",s_temp)==1){
//         soma_word++;
        
//     }
//     printf("Letras:%d\nPalavras:%d\nLinhas:%d",soma_char,soma_word,soma_line);
//     fclose(f);
//     return 0;
// }


// Crie um programa que receba o nome de um arquivo A, e leia deste arquivo uma sequência
// de números reais A = ⟨a1, a2, . . . , an⟩ separados por linha, e escreva no mesmo arquivo a
// sequência A

// ′ = ⟨f(a1), f(a2), . . . , f(an)⟩, também separados por linha, e substituindo os
// números anteriores presentes no arquivo. É assegurado que o número de linhas neste
// arquivo é menor ou igual a 1000.

//  A--> F(x)=x^2
//  B--> F(x)=sqrt(1+x^2)
//  C--> F(x)=sen(x)+cos(x)
// #include <stdio.h>
// #include <stdlib.h>
// #include <math.h>
// float function_A(float);
// float function_B(float);
// float function_C(float);
// int main(){
//     char arq_name[256];
//     float *vec,num_aux;
//     int vec_size=0,index=0;
//     FILE *f;
//     printf("Digite o nome de um arquivo:\n");
//     scanf(" %s",arq_name);
//     f=fopen(arq_name,"r");

//     if(f ==  NULL){
//         printf("Erro na abertura do arquivo!");
//         return 1;
//     }

//     while(fscanf(f,"%f",&num_aux)==1){
//         vec_size++;
//         //contando o tamanho do vetor
//     }

//     rewind(f);
//     vec=malloc(sizeof(float)*vec_size);

//     if(vec ==  NULL){
//         fclose(f);
//         printf("Erro de alocacao!!!");
//         return 1;

//     }
//     while(fscanf(f,"%f",&num_aux)==1){
//         //vec[index]=function_A(num_aux);
//         //vec[index]=function_B(num_aux);
//         vec[index]=function_C(num_aux);
//         index++;
//         // fazendo as funcoes
//     }
//     rewind(f);
//     fclose(f);
//     f=fopen(arq_name,"w");
//     if(f ==  NULL){
//         printf("Erro na abertura do arquivo!");
//         free(vec);
//         return 1;
//     }
//     for(index=0;index<vec_size;index++){
//         fprintf(f,"%f\n",vec[index]);
//         // colocando no proprio txt
//     }
//     fclose(f);
//     free(vec);
//     return 0;
// }
// float function_A(float x){
//     return x*x;
// }
// float function_B(float x){
//     return sqrt(1+x*x);
// }
// float function_C(float x){
//     return sin(x)+cos(x);
// }

// Crie um programa que receba o nome de um arquivo A e um número de uma linha L e
// remova-a do arquivo mantendo o conteúdo do arquivo anterior, porém agora sem a linha
// desejada. Se L < 1, então remova a primeira linha, e se L for maior que a quantidade de
// linhas do arquivo, então remova a última linha.

// Crie um programa que receba o nome de um arquivo A, um texto T com no máximo 255
// caracteres, e um número de uma linha L e adicione ao arquivo o texto T na linha L. Se
// L < 1, então adicione o texto T na primeira linha, e se L for maior que a quantidade de
// linhas do arquivo, então adicione o texto T após a última linha.

// 1.11. Crie um programa em C que realize as seguintes tarefas.
// a) Defina uma estrutura chamada dadosCliente que contenha os seguintes campos:
// • int numConta; - Número da conta do cliente.
// • char sobrenome[15]; - Sobrenome do cliente.
// • char primNome[10]; - Primeiro nome do cliente.
// • float saldo; - Saldo da conta do cliente.
// b) Abra um arquivo binário chamado credito.dat para leitura e escrita. Se o arquivo não
// existir, crie-o.
// c) Peça ao usuário para entrar com o número da conta (um valor entre 1 e 100).
// d) Verifique se o número da conta já existe no arquivo:
// • Se a conta existir, informe os dados da conta na tela e peça ao usuário para entrar com
// um número de conta diferente.
// • Se a conta não existir, peça ao usuário para entrar com o sobrenome, primeiro nome e
// saldo do cliente. Coloque na struct.
// e) Grave os dados no arquivo na posição correspondente ao número da conta. Use a função
// fseek para posicionar o ponteiro no local correto (lembre-se do comprimento de cada
// scruct) antes de gravar os dados com fwrite.
// #include <stdio.h>
// #include <stdlib.h>
// int main(){
//     typedef struct{
//         int numConta;
//         char sobrenome[15];
//         char primNome[10];
//         float saldo;
//     }dadosCliente;
//     int numero_conta,existe=0;
//     dadosCliente conta_buscada;
//     FILE *credito=fopen("creditos.dat","rb+");
//     size_t size_creditos;
//     if(credito == NULL){
//         credito=fopen("creditos.dat","wb");
//         fclose(credito);
//     }

//     credito=fopen("creditos.dat","rb+");

//     if(credito == NULL){
//         printf("Erro na abertura do arquivo!!!");
//         return 1;
//     }
//     fseek(credito,0,SEEK_END);
//     size_creditos=ftell(credito);
//     fseek(credito,0,SEEK_SET);
//     do{
//         printf("\nDigite um numero de conta:\n1001 para sair\n");
//         scanf("%d",&numero_conta);

//         if(numero_conta == 1001){
           
//             printf("Saindo...");
//             fclose(credito);

//         }else if(numero_conta>100 || numero_conta<0){
           
//             printf("Numero invalido!");
            
//         }else{

//             fseek(credito,numero_conta*sizeof(dadosCliente),SEEK_SET);

//             if(size_creditos<numero_conta*sizeof(dadosCliente)){

//                 printf("Essa conta nao existe aindaaaa!!!\n");
//                 printf("Digite o seu nome:\n");
//                 scanf(" %s",conta_buscada.primNome);
//                 printf("Digite o seu sobrenome:\n");
//                 scanf(" %s",conta_buscada.sobrenome);
//                 printf("Digite o seu saldo:\n");
//                 scanf("%f",&conta_buscada.saldo);
//                 conta_buscada.numConta=numero_conta;
//                 fwrite(&conta_buscada,sizeof(dadosCliente),1,credito);
//                 size_creditos=numero_conta*sizeof(dadosCliente);
//                 printf("Conta criada!");
//             }else{
//                 existe=fread(&conta_buscada,sizeof(dadosCliente),1,credito);
               
//                 if( existe== 1 && conta_buscada.numConta == numero_conta){
                    
//                     printf("Conta encontrada!\n");
//                     printf("Numero da conta: %d\n Nome: %s %s\nSaldo %.2f",
//                     conta_buscada.numConta,conta_buscada.primNome,conta_buscada.sobrenome,conta_buscada.saldo);

//                 }
//                 else{
//                     fseek(credito,-sizeof(dadosCliente),SEEK_CUR);
//                     printf("Essa conta nao existe ainda!!!\n");
//                     printf("Digite o seu nome:\n");
//                     scanf(" %s",conta_buscada.primNome);
//                     printf("Digite o seu sobrenome:\n");
//                     scanf(" %s",conta_buscada.sobrenome);
//                     printf("Digite o seu saldo:\n");
//                     scanf("%f",&conta_buscada.saldo);
//                     conta_buscada.numConta=numero_conta;
//                     fwrite(&conta_buscada,sizeof(dadosCliente),1,credito);
//                     printf("Conta criada!");

//                 }
//             }
            
            
//         }
        
//     }while(numero_conta!=1001);

//     return 0;
// }

//Crie um programa que receba o nome de um arquivo A contendo uma sequência de
// números inteiros separados por linha, e armazene esses números em um vetor. Além
// disso, realize os seguintes itens:
// a) Imprima a quantidade de números lidos.
// b) Imprima o maior número lido.
// c) Imprima o menor número lido.
// d) Imprima a média aritmética x dos números lidos, em que
// #include <stdio.h>
// #include <stdlib.h>
// int main(){
//     FILE *f;
//     char nome[256];
//     int lines=0,soma=0,aux,maior,menor,i=0;
//     int *vec;
//     printf("Digite o nome do arquivo:\n");
//     scanf(" %s",nome);
//     f=fopen(nome,"r");
//     if( f == NULL){
//         printf("Erro na abertura do arquivo!!!");
//         return 1;
//     }
//     while(fscanf(f,"%d",&aux) == 1){
//         if(lines==0){
//             maior=aux;
//             menor=aux;
//         }else if(maior<aux){
//             maior=aux;
//         }else if(menor>aux){
//             menor=aux;
//         }
//         lines++;
//         soma+=aux;
//     }
//     if(lines ==0){
//         fclose(f);
//         printf("Arquivo vazio!!!");
//         return 1;
//     }
//     vec=malloc(sizeof(int)*lines);
//     if(vec == NULL){
//         fclose(NULL);
//         printf("Erro de alocacao!!!");
//         return 1;
//     }
//     printf("Vetor:\n");
//     fseek(f,0,SEEK_SET);
//     for(i=0;i<lines;i++){
//         fscanf(f,"%d",&vec[i]);
//         printf("%d\t",vec[i]);
//     }
//     printf("\nMaior:%d\nMenor:%d\nQuantidade:%d\nMedia:%.2f\n",maior,menor,lines,(float)soma/lines);
//     fclose(f);
//     free(vec);
    
//     return 0;
    
// }


// Crie um programa que receba o nome de um arquivo de texto em que cada linha contém
// o nome de um aluno (sem espaços) e sua nota, separados por um espaço. O programa
// deve ler o arquivo com fscanf e imprimir na saída padrão da aplicação a média da turma
// e o aluno com a maior nota. Trate o caso em que o arquivo não pode ser aberto.
// #include <stdio.h>
// #include <string.h>
// #include <stdlib.h>
// int main(){
//     FILE *f;
//     char file_name[256],aux_nome[256],maior_nome[256];
//     int qtde_alunos=0;
//     float soma=0.0,aux_nota,maior_nota=-1;
//     printf("Digite o nome do arquivo:\n");
//     scanf(" %s",file_name);
//     f=fopen(file_name,"r");
//     if( f == NULL){
//         printf("O arquivo nao pode ser acessado!!!");
//         return 1;
//     }
//     while(fscanf(f,"%s %f",aux_nome,&aux_nota)==2){
//         if(qtde_alunos ==0 || maior_nota<aux_nota){
//             maior_nota=aux_nota;
//             strcpy(maior_nome,aux_nome);
//         }
//         soma+=aux_nota;
//         qtde_alunos++;
//     }
//     printf("A media foi de %f\nMelhor alunx foi %s com %.2f",soma/qtde_alunos,maior_nome,maior_nota);
//     fclose(f);

//     return 0;
// }

// Crie um programa que receba o nome de dois arquivos de texto A e B, e que grave em
// B o conteúdo de A com todas as letras convertidas para maiúsculas. A leitura e a escrita
// devem ser feitas caractere a caractere, com as funções fgetc e fputc.
// Dica: Consulte a função toupper da biblioteca ctype.h.
// #include <ctype.h>
// #include <stdio.h>
// int main(){
//     FILE *a,*b;
//     int c;
//     char a_name[256],b_name[256];
//     printf("Digite o nome do primeiro arquivo:\n");
//     scanf(" %s",a_name);
//     printf("Digite o nome do segundo arquivo:\n");
//     scanf(" %s",b_name);
//     a=fopen(a_name,"r");
//     b=fopen(b_name,"w");
//     if(a==NULL && b!=NULL){
//         printf("Erro de abertura de arquivo");
//         fclose(b);
//         return 1;
//     }
//     if(a!=NULL && b==NULL){
//         printf("Erro de abertura de arquivo");
//         fclose(a);
//         return 1;
//     }
//     if(a==NULL && b==NULL){
//         printf("Erro de abertura de arquivo");
//         return 1;
//     }
//     while((c=fgetc(a))!=EOF){
//         c=toupper(c);
//         fputc(c,b);

//     }
//     fclose(a);
//     fclose(b);
//     return 0;
// }

// Considere a estrutura a seguir. Crie um programa que leia n produtos da entrada padrão
// e os grave em um arquivo binário produtos.bin utilizando fwrite. Em seguida, o pro-
// grama deve fechar o arquivo, reabri-lo para leitura e, utilizando fread, imprimir apenas
// os produtos cujo preço seja maior que um valor p informado pelo usuário.
// typedef struct {
// int codigo;
// char nome[50];
// float preco;
// } Produto;

// #include <stdio.h>
// int main(){
//     int nprodutos,i;
//     float preco_user;
//     typedef struct {
//         int codigo;
//         char nome[50];
//         float preco;
//     } Produto;
//     Produto produto;
//     FILE *f=fopen("produtos.bin","wb");
//     if( f  == NULL){
//         printf("Erro de abertura de arquivo!!!");
//         return 1;
//     }
//     printf("Quantos produtos quer registrar???\n");
//     scanf("%d",&nprodutos);
//     for(i=0;i<nprodutos;i++){
//         printf("Digite o codigo do produto:\n");
//         scanf("%d",&produto.codigo);
//         printf("Digite o nome do produto:\n");
//         scanf(" %s",produto.nome);
//         printf("Digite o preco do produto:\n");
//         scanf("%f",&produto.preco);
//         fwrite(&produto,sizeof(Produto),1,f);
//     }
//     fclose(f);
//     printf("Digite agora,um preco:\n");
//     scanf("%f",&preco_user);
//     f=fopen("produtos.bin","rb");
//     if( f  == NULL){
//         printf("Erro de abertura de arquivo!!!");
//         return 1;
//     }
//     for(i=0;i<nprodutos;i++){
//         fread(&produto,sizeof(Produto),1,f);
//         if(produto.preco>preco_user){
//             printf("Produto\nCodigo:%d\nNome: %s\nPreco:%.2f\n",produto.codigo,produto.nome,produto.preco);
//         }
//     }
//     fclose(f);
//     return 0;
// }

// Utilizando o arquivo produtos.bin gerado no exercício anterior, crie um programa que
// receba um número inteiro k ≥ 1 e imprima o k-ésimo produto armazenado, acessando-o
// diretamente por meio da função fseek, isto é, sem ler os k − 1 registros anteriores. Caso
// k seja maior que o número de registros do arquivo, imprima uma mensagem de erro.
// Dica: O número de registros pode ser obtido com fseek(f, 0, SEEK_END) e ftell(f) /
// sizeof(Produto).
// #include <stdio.h>
// int main(){
//     typedef struct {
//         int codigo;
//         char nome[50];
//         float preco;
//     } Produto;
//     size_t produtos_bin_size;
//     Produto produto;
//     int posicao;
//     FILE *f=fopen("produtos.bin","rb");
//     if(f == NULL){
//         printf("Erro na abertura do arquivo!!");
//         return 1;
//     }
//     fseek(f,0,SEEK_END);
//     produtos_bin_size=(ftell(f)/sizeof(Produto));
//     if(produtos_bin_size==0){
//         printf("Arquivo vazio!!!");
//         return 0;

//     }
//     printf("Digite a posicao do produto:\n");
//     scanf("%d",&posicao);
    
//     if(posicao<1 || posicao>produtos_bin_size){
//         printf("Nao ha registro nessa posicao!!!");
//         return 0;
//     }
//     fseek(f,(posicao-1)*sizeof(Produto),SEEK_SET);
//     fread(&produto,sizeof(Produto),1,f);
//     printf("Produto:\nCodigo: %d\nNome: %s\nPreco: %.2f\n",produto.codigo,produto.nome,produto.preco);
//     fclose(f);
//     return 0;
//}

// Crie um programa que receba o nome de dois arquivos de texto A e B e os compare car-
// actere a caractere, utilizando fgetc. Caso os arquivos sejam idênticos, imprima Arquivos
// identicos. Caso contrário, imprima o número da primeira linha em que eles diferem.
// Dica: Mantenha um contador de linhas que é incrementado sempre que o caractere ’\n’
// for lido. Considere que um arquivo terminar antes do outro também caracteriza uma
// diferença.
// #include <stdio.h>
// int main(){
//     FILE *a,*b;
//     int contador_de_linha=0;
//     int c_a,c_b;
//     char name_a[256],name_b[256];
//     printf("Digite o nome do arquivo A:\n");
//     scanf(" %s",name_a);
//     printf("Digite o nome do arquivo B:\n");
//     scanf(" %s",name_b);
//     a=fopen(name_a,"r");
//     b=fopen(name_b,"r");
//     if(a==NULL && b!=NULL){
//         printf("Erro de abertura de arquivo");
//         fclose(b);
//         return 1;
//     }
//     if(a!=NULL && b==NULL){
//         printf("Erro de abertura de arquivo");
//         fclose(a);
//         return 1;
//     }
//     if(a==NULL && b==NULL){
//         printf("Erro de abertura de arquivo");
//         return 1;
//     }
//     while(1){
//         c_a=fgetc(a);
//         c_b=fgetc(b);
//         if((c_a!=c_b)){
//             printf("Programas mudam na linha %d",contador_de_linha);
//             fclose(a);
//             fclose(b);
//             return 0;
//         }else if(c_a== EOF){

//             printf("Arquivos identicos!");
//             fclose(a);
//             fclose(b);
//             return 0;



//         }else if(c_a == '\n'){
//             contador_de_linha++;
//         }
        
//     }
// }