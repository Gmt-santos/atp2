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
// #include <stdio.h>
// #include <stdlib.h>
// int calcular_comb(int ,int ,int);
// int fat(int n);
// int main(){
//     int total;
//     printf("Digite o numero de degraus:\n");
//     scanf("%d",&total);
   
//     printf("O total de maneiras eh de %d",calcular_comb(0,total,total));
//     return 0;
// }
//     int calcular_comb(int dois,int uns,int total_atual){
//         int cont_num,cont_den_1,cont_den_2;
        
        
    
//         if(uns<0){
//             // nn cabe mais nenhum dois nos espacos!!!!!
//             //Ex: 8 degraus com 4 passos de 2 e 0 passos de 1
//             // Na proxima chamada,a funcao vai,obrigatoriamente,sempre receber passos de 1 negativo,
//             ///pq nn cabe mais uns nem dois!!!
//             // RETORRRNAAAARRR
//             return 0;
//         }
//         else{
        
//             cont_num=fat(total_atual);
//             cont_den_1=fat(uns);
//             cont_den_2=fat(dois);
//             dois++;//aumenta o dois
//             uns-=2;// diminui os uns pra manter a conta
//             total_atual--;//diminui o 'espaço' da permutacao
//                      formula da permutacao com repeticao!!!
//             return (cont_num/(cont_den_1*cont_den_2))+calcular_comb(dois,uns,total_atual);
            
//         }
//     }
//     int fat(int n){
//         if(n <=1){
//             return 1;
//         }else{
//             int aux=n-1;
//             return n*fat(aux);
//         }
//     }



// Considere que você tenha em mãos uma combinação de letras ou números que deseja
// explorar. Agora, imagine que seu objetivo é descobrir todas as formas possíveis de reor-
// ganizar essa sequência, considerando que alguns dos caracteres possam se repetir. Dessa
// forma, cada nova disposição dos caracteres é uma variação única, e você deve garantir que
// todas essas variações sejam geradas e exibidas. Sua missão, portanto, é criar uma função
// capaz de receber uma cadeia de caracteres como entrada e, em seguia, imprimir na saída
// padrão todas as permutações possíveis, incluindo aquelas que surgem devido à repetição
// de variantes. Cada permutação deve ser listada, revelando todas as diferentes maneiras de
// reorganizar a sequência original

// Feito com ajuda do GEMINI!!!
// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
// void permuta(char *,int ,int);
// int main(){
//     char palavra[256]="arara";
//     permuta(palavra,0,strlen(palavra)-1);
//     return 0;
// }
// void permuta(char *str,int esquerda,int direita){
//     if(esquerda == direita){
//         printf("%s\n",str);
//         return;
//     }else{
//         int i;
//         char aux;
//         for(i=esquerda;i<=direita;i++){
//             aux=str[esquerda];
//             str[esquerda]=str[i];
//             str[i]=aux;
//             permuta(str,esquerda+1,direita);
//             aux=str[i];
//             str[i]=str[esquerda];
//             str[esquerda]=aux;
//         }
//         return;
//     }
// }

// A multiplicação camponesa, também referida como multiplicação russa ou egípcia, é um
// método arcaico que se fundamenta em operações elementares de adição e duplicação. Este
// procedimento, historicamente associado a diversas civilizações antigas, como a egípcia,
// a russa e a babilônica, demonstra a engenhosidade dessas culturas ao realizar multipli-
// cações de números arbitrários, mesmo na ausência de técnicas aritméticas sofisticadas para
// a época. Dessa forma, a essência desse método reside na decomposição dos números en-
// volvidos, utilizando unicamente operações de soma, duplicação e redução pela metade.
// #include <stdio.h>
// int mult_camp(int x,int y);
// int main(){
//     int x,y;
//     printf("Digite seu x:\n");
//     scanf("%d",&x);
//     printf("Digite seu y:\n");
//     scanf("%d",&y);
//     printf("Mult.Camponesa=%d\nMult.normal=%d",mult_camp(x,y),x*y);
//     return 0;
// }
// int mult_camp(int x,int y){
    
//     if(x == 1){
//         return y;

//     }
//     else{
//         if(x%2==1){
//             return y+mult_camp(x/2,y*2);
//         }
//         else{
//             return mult_camp(x/2,y*2);
//         }
//     }
// }


// Pense que você está trabalhando em um projeto de programação e se depara com um prob-
// lema interessante: gerar todas as combinações possíveis de parênteses, em que cada parên-
// tese aberto é devidamente fechado. Esse problema, embora pareça simples à primeira vista,
// requer uma abordagem cuidadosa para garantir que todas as combinações geradas sejam
// válidas, ou seja, que não existam parênteses abertos sem seu correspondente fechamento.
// A tarefa é implementar uma função recursiva que receba um número natural n ≥ 1, repre-
// sentando o número de pares de parênteses, e que produza todas as combinações possíveis
// desses pares. O problema está em assegurar que cada combinação gerada seja estrutu-
// ralmente correta, com todos os parêntese aninhados e fechados na ordem correta. Este
// tipo de problema é comum em áreas que envolvem análise de expressões matemáticas ou
// linguagem de programação, em que a correta abertura e fechamento de parênteses é fun-
// damental.
// #include <stdio.h>
// #include <stdlib.h>
// void permuta_parenteses(int first_rec,char *str,int n,int esquerda,int direita);
// int trocar_ou_nao(char*str,int esquerda,int direita);
// int main(){
//     permuta_parenteses(1,"",3,0,3*2-1);
//     return 0;
// }
// int trocar_ou_nao(char*str,int esquerda,int direita){
//     int i;
//     for(i=esquerda;i<direita;i++){
//         if(str[i] == str[direita]){
//             return 0;
//         }
//     }
//     return 1;
// }
// void permuta_parenteses(int first_rec,char *str,int n,int esquerda,int direita){
//     int i;
//     if(first_rec == 1){
//         char *new_str=malloc(n*2);
//         for(i=0;i<n;i++){
//             new_str[2*i]='(';
//             new_str[2*i+1]=')';
//         }
//         new_str[2*n]='\0';
//         str=new_str;
//     }
//     if(esquerda == direita){
//         int balanca=0;
//         for(i=0;i<=direita;i++){
//             if(str[i] == '('){
//                 balanca++;
//             }else{
//                 balanca--;
//             }
//             if(balanca<0){
//                 break;
//             }
//         }
//         if(balanca==0){
//             printf("%s\n",str);
//             return;
//         }else{
//             return;
//         }
//     }else{
//         char aux;
//         for(i=esquerda;i<=direita;i++){
            
//             if(trocar_ou_nao(str,esquerda,i)){
                
//                 aux=str[esquerda];
//                 str[esquerda]=str[i];
//                 str[i]=aux;
//                 permuta_parenteses(0,str,n,esquerda+1,direita);
//                 aux=str[i];
//                 str[i]=str[esquerda];
//                 str[esquerda]=aux;
//             }
            
            
            
//         }
//         return ;
//     }
    
// }


// Em uma antiga biblioteca, escondida entre livros empoeirados e manuscritos esquecidos,
// havia um enigma que desafiava estudiosos há gerações. Conta-se que, em tempos imemo-
// riais, um sábio matemático registrou uma longa sequência de números em um pergam-
// inho. Esta sequência, aparentemente caótica e sem sentido, guardava um segredo que
// ninguém conseguia decifrar. O desafio deixado pelo matemático era simples de enunciar,
// mas incrivelmente difícil de resolver para a época: encontrar, dentro daquela sequência,
// a subsequência mais longa em que os números apareciam em ordem crescente. Muitos
// estudiosos passaram anos tentando decifrar o enigma, mas poucos conseguiram perceber
// que, por trás da desordem, havia uma harmonia sutil. A missão era revelar o tamanho
// dessa linha oculta de números, que, apesar de dispersos, formavam uma progressão cres-
// cente quando dispostos corretamente. Aqueles que conseguiam desvendar o padrão es-
// condido na sequência eram recompensados com um profundo entendimento das leis da
// matemática e da própria natureza do caos e da ordem. O pergaminho, portanto, não era
// apenas um enigma, mas também uma lição sobre a busca pela ordem dentro do caos, e
// sobre como a paciência e a perseverança podem relevar a beleza escondida em meio à
// aparente desordem. Assim, sua missão, portanto, é utilizar as ferramentas de recursivi-
// dade para encontrar o tamanho dessa subsequência mais longa dentro desse pergaminho.
// A entrada é composta pela quantidade n de números, seguida dos n números. Exemplo:
// para a entrada [6, 2, 5, 1, 7, 4, 8, 3], a função encontra que a subsequência crescente mais
// longa é [2, 5, 7, 8], com 4 elementos, portanto, a saída é 4.


// Atenção: O código fornece uma solução boa mas nao perfeita,há casos q ela nn funciona,trabalhar nela dps!!!
// #include <stdio.h>
// #include <stdlib.h>
// int calcula_size_substring(int head,int *numbers,int numbers_size,int init,int actual);
// int main(){
//     int *numbers,numbers_size,i;
//     printf("Digite o tamanho do vetor:\n");
//     scanf("%d",&numbers_size);
//     numbers=malloc(sizeof(int)*numbers_size);
//     for(i=0;i<numbers_size;i++){
//         printf("Digite o numero %d do vetor:\n",i);
//         scanf("%d",&numbers[i]);
//     }
//     printf("A maior sequencia crescente eh de:%d",calcula_size_substring(1,numbers,numbers_size,0,0));
//     free(numbers);
//     return 0;
// }
// int calcula_size_substring(int head,int *numbers,int numbers_size,int init,int actual_ptr){
//     if(head == 1){
//         int i,biggest=-1,actual_size_substring;
//         for(i=0;i<numbers_size;i++){
//             actual_size_substring=calcula_size_substring(0,numbers,numbers_size,i,i);
           
//             if(actual_size_substring>biggest){
                
//                 biggest=actual_size_substring;
//             }
//         }
//         return biggest;
//     }else{
        
//         if(init==numbers_size){
//             return 1;
//         }else if(numbers[init]>numbers[actual_ptr]){
            
//             actual_ptr=init;
//             init++;
           
//             return 1+calcula_size_substring(0,numbers,numbers_size,init,actual_ptr);
//         }else{
           
//             init++;
//             return calcula_size_substring(0,numbers,numbers_size,init,actual_ptr);
//         }
//     }
// }

// Implemente uma função recursiva int soma_digitos(int n) que receba um número in-
// teiro não negativo n e retorne a soma de seus dígitos. Não utilize laços de repetição.
// #include <stdio.h>
// int soma_digitos(int n);
// int main(){
//     int n;
//     printf("Digite um numero:\n");
//     scanf("%d",&n);
//     printf("A soma dos digitos eh de %d",soma_digitos(n));
//     return 0;
// }
// int soma_digitos(int n){
//     if(n == 0){
//         return 0;
//     }else{
//         return n%10+soma_digitos(n/10);
//     }
    

// Implemente uma função recursiva int potencia(int b, int e) que calcule b
// e, com e ≥
// 0, utilizando a estratégia de exponenciação rápida:
// }
// #include <stdio.h>
// int potencia(int b, int e);
// int main(){
//     int b,e;
//     printf("Digite a base:\n");
//     scanf("%d",&b);
//     printf("Digite agora o expoente:\n");
//     scanf("%d",&e);
//     if(e ==0 && b ==0){
//         printf("Essa potencia eh indeterminada ou,por convencao,vale 1");
//         return 0;
//     }
//     printf("A potencia de %d elevado a %d eh de %d",b,e,potencia(b,e));
//     return 0;
// }
// int potencia(int b,int e){
//     if(e==0){
//         return 1;
//     }
//     if(e%2 == 0){
//         int pot;
//         pot=potencia(b,e/2);
//         return pot * pot;
//     }else{
//         return b*potencia(b,e-1);
//     }
// }

// Implemente uma função recursiva int conta(const int v[], int n, int x) que re-
// torne quantas vezes o valor x aparece no vetor v de tamanho n. Escreva um programa
// que leia n, os n elementos do vetor e o valor x, e imprima o resultado.
// #include <stdio.h>
// #include <stdlib.h>
// int conta(const int v[], int n, int x);
// int main(){
//     int *v,n,x,i;
//     printf("Digite o tamanho do vetor:\n");
//     scanf("%d",&n);
//     v=malloc(n*sizeof(int));
//     if(v == NULL){
//         printf("Erro de alocacao!");
//         return 1;
//     }
//     printf("Digite um valor de X:\n");
//     scanf("%d",&x);
//     for(i=0;i<n;i++){
//         printf("Digite o valor %d do vetor:\n",i);
//         scanf("%d",&v[i]);
//     }
//     printf("O valor de X (%d) aparece %d vezes no vetor!",x,conta(v,n,x));
//     free(v);
//     return 0;
// }


// int conta(const int v[], int n, int x){
//     n--;
//     if(n<0){
//         return 0;

//     }
//     if(v[n] == x){
//         return 1+conta(v,n,x);
//     }else{
//         return conta(v,n,x);
//     }
// }

// O problema da Torre de Hanói consiste em três hastes, denominadas A, B e C, e n dis-
// cos de tamanhos distintos, inicialmente empilhados na haste A em ordem decrescente de
// tamanho (o maior na base). O objetivo é mover todos os discos para a haste C, movendo
// um disco por vez e nunca colocando um disco maior sobre um menor. Implemente uma
// função recursiva void hanoi(int n, char origem, char destino, char auxiliar) que
// imprima a sequência de movimentos e, ao final, o número total de movimentos realiza-
// dos.

// Considere uma grade com m linhas e n colunas. Partindo do canto superior esquerdo,
// deseja-se chegar ao canto inferior direito movendo-se apenas para a direita ou para baixo.
// Implemente uma função recursiva int caminhos(int m, int n) que retorne a quanti-
// dade de caminhos distintos possíveis.
// Dica: Observe que, em uma grade com uma única linha ou uma única coluna, existe
// apenas um caminho.

//passar m e n com os valores dos indices da ultima linha e coluna
// #include <stdio.h>
// int caminhos(int m,int n);
// int main(){
//     printf("%d",caminhos(3-1,3-1));
//     return 0;
// }

// //passar m e n com os valores dos indices da ultima linha e coluna
// int caminhos(int m,int n){
//     if(m==0 || n==0){
//         return 1;
//     }
//     else{
//         // esse caminhos vai se expandindo como uma teia d aranha,quando ele chegar na linha
//         // ou na coluna de 0,0,ele vai falar "opa,achei um caminho" e retornar 1
//         // e assim vai recursivamente!
//         // ps:fzr por fatorial é bem mais fácil!
//         return 0+caminhos(m-1,n)+caminhos(m,n-1);
//     }
// }