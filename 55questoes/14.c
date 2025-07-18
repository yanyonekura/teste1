#include <stdio.h>

int main() {
    int valor, total = 0, soma = 0, positivos = 0, negativos = 0;

    printf("Digite um valor (0 para encerrar): ");
    scanf("%d", &valor);

    while(valor != 0) {
        soma += valor;
        total++;

        if(valor > 0) positivos++;
        else if(valor < 0) negativos++;

        printf("Digite um valor (0 para encerrar): ");
        scanf("%d", &valor);
    }

    if(total > 0) {
        printf("Média: %.2f\n", (float)soma / total);
        printf("Positivos: %d (%.2f%%)\n", positivos, (positivos * 100.0) / total);
        printf("Negativos: %d (%.2f%%)\n", negativos, (negativos * 100.0) / total);
    } else {
        printf("Nenhum valor foi inserido.\n");
    }

    return 0;
}
