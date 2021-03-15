#include <stdio.h>

int calcularFatNum(int), calcularFatDeno(int);

int main(){
	
	int n, n2;
	
	printf("Informe um numero inteiro e positivo para retornar o seu fatorial quadruplo: ");
	scanf("%d", &n);
	
	n2=n;
	n*=2;
	
	printf("\nO fatorial quadruplo de %d eh: %d\n", n/2, calcularFatNum(n)/calcularFatDeno(n2));
	
	return(0);
}

int calcularFatNum(int n){
	
	if(n==0){
		return(1);
	}
	else{
		return(n*calcularFatNum(n-1));
	}
}

int calcularFatDeno(int n2){
	
	if(n2==0){
		return(1);
	}
	else{
		return(n2*calcularFatDeno(n2-1));
	}
}
