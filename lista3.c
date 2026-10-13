// Faça uma função recursiva que receba uma matriz dinâmica e calcula o somatório dos
// elementos na diagonal secundária.
// #include <stdio.h>
// #include <stdlib.h>
// int calcula_dig_sec(int **,int,int);
// int main(){
//     int soma,l,c;
//     int **matriz;
//     printf("Digite as linhas da matriz:\n");
//     scanf("%d",&l);
//     printf("Digite as colunas da matriz:\n");
//     scanf("%d",&c);
//     if(l!=c){
//         printf("A matriz n eh quadrada,entao nao tem diagonais!");
//         return 0;
//     }else if(l == 0){
//         printf("Matriz de dimensoes zero por zero nao possuem diagonais secundarias!");
//         return 0;
//     }
//     matriz=malloc(sizeof(int*)*l);
//     for(int i=0;i<c;i++){
//         matriz[i]=malloc(sizeof(int)*c);
//     }
//     for(int i=0;i<l;i++){
//         for(int j=0;j<c;j++){
//             printf("Digite o numero da posicao %d %d:\n",i,j);
//             scanf("%d",&matriz[i][j]);
//         }
//     }
//     soma=calcula_dig_sec(matriz,l-1,c-1);
//     printf("A soma eh de %d",soma);
//     for(int i=0;i<c;i++){
//         free(matriz[i]);
    
//     }
//     free(matriz);
//     return 0;
// }
// int calcula_dig_sec(int **matriz,int l,int c){
//     if(l==0){
//         return matriz[l][c-l];
//     }else{
//         return matriz[l][c-l]+calcula_dig_sec(matriz,l-1,c);
//     }
// }

// Implemente uma função recursiva que receba uma matriz dinâmica e calcula a soma de
// todos os elementos na matriz.
// #include <stdio.h>
// #include <stdlib.h>
// int soma_mat(int **,const int*,const int*,int,int);
// int main(){
//     int soma,l,c;
//     int **matriz;
//     printf("Digite as linhas da matriz:\n");
//     scanf("%d",&l);
//     printf("Digite as colunas da matriz:\n");
//     scanf("%d",&c);
//     if(l == 0){
//         printf("Matriz de dimensoes zero por zero nao possuem elementos pra somar");
//         return 0;
//     }
//     matriz=malloc(sizeof(int*)*l);
//     for(int i=0;i<c;i++){
//         matriz[i]=malloc(sizeof(int)*c);
//     }
//     for(int i=0;i<l;i++){
//         for(int j=0;j<c;j++){
//             printf("Digite o numero da posicao %d %d:\n",i,j);
//             scanf("%d",&matriz[i][j]);
//         }
//     }
//     soma=soma_mat(matriz,&l,&c,0,0);
//     printf("A soma eh de %d",soma);
//     for(int i=0;i<c;i++){
//         free(matriz[i]);
//     }
//     free(matriz);
//     return 0;
// }
// int soma_mat(int ** matriz,const int *row_origin,const int *col_origin,int row,int col){
//     if(row == *row_origin-1 && col == *col_origin-1){
//         return matriz[row][col];
//     }
//     else if(col == *col_origin-1){
//         return matriz[row][col]+soma_mat(matriz,row_origin,col_origin,row+1,0);
//     }else{
//         return matriz[row][col]+soma_mat(matriz,row_origin,col_origin,row,col+1);
//     }
    
// }


// Implemente uma função recursiva em C que receba um vetor de inteiros, seu tamanho
// n e um número escalar, e retorne um novo vetor, alocado dinamicamente, contendo os
// elementos do vetor original somado pelo elemento na posição anterior do novo vetor e
// multiplicados pelo escalar: v_novo[i] = (v[i] + v_novo[i − 1]) ∗ escalar. Note que o primeiro
// elemento do novo vetor v_novo[0] = v[0]. A função deve usar recursão para percorrer o
// vetor e preencher o novo vetor resultante.
// #include <stdio.h>
// #include <stdlib.h>
// int * novo_vec(int *,int,int);
// void *recursive(int *,int *,int,int,int );
// int main(){
// 	int esc,size,*vec,*vec_mod,i;
// 	printf("Digite o tamanho do vetor:\n");
// 	scanf("%d",&size);
// 	printf("Digite o escalar:\n");
// 	scanf("%d",&esc);
	
// 	if(size==0){
// 		printf("Vetor de tamanho inexistente!");
// 		return 0;
// 	}
	
// 	vec=malloc(sizeof(int)*size);
	
// 	for(i=0;i<size;i++){
	
// 		printf("Digite o lugar %d do vetor:\n",i);
// 		scanf("%d",&vec[i]);
	
// 	}
// 	vec_mod=novo_vec(vec,size,esc);
// 	printf("Novo vetor:\n");
// 	for(i=0;i<size;i++){
// 		printf("%d\t",vec_mod[i]);
// 	}
// 	return 0;
// }
// int * novo_vec(int *vec,int size,int esc){
// 	int * new_vec=malloc(sizeof(int)*size);
// 	new_vec[0]=vec[0];
// 	recursive(new_vec,vec,size,esc,1);
	
// 	return new_vec;
// }
// void *recursive(int * new_vec,int * vec,int size,int esc,int index){
// 	if(index==size){
// 		return;
// 	}else{
// 		new_vec[index]=(vec[index]+new_vec[index-1])*esc;
// 		index++;
// 		recursive(new_vec,vec,size,esc,index);
// 		return;
// 	}
// }

// Implemente uma função recursiva em C que verifique se uma string é um palíndromo.
// Uma string é um palíndromo se ela é igual quando lida de trás para frente.
// #include <stdio.h>
// #include <stdlib.h>
// int ver_palindromo(char *,int,const int);
// int main(){
// 	int size_string;
// 	char *s;
// 	printf("Digite o tamanho maximo da palavra:\n");
// 	scanf("%d",&size_string);
// 	s=malloc(size_string+1);
// 	printf("Digite a palavra:\n");
// 	scanf("%s",s);
// 	size_string=0;
// 	while(s[size_string]!='\0'){
// 		size_string++;
// 	}
//     if(size_string == 0){
//         printf("Voce nao digitou nenhuma palavra!");
//         return 0;
//     }else{
//         size_string--;
//         //Ignorar o \0
//     }
// 	printf("%d",ver_palindromo(s,0,size_string));
// 	return 0;
// }
// int ver_palindromo(char * s,int index,const int size){
// 	if(index >= size-index){
// 		return 1;
// 	}else if(s[index]!=s[size-index]){
// 		return 0;
// 	}else{
// 		index++;
// 		return ver_palindromo(s,index,size);
// 	}
// }
// O logaritmo na base 2, ou logaritmo binário, ocupa um lugar de extrema importância no
// campo da matemática, particularmente nas disciplinas de ciência da computação, teoria
// da informação e análise de algoritmos. A construção deste conceito remonta aos primeiros
// desenvolvimentos da álgebra logarítmica, porém, sua proeminência foi verdadeiramente
// afirmada com o surgimento das tecnologias digitais e computacionais, em que a base 2
// tornou-se central devido à natureza binária dos sistemas digitais. Nesse sentido, construa
// uma função recursiva que recebe um número natural n ≥ 1 e retorna o valor ⌊log2
// n⌋.
// #include <stdio.h>
// int log_bin(int,int*);
// int main(){
// 	int number,aprox=0;
// 	int log;
// 	printf("Digite um numero:\n");
// 	scanf("%d",&number);
// 	log=log_bin(number,&aprox);
// 	if(aprox ==  1){
// 		printf("O log de %d esta entre %d e %d",number,log,log+1);
// 	}else{
// 		printf("O log de %d eh de %d",number,log);
// 	}
	
// 	return 0;
// }
// int log_bin(int number,int*aprox){
// 	if(number == 1){
// 		return 0;
// 	}
// 	else{
//         if(number%2!=0){
//             *aprox=1;
//         }
// 		number=number/2;
// 		return 1+ log_bin(number,aprox);
// 	}
// }

// Imagine que você está diante de uma longa escadaria, e seu objetivo é chegar ao topo.
// Cada degrau representa um passo em direção ao seu destino, e você tem duas operações
// a cada movimento: pode escolher subir um degrau de cada vez, ou, se estiver com mais
// energia, pode avançar dois degraus de uma vez só. À medida que você começa a subir,
// uma pergunta surge em sua mente: quantas maneiras existem para alcançar o topo dessa
// escada, combinando esses dois tipos de passos? Isso posto, dada que essa escadaria possui
// n degraus, faça uma função recursiva que calcule de quantas maneiras distintas você pode
// completar essa jornada até o topo, utilizando combinações de passos simples e duplos.
// Dica: esse é um problema que envolve combinatória.
#include <stdio.h>
#include <stdlib.h>
int calcular_comb(int dois,int uns,int total);
int main(){
    int total;
    printf("Digite o numero de degraus:\n");
    scanf("%d",&total);
    calcular_comb(0,total,total);
    return 0;
}
int calcular_comb(int dois,int uns,int total){
    int cont_num,cont_den_1,cont_den_2;
    int i;
    if((dois+1)*2>total){
        return 0;
    }else{
        //calcular fatorial das formuls
        
    }
}