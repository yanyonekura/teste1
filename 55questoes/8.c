#include <stdio.h>

int main() {
    int num, soma = 0, qtd = 0;

    printf("Digite um número (0 para encerrar): ");
    scanf("%d", &num);

    while(num != 0) {
        if(num % 2 == 0) {
            soma += num;
            qtd++;
        }

        printf("Digite um número (0 para encerrar): ");
        scanf("%d", &num);
    }

    if(qtd > 0) {
        printf("Média dos pares: %.2f\n", (float)soma / qtd);
    } else {
        printf("Nenhum número par foi digitado.\n");
    }

    return 0;
}
