#include <stdio.h>

int main() {
    int num, maior, menor;
    float soma = 0;
    for (int i = 0; i < 500; i++) {
        printf("Digite um numero positivo: ");
        scanf("%d", &num);
        soma += num;

        if (i == 0) {
            maior = menor = num;
        } else {
            if (num > maior) maior = num;
            if (num < menor) menor = num;
        }
    }

    printf("Maior: %d\n", maior);
    printf("Menor: %d\n", menor);
    printf("Media: %.2f\n", soma / 500);
    return 0;
}
