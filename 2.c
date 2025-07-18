#include <stdio.h>

int main() {
    int N;
    double E = 1.0;

    printf("Digite o valor de N: ");
    scanf("%d", &N);

    for(int i = 1; i <= N; i++) {
        int f = 1;
        for(int j = 1; j <= i; j++) {
            f *= j;
        }
        E += 1.0 / f;
    }

    printf("O valor de E é: %.5lf\n", E);
    return 0;
}
