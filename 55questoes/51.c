#include <stdio.h>

unsigned long long fatorial(int n) {
    unsigned long long fat = 1;
    for (int i = 1; i <= n; i++) {
        fat *= i;
    }
    return fat;
}

int main() {
    int num;
    printf("Digite um numero inteiro e positivo: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Numero invalido!\n");
        return 1;
    }

    printf("%d! = %llu\n", num, fatorial(num));
    return 0;
}
