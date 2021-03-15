#include <stdio.h>

int calcularFat (int);

int main(){
	
	int n;
	
	printf("Digite um numero inteiro para retornar o seu fatorial: ");
	scanf("%d", &n);
	
	printf("\nO fatorial de %d eh: %d\n", n, calcularFat(n));
	
	return(0);
}

int calcularFat(int n){

	if(n==0){
		return(1);
	}
	else{
		return(n*calcularFat(n-1));
	}
}
