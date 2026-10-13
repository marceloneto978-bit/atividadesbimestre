
#include <stdio.h>

int main() {
    int passos, total = 0, horas = 0;

    while (total < 10000) {
        printf("Digite a quantidade de passos dados nesta hora: ");
        scanf("%d", &passos);

        total = total + passos;
        horas++;

        printf("Total de passos: %d\n\n", total);
    }

    printf("Meta de 10.000 passos atingida!\n");
    printf("Total de passos: %d\n", total);
    printf("Horas necessarias: %d\n", horas);

    return 0;
}
