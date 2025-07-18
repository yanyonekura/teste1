#include <stdio.h>

int main() {
    int X, Y;
    unsigned long long resultado = 1;

    printf("Digite X e Y (inteiros e positivos): ");
    scanf("%d %d", &X, &Y);

    if (X < 0 || Y < 0) {
        printf("Valores invalidos!\n");
        return 1;
    }

    for (int i = 0; i < Y; i++) {
        resultado *= X;
    }

    printf("%d^%d = %llu\n", X, Y, resultado);
    return 0;
}
