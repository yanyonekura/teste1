#include <stdio.h>

int main() {
    int valor, soma = 0, qtd = 0;

    printf("Digite um número (negativo para encerrar): ");
    scanf("%d", &valor);

    while(valor >= 0) {
        soma += valor;
        qtd++;

        printf("Digite um número (negativo para encerrar): ");
        scanf("%d", &valor);
    }

    if(qtd > 0) {
        printf("Média: %.2f\n", (float)soma / qtd);
    } else {
        printf("Nenhum valor positivo inserido.\n");
    }

    return 0;
}
