#include <stdio.h>

int fibonacci (int);

// Termo:		1, 2, 3, 4, 5, 6, 7,  8,  9,  10, 11, 12
// Fibonacci:	1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144

int main(){
	
	int n;
	
	printf("Digite um numero inteiro para retornar o N-esimo termo da sequencia de Fibonacci: ");
	scanf("%d", &n);
	
	printf("\nO %d' termo da sequencia de Fibonacci eh: %d\n", n, fibonacci(n));
	
	return(0);
}

int fibonacci (int n){

	if(n==0){
		return(0);
	}
	if(n==1){
		return(1);
	}
	else{
		return(fibonacci(n-1) + fibonacci(n-2));
	}
}
