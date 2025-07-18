#include <stdio.h>

int main() {
    float n1, n2, n3, mp, soma = 0;

    for (int i = 1; i <= 50; i++) {
        printf("Aluno %d - Digite as 3 notas: ", i);
        scanf("%f %f %f", &n1, &n2, &n3);
        mp = (n1 * 2 + n2 * 4 + n3 * 3) / 10;
        printf("Media: %.2f - %s\n", mp, mp >= 7 ? "Aprovado" : "Reprovado");
        soma += mp;
    }

    printf("Media geral da turma: %.2f\n", soma / 50);
    return 0;
}
