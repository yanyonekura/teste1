#include <stdio.h>

int converteParaDias(int d, int m, int a) {
    return d + m * 30 + a * 365;
}

int main() {
    int d1, m1, a1, d2, m2, a2;
    int data1, data2, diff;

    printf("Digite a primeira data (dd mm aaaa): ");
    scanf("%d %d %d", &d1, &m1, &a1);
    printf("Digite a segunda data (dd mm aaaa): ");
    scanf("%d %d %d", &d2, &m2, &a2);

    data1 = converteParaDias(d1, m1, a1);
    data2 = converteParaDias(d2, m2, a2);

    diff = data2 - data1;
    if (diff < 0) diff = -diff;

    printf("Diferenca entre as datas: %d dias\n", diff);

    return 0;
}
