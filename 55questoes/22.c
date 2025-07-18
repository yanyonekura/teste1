#include <stdio.h>

int main() {
    int idade, qtdMulheres100 = 0, qtd = 0;
    float salario, somaSalario = 0;
    char sexo;
    int maior = 0, menor = 999;

    while(1) {
        printf("Idade (-1 encerra): ");
        scanf("%d", &idade);
        if(idade < 0) break;

        printf("Sexo (M/F): ");
        scanf(" %c", &sexo);
        printf("Salário: ");
        scanf("%f", &salario);

        qtd++;
        somaSalario += salario;

        if(idade > maior) maior = idade;
        if(idade < menor) menor = idade;

        if(sexo == 'F' || sexo == 'f') {
            if(salario <= 100) qtdMulheres100++;
        }
    }

    if(qtd > 0) {
        printf("Média salarial: %.2f\n", somaSalario / qtd);
        printf("Maior idade: %d\n", maior);
        printf("Menor idade: %d\n", menor);
        printf("Mulheres com salário <= R$100: %d\n", qtdMulheres100);
    }

    return 0;
}
