#include <stdio.h>

int SomaSerie(int, int, int);

int main(){
	
	int i, j ,k;
	
    printf("Informe o intervalo [i]: ");
    scanf("%d", &i);
    
    printf("\nInforme o intervalo [j]: ");
    scanf("%d", &j);

    printf("\nInforme o incrimento[k]: ");
    scanf("%d", &k);

    printf("\n");
    
    printf("O resultado da soma do intervalo [i, j] com o incremento [k] eh= %d\n", SomaSerie(i, j, k)); 
	
	return(0);
}
int SomaSerie(int i, int j, int k){
	
	int soma=0;
	
	if(i<j){
		soma=i+SomaSerie(i+k,j,k);
	}
	else{
		return soma=soma+j;
	}
	
}
