#include <stdio.h>

#define TAM 100

int main(){
	int vetor[TAM];
	int maiorvalor = 1, i, j;
	float media, soma = 0;
	
	for(i = 0; i < TAM; i++){
		do{
			printf("Digite o valor da posicao %i do vetor: ", i + 1);
			scanf("%i", &vetor[i]);
			
			if(vetor[i] < 1){
				printf("ERRO: O valor nao pode ser nulo ou negativo.\n");
			}
		} while(vetor[i] < 1);
	}
	
	int intervalos = TAM / 10;	
	
	for(i = 0; i < intervalos; i++){
		maiorvalor = 1;
		for(j = 0; j < 10; j++){
		 	if(vetor[j+(i*10)] > maiorvalor){	
				maiorvalor = vetor[j+(i*10)];
			}
		}
		
		printf("\nMaior valor do %io intervalo de 10 numeros: %i", i + 1, maiorvalor);
		soma = soma + (float)maiorvalor;	
	}
	
	media = soma / intervalos;
	printf("\n\nMedia dos 10 maiores valores: %.2f", media);
	
	return 0;
}