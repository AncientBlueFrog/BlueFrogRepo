#include <lvdsc.h>
#include <stdio.h>
#include <stdlib.h>

int enumero(char *digito) {
  // declada e define as variaveis.
  int retorno = 1;
  int i = 0;

  while (digito[i]) { // verifica se há valores não-digitos na string.
    if ((digito[i] < '0') || (digito[i] > '9')) {
      retorno = 0;
    }

    i++;
  }

  return retorno;
}

int getInt(char *str) {
  // declada e define as variaveis flag e teste.
  char flag = 1;
  char *teste = malloc(1);
  int ret;

  while (flag) { // Testa se o valor digitado é valido.
    printf("%s", str);
    scanf("%s", teste);

    if (enumero(teste)) {
      flag = 0;
    }
  }

  ret = atoi(teste); // Converte a string teste para inteiro e define ret.

  printf("\n"); // Pula uma linha no terminal.

  return ret;
}
