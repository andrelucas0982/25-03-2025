#include <stdio.h>

int main(){
	
	
	int A, i, soma = 0;
	
	puts("Digite um numero: ");
	scanf("%d", &A);
	
	for(i = 1; i <= A; i++){
		
		if(i % 2 == 1){
		soma += i;
	    }
	}
	
	printf("A soma dos numeros impares e igual a: %d\n", soma);
	
	return 0;
}
