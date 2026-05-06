#include "vetor.h"
int somaVetor(int *v,int tamanho){
    int soma=0,i;
    for(i=0;i<tamanho;i++){
        soma+=v[i];
    }
    return soma;
}
