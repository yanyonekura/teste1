#include <stdio.h>

int main() {
    int num, dentro = 0, fora = 0;

    for (int i = 0; i < 10; i++) {
        printf("Digite um numero: ");
        scanf("%d", &num);

        if (num >= 10 && num <= 20)
            dentro++;
        else
            fora++;
    }

    printf("Dentro: %d | Fora: %d\n", dentro, fora);
    return 0;
}
