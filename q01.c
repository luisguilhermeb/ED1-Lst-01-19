#include <stdio.h>

int somatorio(int);

int main(){
	
	int n;
	
	printf("Digite um numero inteiro e positivo p/ exibir o somatorio de 1 a N: ");
	scanf("%d", &n);
	
	printf("\nO somatorio de 1 ate %d eh: %d\n", n, somatorio(n));
	
	return(0);
}

int somatorio(int n){
		
		if (n==0){
			return(n);
		}
		else{
		   	return (n + somatorio(n-1));
		}
}
