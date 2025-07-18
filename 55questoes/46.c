#include <stdio.h>

int main() {
    char sexo, olhos, cabelos;
    int idade;
    int maiorIdade = 0;
    int countMulheres = 0;

    for (int i = 0; i < 500; i++) {
        printf("Pessoa %d\n", i + 1);
        printf("Sexo (M/F): ");
        scanf(" %c", &sexo);
        printf("Olhos (A-azuis, V-verdes, C-castanhos): ");
        scanf(" %c", &olhos);
        printf("Cabelos (L-louros, C-castanhos, P-pretos): ");
        scanf(" %c", &cabelos);
        printf("Idade: ");
        scanf("%d", &idade);

        if (idade > maiorIdade) {
            maiorIdade = idade;
        }

        if ((sexo == 'F' || sexo == 'f') && (idade >= 18 && idade <= 35) && (olhos == 'V' || olhos == 'v') && (cabelos == 'L' || cabelos == 'l')) {
            countMulheres++;
        }

        printf("-------------------------\n");
    }

    printf("Maior idade do grupo: %d\n", maiorIdade);
    printf("Mulheres com 18 a 35 anos, olhos verdes e cabelos louros: %d\n", countMulheres);

    return 0;
}
