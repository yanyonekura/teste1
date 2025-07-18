#include <stdio.h>

int main() {
    int m, n;

    while(1) {
        printf("Digite m (0 encerra): ");
        scanf("%d", &m);
        if(m == 0) break;

        printf("Digite n: ");
        scanf("%d", &n);

        int soma = 0;
        for(int i = 0; i < n; i++) {
            soma += m + i;
        }

        printf("Soma: %d\n", soma);
    }

    return 0;
}
