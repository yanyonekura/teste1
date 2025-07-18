#include <stdio.h>

int main() {
    int N;
    unsigned long long fatorial = 1;

    printf("Digite um valor inteiro e positivo N: ");
    scanf("%d", &N);

    if (N < 0) {
        printf("Valor invalido!\n");
        return 1;
    }

    for (int i = 1; i <= N; i++) {
        fatorial *= i;
    }

    printf("%d! = %llu\n", N, fatorial);
    return 0;
}
