#include <stdio.h>

int ehPrimo(int n) {
    if (n < 2) return 0;
    for (int i = 2; i <= n / 2; i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}

int main() {
    long long produto = 1;
    for (int i = 92; i <= 1478; i++) {
        if (ehPrimo(i))
            produto *= i;
    }
    printf("Produto dos primos: %lld\n", produto);
    return 0;
}
