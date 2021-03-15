#include <stdio.h>
 
int menor(int vet[], int tamanho);
 
int main(){
	
	int tamanho, i;
	
	printf("Digite um tamanho para o vetor: ");
	scanf("%d", &tamanho);
	
	int vet[tamanho];
	
	printf("\n");
	
	for(i=0; i<tamanho; i++){
		printf("Digite o %d' valor do vetor: ", i+1);
		i-1;
		scanf("%d", &vet[i]);
	}
 
	int min=menor(vet, tamanho);
 
	printf("\nO menor valor do vetor eh: |%d|\n", min);
 
	return 0;
}
int menor(int vet[], int tamanho){
    if(tamanho==1)
        return vet[0];
 
    int m= menor(vet+1, tamanho-1);
    	return (vet[0]<m)?vet[0]:m;
}
