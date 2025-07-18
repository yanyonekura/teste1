#include <stdio.h>

int main() {
    int n;

    for(int i = 1; i <= 20; i++) {
        printf("Digite o valor %d: ", i);
        scanf("%d", &n);

        for(int j = 1; j <= n; j++) {
            printf("%d x %d = %d\n", j, n, j * n);
        }
        printf("-----------\n");
    }

    return 0;
}
