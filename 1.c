#include <stdio.h>

int main() {
    int a, negativos = 0;

    for(int i = 1; i <= 5; i++) {
        printf("Digite o valor %d: ", i);
        scanf("%d", &a);
        if(a < 0) {
            negativos++;
        }
    }

    printf("Quantidade de valores negativos: %d\n", negativos);
    return 0;
}
