#include <stdio.h>
#include "segredo.h"

#define tamanho_senha 64

void testPassword() {
  char senha[tamanho_senha];
  char input[128];

  lerSenha(senha); // poe a senha na variavel senha 

  printf("Digite a senha: ");
  scanf("%127s", input);

  printf("\nVoce digitou:\n");
  printf(input);

  if (strcmp(senha, input) == 0) {
    printf("\n...Senha correta!\n");
  } else {
    printf("\n...Voce errou :(\n");
  }
}

int main() {
  testPassword();
}
