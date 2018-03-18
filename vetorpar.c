#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int vetor[6], resto,p,n=0;//vetor com 7 posicoes.
	int i=0,np=0, ni=0; // vaiaveis 
	
	// variavel zerada.
	//laço de repetição.
	for(i=0;i<7;i++){
	printf("Digite o valores das posicoes %d=", i);
	scanf("%d", &vetor[i]);
	}
	printf("\n\n");// impressão depoois que o usuario digitou.
	printf("impressao de numeros digitados pelo usuario!!!\n");
	
	// contar os numeros pares
	for(i=0;i<7;i++){
	if((vetor[i]%2)==0){
    printf("As posicoes pares e: %d\n",vetor[i]);
	}
}
    
	

	return 0;
}
	
	

