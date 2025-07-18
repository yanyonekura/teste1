#include <stdio.h>

int main() {
    int soma = 0, count = 0;
    for (int i = 13; i <= 73; i++) {
        soma += i;
        count++;
    }
    printf("Media: %.2f\n", (float)soma / count);
    return 0;
}
