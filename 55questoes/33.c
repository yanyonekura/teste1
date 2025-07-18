#include <stdio.h>

int main() {
    int N;

    for (int i = 1; i <= 20; i++) {
        printf("Digite o %do valor para N: ", i);
        scanf("%d", &N);

        printf("Tabuada do 1 ao %d para N = %d:\n", N, N);
        for (int j = 1; j <= N; j++) {
            printf("%d x %d = %d\n", j, N, j * N);
        }
        printf("-------------------------\n");
    }

    return 0;
}
