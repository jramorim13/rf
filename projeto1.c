#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
//***************************************************************
//Instituto Federal de São Paulo - Campus Sertãozinho.
//Disciplina .....:M2LPBA
//Programação de Computadores e Dispositivos Móveis
//Aluno....: Edilson de Andrade Amorim Junior.
//****************************************************************/



	
	// declaração de variáveis.
	int vet[5];
	int i; 
    int	soma=0;
    int mult=1;
	
	
	// inserindo valores no vetor de 0 a 4 totalizando 5 posições.
	for(i=0;i<5;i++){
	printf("Digite o valor do vetor %d=", i);
	scanf("%d", &vet[i]);
	}
    // condição do vetor.
    
    for(i=0;i<5;i++){
    	soma=soma+vet[i];
    	
    	
    /* Se o valor da soma é maior ou igual a zero é positivo.
	senão, é negativo */
	    
		}if(soma>=0){
		printf("Soma de valor positivo!!\n");
	}else{
		printf("Soma de valor negativo!!!\n");
	}
	
	
    
	// imprimindo o resultado da soma.	
	printf("Soma = %d\n", soma);
	
	//Condição do vetor.
    for(i=0;i<5;i++){
	    mult=mult*vet[i];
	    
	/* Se o valor da multiplicação é maior ou igual a zero é positivo.
	senão, é negativo */
	    
	    
	}if(mult>=0){
		printf("multiplicacao de valor positivo!!\n");
	}else{
		printf("multiplicacao de valor negativo\n!!!");
	}
	
	//Imprimimdo o total da multiplicação.
	
	printf("Multiplicacao = %d\n", mult);
	


	return 0;
}
