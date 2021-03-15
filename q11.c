#include <stdio.h>

int vetorInt(int vet[], int tamanho, int y);

int main(){
	
	int tamanho, i, y=1;
	
	printf("Digite um tamanho para o array: ");
	scanf("%d", &tamanho);
	
	int vet[tamanho];
	
	printf("\n");
	
	for(i=0; i<tamanho; i++){
		printf("Digite o %d' elemento do array: ", i+1);
		i-1;
		scanf("%d", &vet[i]);
	}
	
	printf("\nOs elementos informados sao: \n");
	vetorInt(vet, tamanho, y);
	
	return(0);
}

int vetorInt(int vet[], int tamanho, int y){
	printf("|%d|  ", vet[y-1]);
	if(tamanho>y){
		return vetorInt(vet, tamanho, y+1);
	}
	else{
		return(0);
	}
}
