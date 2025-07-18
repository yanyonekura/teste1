#include <stdio.h>
#include <string.h>

int main() {
    int codigo, maxAcidentes = -1, minAcidentes = 1000000000;
    int acidentes, veiculos, totalVeiculos = 0, totalAcidentesRS = 0, countRS = 0;
    char estado[3], cidadeMax[10], cidadeMin[10];
    char codigoMax[10], codigoMin[10];

    for (int i = 0; i < 200; i++) {
        printf("Cidade %d\n", i + 1);
        printf("Codigo da cidade: ");
        scanf("%d", &codigo);
        printf("Estado (ex: RS, SC): ");
        scanf("%s", estado);
        printf("Numero de veiculos: ");
        scanf("%d", &veiculos);
        printf("Numero de acidentes: ");
        scanf("%d", &acidentes);

        totalVeiculos += veiculos;

        if (acidentes > maxAcidentes) {
            maxAcidentes = acidentes;
            sprintf(codigoMax, "%d", codigo);
            strcpy(cidadeMax, estado);
        }
        if (acidentes < minAcidentes) {
            minAcidentes = acidentes;
            sprintf(codigoMin, "%d", codigo);
            strcpy(cidadeMin, estado);
        }

        if (strcmp(estado, "RS") == 0) {
            totalAcidentesRS += acidentes;
            countRS++;
        }
        printf("---------------------------\n");
    }

    printf("Maior acidentes: %d na cidade %s - %s\n", maxAcidentes, codigoMax, cidadeMax);
    printf("Menor acidentes: %d na cidade %s - %s\n", minAcidentes, codigoMin, cidadeMin);
    printf("Media de veiculos nas cidades: %.2f\n", totalVeiculos / 200.0);

    if (countRS > 0)
        printf("Media de acidentes no RS: %.2f\n", totalAcidentesRS / (float)countRS);
    else
        printf("Nenhuma cidade do RS informada.\n");

    return 0;
}
