#include <stdio.h>

int main() {
    int n;
    int H;

    printf("Digite um numero inteiro e positivo: ");
    scanf("%d", &n);

    if (n > 0) {
        H = 10 * n;
        printf("O resultado da soma H eh: %d\n", H);
    } else {
        printf("Numero invalido! Deve ser inteiro e positivo.\n");
    }

    return 0;
}
