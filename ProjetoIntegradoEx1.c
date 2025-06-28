#include <stdio.h>

int main(){

  int filhos, netos, total = 0;
  scanf("%d", &filhos);
  for(int i = 0; i < filhos; i++){
      scanf("%d", &netos);
      total += netos;
  }

  printf("%d", total);

  return 0;
  }