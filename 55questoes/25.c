#include <stdio.h>

int main() {
    int codigo;
    float preco, novoPreco, somaPreco = 0, somaNovo = 0;
    int count = 0;

    while (1) {
        printf("Digite o codigo do produto (negativo para sair): ");
        scanf("%d", &codigo);
        if (codigo < 0) break;

        printf("Digite o preco do produto: ");
        scanf("%f", &preco);

        novoPreco = preco * 1.2;
        printf("Codigo: %d | Novo preco: %.2f\n", codigo, novoPreco);

        somaPreco += preco;
        somaNovo += novoPreco;
        count++;
    }

    if (count > 0) {
        printf("Media preco antigo: %.2f\n", somaPreco / count);
        printf("Media preco novo: %.2f\n", somaNovo / count);
    }

    return 0;
}
