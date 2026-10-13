
#include <stdio.h>

int main() {
    float nota, soma = 0, media;
    int contador;

    for (contador = 1; contador <= 10; contador++) {
        printf("Digite a nota do cliente %d (0 a 10): ", contador);
        scanf("%f", &nota);

        soma = soma + nota;
    }

    media = soma / 10;

    printf("\nMedia geral do atendimento: %.2f\n", media);

    if (media < 7) {
        printf("ALERTA: A qualidade do atendimento precisa melhorar!\n");
    } else {
        printf("Atendimento com media satisfatoria!\n");
    }

    return 0;
}
