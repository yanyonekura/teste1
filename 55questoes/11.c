#include <stdio.h>

int main() {
    int n, a1, r, termo, soma = 0;

    printf("Digite o número de termos: ");
    scanf("%d", &n);
    printf("Digite o primeiro termo: ");
    scanf("%d", &a1);
    printf("Digite a razão: ");
    scanf("%d", &r);

    for(int i = 0; i < n; i++) {
        termo = a1 + i * r;
        printf("%d ", termo);
        soma += termo;
    }

    printf("\nSoma dos termos: %d\n", soma);
    return 0;
}
