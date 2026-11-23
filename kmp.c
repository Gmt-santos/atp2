#include <stdio.h>
#include <stdlib.h>
int * calc_lps(int size,char * str){
    int * lps=malloc(sizeof(int)*size);
    if(lps==NULL){
        return NULL;
    }
    int len=0,i=1;
    lps[0]=0;
    while(i<size){
        if(str[i]==str[len]){
            len=len+1;
            lps[i]=len;
            i=i+1;
        }else{
            if(len!=0){
                len=lps[len-1];
            }else{
                lps[i]=0;
                i=i+1;
            }
        }
    }
    return lps;

}
int kmp(char * texto,int texto_size,char * padrao,int padrao_size,int * lps){
    int i=0,j=0;
    int last_occ=-1;
    while((texto_size-i)>=(padrao_size-j)){
        if(padrao[j]==texto[i]){
            i++;
            j++;

        }
        if(j==padrao_size){
            last_occ=i-j;
            j=lps[j-1];
        }else if(i<texto_size && padrao[j]!=texto[i]){

            if(j!=0){
                
                j=lps[j-1];
            }
            else{
                i++;
            }
        }
    }
    return last_occ;
}
int main(){

}