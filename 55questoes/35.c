#include <stdio.h>

int main() {
    int sexo, countF = 0;
    float altura, maior, menor, somaF = 0, somaGeral = 0;

    for (int i = 0; i < 50; i++) {
        printf("Sexo (1-Masc, 2-Fem): ");
        scanf("%d", &sexo);
        printf("Altura: ");
        scanf("%f", &altura);

        somaGeral += altura;

        if (sexo == 2) {
            somaF += altura;
            countF++;
        }

        if (i == 0 || altura > maior) maior = altura;
        if (i == 0 || altura < menor) menor = altura;
    }

    printf("Maior altura: %.2f\n", maior);
    printf("Menor altura: %.2f\n", menor);
    printf("Media altura das mulheres: %.2f\n", countF ? somaF / countF : 0);
    printf("Media geral da turma: %.2f\n", somaGeral / 50);
    return 0;
}
