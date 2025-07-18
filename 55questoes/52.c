#include <stdio.h>

unsigned long long fatorial(int n) {
    unsigned long long fat = 1;
    for (int i = 1; i <= n; i++) fat *= i;
    return fat;
}

int main() {
    int n, p;
    unsigned long long arranjo, combinacao;

    printf("Digite n e p (inteiros e positivos, p <= n): ");
    scanf("%d %d", &n, &p);

    if (n < 0 || p < 0 || p > n) {
        printf("Valores invalidos!\n");
        return 1;
    }

    arranjo = fatorial(n) / fatorial(n - p);
    combinacao = fatorial(n) / (fatorial(p) * fatorial(n - p));

    printf("Arranjo A(%d,%d) = %llu\n", n, p, arranjo);
    printf("Combinacao C(%d,%d) = %llu\n", n, p, combinacao);

    return 0;
}
