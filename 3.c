#include <stdio.h>

int main() {
    float salario, somaSalario = 0, maiorSalario = 0;
    int filhos, somaFilhos = 0, totalPessoas = 0, salarioBaixo = 0;

    printf("Digite o salário (negativo para encerrar): ");
    scanf("%f", &salario);

    while(salario >= 0) {
        printf("Digite o número de filhos: ");
        scanf("%d", &filhos);

        somaSalario += salario;
        somaFilhos += filhos;
        totalPessoas++;

        if(salario > maiorSalario) {
            maiorSalario = salario;
        }

        if(salario <= 100) {
            salarioBaixo++;
        }

        printf("Digite o salário (negativo para encerrar): ");
        scanf("%f", &salario);
    }

    if(totalPessoas > 0) {
        printf("Média de salário: %.2f\n", somaSalario / totalPessoas);
        printf("Média de filhos: %.2f\n", (float)somaFilhos / totalPessoas);
        printf("Maior salário: %.2f\n", maiorSalario);
        printf("Percentual com salário até R$100: %.2f%%\n", (salarioBaixo * 100.0) / totalPessoas);
    } else {
        printf("Nenhum dado inserido.\n");
    }

    return 0;
}
