#include <stdio.h>

int sequencia(int, int);

int main(){
	
	int n, aux=0;
	
	printf("Informe um numero inteiro, positivo e par para imprimir de 0 a N: ");
	scanf("%d", &n);
	
	printf("\n\nA sequencia crescente de numeros pares de 0 ate %d eh:  ", n);
	printf("%d. \n", sequencia(aux, n));
	
	return (0);
}

int sequencia(aux, n){

	if(n%2!=0){
		return (0);
	}
	if(n==0){
		return(aux);
	}
	else{
		return(printf("%d, ", aux), sequencia(aux+2, n-2));
	}
}
