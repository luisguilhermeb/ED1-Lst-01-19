#include <stdio.h>

int sequencia(int, int);

int main(){
	
	int n, aux=0;
	
	printf("Informe um numero inteiro e positivo para imprimir de 0 a N: ");
	scanf("%d", &n);
	
	printf("\n\nA sequencia decrescente de numeros inteiros de %d ate 0 eh:  ", n);
	printf("%d. \n", sequencia(aux, n));
	
	return (0);
}

int sequencia(aux, n){
	
	aux=n;
	if(n==0){
		return(0);
	}
	else{
		return(printf("%d, ", aux), sequencia(n-1, aux-1));
	}
}
