#include <stdio.h>

int main() {
    float num1, num2, diff, part;

    printf("Digite dois numeros diferentes: ");
    scanf("%f %f", &num1, &num2);

    if (num1 == num2) {
        printf("Numeros iguais! Impossivel dividir intervalo.\n");
        return 1;
    }

    diff = num2 - num1;
    part = diff / 3;

    printf("Intervalo dividido em 3 partes:\n");
    printf("%.2f\n", num1);
    printf("%.2f\n", num1 + part);
    printf("%.2f\n", num1 + 2 * part);
    printf("%.2f\n", num2);

    return 0;
}
