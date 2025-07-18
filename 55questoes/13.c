#include <stdio.h>

int main() {
    int qtd, n;

    printf("Quantos valores deseja calcular? ");
    scanf("%d", &qtd);

    for(int i = 1; i <= qtd; i++) {
        printf("Digite um número: ");
        scanf("%d", &n);

        int fatorial = 1;
        for(int j = 1; j <= n; j++) {
            fatorial *= j;
        }

        printf("Valor: %d, Fatorial: %d\n", n, fatorial);
    }

    return 0;
}

