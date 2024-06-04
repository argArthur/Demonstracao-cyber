#include <string.h>
#include <stdio.h>

#define senha "bcc unesp 2024"

int senhaCorreta(char input[128]) {
    return strcmp(senha, input) == 0;
}
