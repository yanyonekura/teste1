#include <stdio.h>

int main() {
    int a, b;
    for (int i = 0; i < 5; i++) {
        printf("Digite os valores de a e b (a < b): ");
        scanf("%d %d", &a, &b);

        for (int j = a; j <= b; j++) {
            if (j % 2 == 0)
                printf("%d ", j);
        }
        printf("\n");
    }
    return 0;
}
