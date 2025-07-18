#include <stdio.h>

int main() {
    int matricula;
    float nota;
    char conceito;

    for (int i = 0; i < 75; i++) {
        printf("Aluno %d - Matricula: ", i + 1);
        scanf("%d", &matricula);
        printf("Nota final: ");
        scanf("%f", &nota);

        if (nota >= 0 && nota <= 4.9)
            conceito = 'D';
        else if (nota >= 5.0 && nota <= 6.9)
            conceito = 'C';
        else if (nota >= 7.0 && nota <= 8.9)
            conceito = 'B';
        else if (nota >= 9.0 && nota <= 10.0)
            conceito = 'A';
        else
            conceito = 'I'; // inválido

        printf("Aluno %d - Conceito: %c\n", matricula, conceito);
        printf("-----------------\n");
    }

    return 0;
}
