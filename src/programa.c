#include <stdio.h>
#include "matematica.h"
#include "vetor.h"

int main() {

    int v[3] = {1, 2, 3};

    printf("Soma: %d\n", soma(2, 3));
    printf("Sub: %d\n", sub(5, 2));

    printf("\nSoma do Vetor = %d\n",somaVetor(v, 3));

    return 0;
}