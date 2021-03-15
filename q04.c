#include <stdio.h>

int elevado(int, int);

int main(){
	
	int k, n;
	
	printf("Informe um valor para a base: ");
	scanf("%d", &k);
	printf("\nInforme um valor para o expoente: ");
	scanf("%d", &n);
		
	printf("\nO resultado de %d^%d eh: %d\n", k, n, elevado(k, n));
	
	return(0);
}

int elevado(int k, int n){

	if(n==1){
		return(k);
	}
	if(n==0){
		return(0);
	}
	else{
		return (k*elevado(k, n-1));
	}
}
	
	
	
