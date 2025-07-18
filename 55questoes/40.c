#include <stdio.h>

int main() {
    int n, m, soma;
    long long fat;

    printf("Quantos valores? ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("Digite m: ");
        scanf("%d", &m);
        soma = 0;
        fat = 1;

        for (int j = 1; j <= m; j++) {
            soma += j;
            fat *= j;
        }

        printf("Valor: %d | Soma: %d | Fatorial: %lld\n", m, soma, fat);
    }

    return 0;
}
