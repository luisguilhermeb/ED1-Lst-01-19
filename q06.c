#include <stdio.h>

int Multip_Rec(int,int);

int main(){
	
	int n1, n2;
	printf("Digite um multiplicando: ");
	scanf("%d", &n1);
	printf("\nDigite um multiplicador: ");
	scanf("%d", &n2);
	
	printf("\nResultado: %d*%d = %d\n", n1, n2, Multip_Rec(n1,n2));
	
	return(0);
}
int Multip_Rec(n1,n2){
	if(n1==0 || n2==0){
		return(0);
	}
	else{
		return(n1+Multip_Rec(n1, n2-1));
	}
}
