#include <stdio.h>

int hiperFat(int);

int main(){
	
	int n;
	
	printf("Informe um numero inteiro e positivo para retornar o seu hiperfatorial: ");
	scanf("%d", &n);
	
	printf("\nO hiperfatorial de %d eh: %d\n", n, hiperFat(n));

	return(0);
}

int hiperFat(int n){
	
	if(n==1||n==0){
		return (1);
	}
	int aux(int n, int k){
		if(k==1){
		return (n);
		}
		return n*aux(n, k-1);
	}
	return aux(n, n)*hiperFat(n-1);
}
