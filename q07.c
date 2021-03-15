#include <stdio.h>

int sequencia(int, int);

int main(){
	
	int n, aux=0;
	
	printf("Informe um numero inteiro e positivo para imprimir de 0 a N: ");
	scanf("%d", &n);
	
	printf("\n\nA sequencia crescente de numeros inteiros de 0 ate %d eh:  ", n);
	printf("%d. \n", sequencia(aux, n));
	
	return (0);
}

int sequencia(aux, n){

	if(n==0){
		return(aux);
	}
	else{
		return(printf("%d, ", aux), sequencia(aux+1, n-1));
	}
}
