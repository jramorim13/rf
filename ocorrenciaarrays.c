#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int numeros[8];
	int cont;
	int ocorrencia=0;
	int valor;
	
	printf("Digite um numero:");
	scanf("%d", &valor);
	
	
	for(cont=0; cont<8; cont++){
		printf("Digite o array [%d]:", cont);
		scanf("%d", &numeros[cont]);
	}
	for(cont=0; cont<8; cont++){
		if(numeros[cont]==valor)
		ocorrencia++;
	}
	printf("Existe(m) %d ocorrencia(s)", ocorrencia);
	
	return 0;
}
