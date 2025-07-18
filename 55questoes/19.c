#include <stdio.h>

int main() {
    int num, pares = 0, impares = 0, somaPares = 0, somaTotal = 0, total = 0;

    do {
        printf("Digite um número (0 encerra): ");
        scanf("%d", &num);

        if(num > 0) {
            total++;
            somaTotal += num;
            if(num % 2 == 0) {
                pares++;
                somaPares += num;
            } else {
                impares++;
            }
        }
    } while(num != 0);

    if(total > 0) {
        printf("Total pares: %d\n", pares);
        printf("Total ímpares: %d\n", impares);
        printf("Média pares: %.2f\n", pares ? (float)somaPares / pares : 0);
        printf("Média geral: %.2f\n", (float)somaTotal / total);
    }

    return 0;
}
