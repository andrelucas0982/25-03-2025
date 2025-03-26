#include <stdio.h>

int main(void) {
  char Comida;

  printf("Digite A Batata\nDigite B para Hamburguer\nDigite C para Suco\nDigite D para Combo\nDigite F para encerrar o programa\nDigite aqui: ");
  Comida = getchar();
  getchar();

  int quantidadeA = 0, ValorA = 0;
  int quantidadeB = 0, ValorB = 0;
  int quantidadeC = 0, ValorC = 0;
  int quantidadeD = 0, ValorD = 0;
  int TotaldeItens = 0, ValorTotal = 0;

  while( Comida != 'F' ) {
    switch (Comida) {
      case 'A':
	quantidadeA++;
	ValorA += 10;
	break;
      case 'B': 
	quantidadeB++;
	ValorB += 15;
	break;
      case 'C':
	quantidadeC++;
	ValorC += 9;
	break;
	  case 'D':
	quantidadeD++;
	ValorA += 30;
	break;
      
    }

    printf("Digite aqui: ");
    Comida = getchar();
    getchar();
  }
  TotaldeItens = quantidadeA + quantidadeB + quantidadeC + quantidadeD;
  ValorTotal = ValorA + ValorB + ValorC + ValorD;

  printf("Suco:        %d vendidos\nBatata:      %d vendidas\nHamburguer:  %d vendidos\nCombos:      %d vendidos\n-----------------------\nTotal:      %d itens \n\nValor total: R$ %d,00", quantidadeC, quantidadeA, quantidadeB, quantidadeD, TotaldeItens, ValorTotal);
  return 0;
}
