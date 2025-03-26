#include <stdio.h>

int main(void) {
  char tamanho;

  printf("Digite A para (Lavar, Enxaguar e Secar)\nDigite B para (Enxaguar e Secar)\nDigite C para (Secar)\nDigite F para Sair!\nDigite aqui: ");
  tamanho = getchar();
  getchar();
  
    int Lavar = 0;
    int Enxaguar = 0;
    int Secar = 0;

  while( tamanho != 'F' ) {
    switch (tamanho) {
      case 'A':
	Lavar++;
	
      case 'B': 
	Enxaguar++;

      case 'C':
	Secar++;
	
    }

    printf("Digite aqui: ");
    tamanho = getchar();
    getchar();
  }

  printf("Lavar: %d Enxaguar: %d Secar: %d", Lavar, Enxaguar, Secar);
  
  return 0;
}

