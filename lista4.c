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
#include <stdio.h>
int main(){
    int lines=0;
    FILE *f;
    char arq_name[256];
    // printf("Digite um nome:\n");
    // scanf(" %s",arq_name);
    f=fopen(arq_name,"r+");
    for()
    return 0;


    // NAO ESTA FEITO!!!!
}