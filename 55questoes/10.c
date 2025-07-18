#include <stdio.h>

int main() {
    int cod;
    float n1, n2, n3, maior, media;

    printf("Digite o código do aluno (negativo para encerrar): ");
    scanf("%d", &cod);

    while(cod >= 0) {
        printf("Digite as três notas: ");
        scanf("%f %f %f", &n1, &n2, &n3);

        if(n1 >= n2 && n1 >= n3)
            media = (n1 * 4 + n2 * 3 + n3 * 3) / 10;
        else if(n2 >= n1 && n2 >= n3)
            media = (n2 * 4 + n1 * 3 + n3 * 3) / 10;
        else
            media = (n3 * 4 + n1 * 3 + n2 * 3) / 10;

        printf("Código: %d, Notas: %.1f, %.1f, %.1f, Média: %.2f - %s\n",
               cod, n1, n2, n3, media, media >= 5 ? "APROVADO" : "REPROVADO");

        printf("Digite o código do aluno (negativo para encerrar): ");
        scanf("%d", &cod);
    }

    return 0;
}
