#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
//***************************************************************
//Instituto Federal de S�o Paulo - Campus Sert�ozinho.
//Disciplina .....:M2LPBA
//Programa��o de Computadores e Dispositivos M�veis
//Aluno....: Edilson de Andrade Amorim Junior.
//****************************************************************/



	
	// declara��o de vari�veis.
	int vet[5];
	int i; 
    int	soma=0;
    int mult=1;
	
	
	// inserindo valores no vetor de 0 a 4 totalizando 5 posi��es.
	for(i=0;i<5;i++){
	printf("Digite o valor do vetor %d=", i);
	scanf("%d", &vet[i]);
	}
    // condi��o do vetor.
    
    for(i=0;i<5;i++){
    	soma=soma+vet[i];
    	
    	
    /* Se o valor da soma � maior ou igual a zero � positivo.
	sen�o, � negativo */
	    
		}if(soma>=0){
		printf("Soma de valor positivo!!\n");
	}else{
		printf("Soma de valor negativo!!!\n");
	}
	
	
    
	// imprimindo o resultado da soma.	
	printf("Soma = %d\n", soma);
	
	//Condi��o do vetor.
    for(i=0;i<5;i++){
	    mult=mult*vet[i];
	    
	/* Se o valor da multiplica��o � maior ou igual a zero � positivo.
	sen�o, � negativo */
	    
	    
	}if(mult>=0){
		printf("multiplicacao de valor positivo!!\n");
	}else{
		printf("multiplicacao de valor negativo\n!!!");
	}
	
	//Imprimimdo o total da multiplica��o.
	
	printf("Multiplicacao = %d\n", mult);
	


	return 0;
}
