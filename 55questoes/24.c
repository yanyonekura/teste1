#include <stdio.h>

int main() {
    int idade, maior_idade = 0, contador_mulheres = 0;
    char sexo, olhos, cabelos;

    while (1) {
        printf("Digite a idade (-1 para encerrar): ");
        scanf("%d", &idade);

        if (idade == -1) {
            break; 
        }

        printf("Sexo (M/F): ");
        scanf(" %c", &sexo); 

        printf("Cor dos olhos (A - Azuis, V - Verdes, C - Castanhos): ");
        scanf(" %c", &olhos);

        printf("Cor dos cabelos (L - Louros, C - Castanhos, P - Pretos): ");
        scanf(" %c", &cabelos);

       
        if (idade > maior_idade) {
            maior_idade = idade;
        }

        
        if ((sexo == 'F' || sexo == 'f') &&
            (idade >= 18 && idade <= 35) &&
            (olhos == 'V' || olhos == 'v') &&
            (cabelos == 'L' || cabelos == 'l')) {
            contador_mulheres++;
        }

        printf("-----------------------------\n");
    }

    
    printf("\nMaior idade dos habitantes: %d\n", maior_idade);
    printf("Quantidade de mulheres entre 18 e 35 anos, olhos verdes e cabelos louros: %d\n", contador_mulheres);

    return 0;
}
