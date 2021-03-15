#include <stdio.h>

void ImprimeSerie(int i, int j, int k);

int main(){
	
    int i, j, k;

    printf("Informe o intervalo [i]: ");
    scanf("%d", &i);
    
    printf("\nInforme o intervalo [j]: ");
    scanf("%d", &j);
    

    printf("\nInforme o incrimento[k]: ");
    scanf("%d", &k);

    
    printf("\nOs valores do intervalo [i, j] com o incremento [k] sao: ");
    ImprimeSerie(i, j, k);

    return (0);
}

void ImprimeSerie(int i, int j, int k){
	
    if(i < j){
        printf("%d, ", i); 
        ImprimeSerie(i+k, j, k); 
    }
    else{
        printf("%d", j);
    }
}
