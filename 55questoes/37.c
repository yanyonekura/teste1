#include <stdio.h>
#include <math.h>

int main() {
    int X;
    float termo;

    printf("Digite X: ");
    scanf("%d", &X);

    for (int i = 1; i <= 20; i++) {
        termo = 1.0 / pow(X, i);
        printf("%.6f ", termo);
    }

    return 0;
}
