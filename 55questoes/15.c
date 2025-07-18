#include <stdio.h>

int main() {
    int n, i1 = 0, i2 = 0, i3 = 0, i4 = 0;

    printf("Digite um número (negativo para encerrar): ");
    scanf("%d", &n);

    while(n >= 0) {
        if(n <= 25) i1++;
        else if(n <= 50) i2++;
        else if(n <= 75) i3++;
        else if(n <= 100) i4++;

        printf("Digite um número (negativo para encerrar): ");
        scanf("%d", &n);
    }

    printf("[0,25]: %d\n[26,50]: %d\n[51,75]: %d\n[76,100]: %d\n", i1, i2, i3, i4);
    return 0;
}
