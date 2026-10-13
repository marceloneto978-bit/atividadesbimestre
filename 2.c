
#include <stdio.h>

int main() {
    int opcao;
    float total = 0;

    do {
        printf("=== COFRINHO DIGITAL ===\n");
        printf("1 - Adicionar moeda de R$ 0,50\n");
        printf("2 - Adicionar moeda de R$ 1,00\n");
        printf("3 - Adicionar moeda de R$ 2,00\n");
        printf("0 - Parar e ver o total\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        if (opcao == 1) {
            total = total + 0.50;
        } else if (opcao == 2) {
            total = total + 1.00;
        } else if (opcao == 3) {
            total = total + 2.00;
        } else if (opcao != 0) {
            printf("Opcao invalida!\n");
        }

        printf("Saldo atual: R$ %.2f\n\n", total);

    } while (opcao != 0);

    printf("Total acumulado no cofrinho: R$ %.2f\n", total);

    return 0;
}