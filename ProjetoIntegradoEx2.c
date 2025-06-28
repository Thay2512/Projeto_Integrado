#include <stdio.h>

int main(){

  int idade, ano;
  scanf("%d", &ano);

  idade = 2025 - ano;

  printf("%d", (ano - idade));

  return 0;
  }