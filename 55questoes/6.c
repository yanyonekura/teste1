#include <stdio.h>

int main() {
    int voto;
    int cand1 = 0, cand2 = 0, cand3 = 0, cand4 = 0, nulo = 0, branco = 0;

    printf("Digite o código do voto (0 para encerrar): ");
    scanf("%d", &voto);

    while(voto != 0) {
        if(voto == 1) cand1++;
        else if(voto == 2) cand2++;
        else if(voto == 3) cand3++;
        else if(voto == 4) cand4++;
        else if(voto == 5) nulo++;
        else if(voto == 6) branco++;
        else printf("Código inválido!\n");

        printf("Digite o código do voto (0 para encerrar): ");
        scanf("%d", &voto);
    }

    printf("Candidato 1: %d votos\n", cand1);
    printf("Candidato 2: %d votos\n", cand2);
    printf("Candidato 3: %d votos\n", cand3);
    printf("Candidato 4: %d votos\n", cand4);
    printf("Nulos: %d\n", nulo);
    printf("Brancos: %d\n", branco);
    return 0;
}
