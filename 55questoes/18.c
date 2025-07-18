#include <stdio.h>

int main() {
    int m;

    while(1) {
        printf("Digite um número (0 encerra): ");
        scanf("%d", &m);
        if(m == 0) break;

        if(m % 2 == 0) {
            int divisores = 0;
            for(int i = 1; i <= m; i++) {
                if(m % i == 0) divisores++;
            }
            printf("%d tem %d divisores\n", m, divisores);
        } else if(m < 10) {
            int fatorial = 1;
            for(int i = 1; i <= m; i++) fatorial *= i;
            printf("Fatorial de %d: %d\n", m, fatorial);
        } else {
            int soma = 0;
            for(int i = 1; i <= m; i++) soma += i;
            printf("Soma de 1 até %d: %d\n", m, soma);
        }
    }

    return 0;
}
