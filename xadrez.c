#include <stdio.h>

int main(){

 
  // torre movimenta 5 casa para a direita
  printf("A Torre: movimenta 5 casas para a direita.");
  for (int i = 0; i < 5; i++)
  {
   printf("Direita\n");
  }
 
// bispo movimenta 5 casas na diagonal
printf("O Bispo: movimenta 5 casas em diagonais.\n");
for (int i = 0; i < 5; i++)
{
  printf("Cima Direita\n");
}


// rainha movimenta 8 casas para a esquerda
printf(" A Rainha: movimenta 8 casas para a esquerda.\n");
for (int i = 0; i < 8; i++)
{
 printf("Esquerda\n");
}

return 0;
  }