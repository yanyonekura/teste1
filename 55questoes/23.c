#include <stdio.h>

int main() {
    int idade, maiorIdade = 0, contador = 0;
    char sexo, olhos, cabelos;

    while (1) {
        printf("Digite a idade (-1 para encerrar): ");
        scanf("%d", &idade);

        if (idade == -1) {
            break;
        }

        printf("Sexo (M/F): ");
        scanf(" %c", &sexo);

        printf("Cor dos olhos (A - azuis, V - verdes, C - castanhos): ");
        scanf(" %c", &olhos);

        printf("Cor dos cabelos (L - louros, C - castanhos, P - pretos): ");
        scanf(" %c", &cabelos);

        // Atualiza a maior idade
        if (idade > maiorIdade) {
            maiorIdade = idade;
        }

        // Verifica se atende aos critérios do item 24
        if ((sexo == 'F' || sexo == 'f') &&
            (idade >= 18 && idade <= 35) &&
            (olhos == 'V' || olhos == 'v') &&
            (cabelos == 'L' || cabelos == 'l')) {
            contador++;
        }

        printf("--------------------------\n");
    }

    // Resultado final
    printf("Maior idade entre os habitantes: %d\n", maiorIdade);
    printf("Quantidade de mulheres com 18-35 anos, olhos verdes e cabelos louros: %d\n", contador);

    return 0;
}
