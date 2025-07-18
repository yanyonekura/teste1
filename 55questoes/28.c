#include <stdio.h>

int main() {
    int n;
    float S = 0.0;

    printf("Digite n: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        S += 1.0 / i;
        printf("1/%d ", i);
        if (i < n) printf("+ ");
    }

    printf("= %.4f\n", S);
    return 0;
}
