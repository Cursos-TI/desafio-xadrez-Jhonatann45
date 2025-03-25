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


// Cavalo  pode se mover 3 casas em L(cima,cima,esquerda)
printf("O Cavalo: Movimenta casas em L\n");
for (int i = 0; i < 2; i++)
{
 printf("Cima\n");
}
printf("Esquerda\n");


return 0;
  }