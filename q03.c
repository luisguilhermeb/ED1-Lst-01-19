#include <stdio.h>

int nCubo(int);

int main(){
	
	int n;
	
	printf("Digite um numero inteiro para retornar a soma de seus primeiros N cubos: ");
	scanf("%d", &n);
	
	printf("\nA soma dos primeiros %d cubos eh: %d\n", n, nCubo(n));
	
	return(0);
}
int nCubo(int n){

	int	cubo=n*n*n;

	if(cubo==0){
		return(0);
	}
	if(cubo==1){
		return(1);
	}
	else{
		return(cubo + nCubo(n-1));
	}	
}
