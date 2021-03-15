#include <stdio.h>

int superFatorial (int);

int main(){
	
	int n;
	
	printf("Informe um numero inteiro e positivo para retornar o seu superfatorial: ");
	scanf("%d", &n);
	
	printf("\nO superfatorial de %d eh: %d\n", n, superFatorial(n));
	
	return(0);
}

int superFatorial(int n){
	if(n==0||n==1){
		return (1);
	}
	int aux(int n){
		if(n==0||n==1){
			return (1);
		}
		return (n*aux(n-1));
	}
	return (aux(n)*superFatorial(n-1));

}
