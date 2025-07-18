#include <stdio.h>

int main() {
    int sexo, idade;
    float altura;
    int count = 0, countFaixa = 0;
    int somaIdade = 0, somaIdadeHomens = 0, countHomens = 0;
    float somaAlturaMulheres = 0;
    int countMulheres = 0;

    while (count < 1000) {
        printf("Habitante %d\n", count + 1);
        printf("Sexo (0-Feminino, 1-Masculino): ");
        scanf("%d", &sexo);
        printf("Idade: ");
        scanf("%d", &idade);
        printf("Altura: ");
        scanf("%f", &altura);

        somaIdade += idade;

        if (sexo == 0) {
            somaAlturaMulheres += altura;
            countMulheres++;
        } else {
            somaIdadeHomens += idade;
            countHomens++;
        }

        if (idade >= 18 && idade <= 35)
            countFaixa++;

        count++;
        printf("-------------------\n");
    }

    printf("Media da idade do grupo: %.2f\n", somaIdade / 1000.0);
    if (countMulheres > 0)
        printf("Media da altura das mulheres: %.2f\n", somaAlturaMulheres / countMulheres);
    else
        printf("Nenhuma mulher cadastrada.\n");

    if (countHomens > 0)
        printf("Media da idade dos homens: %.2f\n", somaIdadeHomens / (float)countHomens);
    else
        printf("Nenhum homem cadastrado.\n");

    printf("Percentual com idade entre 18 e 35 anos: %.2f%%\n", (countFaixa / 1000.0) * 100);

    return 0;
}
