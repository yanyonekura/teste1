#include <stdio.h>

int main() {
    int num, soma = 0;

    do {
        printf("Digite um número (0 encerra): ");
        scanf("%d", &num);
        if(num < 0) soma += num;
    } while(num != 0);

    printf("Soma dos negativos: %d\n", soma);
    return 0;
}
