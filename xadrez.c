#include <stdio.h>
/* `void` tem dois usos principais: 1. **Funções que não retornam valor**: Quando você define uma função com o tipo de retorno `void`,
 isso significa que a função não retornará nenhum valor.
 Ou seja, a função executa algum processo, mas não envia nenhum resultado de volta para o código que a chamou. */



 ///# Torre move 5 casas a direita #
void moverTorre(){
printf("A Torre: movimenta 5 casas para a direita\n");
   for (int i = 0; i < 5; i++)
   {
   printf("Direita\n");
   }
}
// # bispo move 5 casas na diagonal (direita cima) #
void moverBispo(){
printf("O Bispo: movimenta 5 casas em diagonais\n");
  for (int i = 0; i < 5; i++)
  {
   printf("Cima Direita\n");
  }
}
// # rainha move 8 casas para a esquerda #
void moverRainha(){
printf("A Rainha: movimenta 8 casas para a esquerda\n");
  for (int i = 0; i < 8; i++)
{
printf("Esquerda\n");
}
}
// # cavalo move casas em L (2-1) #
void moverCavalo(){
printf("O Cavalo: movimenta casas em L\n");
   for (int i = 0; i < 2; i++)
   {
   printf("Cima\n");
   }
   printf("Direita\n");
}



//# MENU INTERATIVO #
int main(){
int escolha;

do
{
  printf("Escolha uma opção para movimentar a peça de xadrez\n");
  printf("1. Torre\n");
  printf("2. Bispo\n");
  printf("3. Rainha\n");
  printf("4. Cavalo\n");
  printf("5. Sair\n");
  scanf("%d" , &escolha);

switch (escolha)
{
case 1:
 moverTorre();
  break;

  case 2:
moverBispo();
  break;

  case 3:
moverRainha();
  break;

  case 4:
moverCavalo();
  break;

  case 5:
printf("Saindo do programa...\n");
  break;
  
default:
printf("Opção invalida!!!");
  break;
}


} while (escolha != 5);


return 0;


}