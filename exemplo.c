#include <stdio.h>
#include "segredo.h"

int main() {
    char input[128];

    printf("Digite a senha: ");
    scanf("%127[^\n]s", input);

    printf("\nVoce digitou:\n");
    printf(input);

    if (senhaCorreta(input)) {
        printf("\n...Senha correta!");
    } else {
        printf("\n...Voce errou :(");
    }

    return 0;
}
