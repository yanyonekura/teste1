#include <stdio.h>

int main() {
    int count = 0, num = 2;

    while (count < 5) {
        int soma = 0;
        for (int i = 1; i < num; i++) {
            if (num % i == 0) soma += i;
        }
        if (soma == num) {
            printf("%d\n", num);
            count++;
        }
        num++;
    }

    return 0;
}
