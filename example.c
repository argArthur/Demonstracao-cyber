#include <stdio.h>
#include "segredo.h"

int main() {
	char input[128];
  char senha[128];

  lerSenha(senha); // poe a senha na variavel senha 

	printf("Digite a senha: ");
	scanf("%127[^\n]s", input);

	printf("\nVoce digitou:\n");
	printf(input);

	if (strcmp(senha, input) == 0) {
		printf("\n...Senha correta!\n");
	} else {
		printf("\n...Voce errou :(\n");
	}

	return 0;
}
