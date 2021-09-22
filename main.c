#include <stdio.h>

/* Preencha uma matriz 2x2 e mostre a soma dos
números informados.*/

int main() {
    int linha, coluna, soma = 0, numeros[2][2] = {1, 2, 3, 4};

    for (linha = 0; linha < 2; linha++) {

        for (coluna = 0; coluna < 2; coluna++) {
            printf("Posição: [%d] [%d] = [%d] \n", linha, coluna, numeros[linha][coluna]);
            soma += numeros[linha][coluna];
        }
    }

    printf("A soma dos valores da matriz é: %d", soma);
}




