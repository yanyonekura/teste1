#include <stdio.h>
#include <math.h>

int main() {
    int count = 0;
    float valor;

    while(1) {
        printf("Digite um número (negativo para encerrar): ");
        scanf("%f", &valor);
        if(valor < 0) break;

        if(count % 20 == 0) {
            printf("Valor\tQuadrado\tCubo\t\tRaiz\n");
        }

        printf("%.2f\t%.2f\t\t%.2f\t\t%.2f\n", valor, valor*valor, valor*valor*valor, sqrt(valor));
        count++;
    }

    return 0;
}
