#include <stdio.h>

int main() {
    int numero, maisAlto, maisBaixo, altura, alturaAlta, alturaBaixa;

    for (int i = 0; i < 5; i++) {
        printf("Numero do aluno: ");
        scanf("%d", &numero);
        printf("Altura (cm): ");
        scanf("%d", &altura);

        if (i == 0 || altura > alturaAlta) {
            alturaAlta = altura;
            maisAlto = numero;
        }
        if (i == 0 || altura < alturaBaixa) {
            alturaBaixa = altura;
            maisBaixo = numero;
        }
    }

    printf("Mais alto: Aluno %d com %d cm\n", maisAlto, alturaAlta);
    printf("Mais baixo: Aluno %d com %d cm\n", maisBaixo, alturaBaixa);
    return 0;
}
