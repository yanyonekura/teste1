#include <stdio.h>

int main() {
    int codigo;
    float n1, n2, n3, media;

    printf("Digite o código do aluno (0 para encerrar): ");
    scanf("%d", &codigo);

    while(codigo != 0) {
        printf("Digite as 3 notas: ");
        scanf("%f %f %f", &n1, &n2, &n3);

        media = (n1 + n2 + n3) / 3;
        printf("Aluno %d - Média: %.2f\n", codigo, media);

        printf("Digite o código do aluno (0 para encerrar): ");
        scanf("%d", &codigo);
    }

    return 0;
}
