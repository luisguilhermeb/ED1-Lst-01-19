#include <stdio.h>

int calcularFat (int);

int main(){
	
	int n;
	
	printf("Informe um numero inteiro, positivo e impar para retornar o seu fatorial duplo : ");
	scanf("%d", &n);
	
	printf("\nO fatorial duplo de %d eh: %d\n", n, calcularFat(n));
	
	return(0);
}

int calcularFat(int n){

	if(n == 1) {
		return 1;
	}
	if(n % 2 == 0) {
		return 0;
	}
	return (n*calcularFat(n - 2));
}
