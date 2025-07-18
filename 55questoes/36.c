#include <stdio.h>

int main() {
    int N, valor;
    long long fat;

    printf("Quantos valores? ");
    scanf("%d", &N);

    for (int i = 0; i < N; i++) {
        printf("Digite um valor: ");
        scanf("%d", &valor);
        fat = 1;
        for (int j = 1; j <= valor; j++)
            fat *= j;

        printf("%d! = %lld\n", valor, fat);
    }
    return 0;
}
