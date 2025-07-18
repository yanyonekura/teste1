#include <stdio.h>
#include <stdbool.h>

bool ehPrimo(int n) {
    if (n < 2) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    int count = 0;
    int num = 1;

    printf("20 primeiros numeros primos (incluindo 1,2,3):\n");
    while (count < 20) {
        if (num == 1 || ehPrimo(num)) {
            printf("%d ", num);
            count++;
        }
        num++;
    }
    printf("\n");
    return 0;
}
