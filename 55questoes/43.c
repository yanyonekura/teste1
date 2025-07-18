#include <stdio.h>

void ordenarDecrescente(int arr[], int tamanho) {
    int temp;
    for (int i = 0; i < tamanho - 1; i++) {
        for (int j = i + 1; j < tamanho; j++) {
            if (arr[i] < arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main() {
    int grupos[5][4];

    // Leitura
    for (int i = 0; i < 5; i++) {
        printf("Digite 4 valores para o grupo %d: ", i + 1);
        for (int j = 0; j < 4; j++) {
            scanf("%d", &grupos[i][j]);
        }
    }

    // Mostrar na ordem lida
    printf("\nValores na ordem lida:\n");
    for (int i = 0; i < 5; i++) {
        printf("Grupo %d: ", i + 1);
        for (int j = 0; j < 4; j++) {
            printf("%d ", grupos[i][j]);
        }
        printf("\n");
    }

    // Ordenar cada grupo e mostrar decrescente
    printf("\nValores ordenados decrescentemente:\n");
    for (int i = 0; i < 5; i++) {
        ordenarDecrescente(grupos[i], 4);
        printf("Grupo %d: ", i + 1);
        for (int j = 0; j < 4; j++) {
            printf("%d ", grupos[i][j]);
        }
        printf("\n");
    }

    return 0;
}
