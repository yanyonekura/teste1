#include <stdio.h>

int main() {
    char nome[100];
    float compras, bonus;

    for (int i = 0; i < 150; i++) {
        printf("Nome do cliente %d: ", i + 1);
        scanf(" %[^\n]", nome);
        printf("Valor das compras no ano passado: ");
        scanf("%f", &compras);

        if (compras < 500000) {
            bonus = compras * 0.10;
        } else {
            bonus = compras * 0.15;
        }

        printf("Cliente: %s | Bonus: %.2f\n", nome, bonus);
        printf("-------------------------\n");
    }

    return 0;
}
