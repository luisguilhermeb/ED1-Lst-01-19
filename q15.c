#include <stdio.h>

float CalculaSerie(int n);

int main()
{
    int n;

    printf("Digite um valor maior que 0 para calcular o somatorio da serie S: ");
    scanf("%d", &n); 

    printf("\nO valor do somatorio da serie de %d termos eh= %.2f\n", n, CalculaSerie(n));

    return (0);
}
float CalculaSerie(int n){
    if(n == 1){
    	return 2;
	}
    else{
    	return ((1+((float)n*n))/n + CalculaSerie(n-1));
	}
}
