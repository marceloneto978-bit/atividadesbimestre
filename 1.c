
#include <stdio.h>

int main() {
    float consumo, soma = 0, media;
    int contador;

    for (contador = 1; contador <= 5; contador++) {
        printf("Digite o consumo de agua do morador %d (em m3): ", contador);
        scanf("%f", &consumo);

        soma = soma + consumo;

        if (consumo <= 20) {
            printf("Consumo dentro da media.\n\n");
        } else {
            printf("Consumo acima da media.\n\n");
        }
    }

    media = soma / 5;

    printf("Consumo medio geral: %.2f m3\n", media);

    return 0;
}