#include <stdio.h>

int main() {
    int num;
    long long produto = 1;
    int temPar = 0;

    do {
        printf("Digite um número (0 encerra): ");
        scanf("%d", &num);
        if(num > 0 && num % 2 == 0) {
            produto *= num;
            temPar = 1;
        }
    } while(num != 0);

    if(temPar)
        printf("Produtório dos pares: %lld\n", produto);
    else
        printf("Nenhum número par foi inserido.\n");

    return 0;
}
