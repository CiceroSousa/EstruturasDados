#include <locale.h>
#include <stdio.h>
#include "pilha.c"

void EmpilhaeDesempilhaImprimindo (pilha *p, char a[]){
	int c;
	char letra;
	for (c=0; a[c] !='\0'; c++){
		push (p,a[c]);
	}
	while (!empty(p)){
		letra = pop(p);
		printf ("%c",letra);
	}
}


int main() {
	setlocale(LC_ALL,"");
	char palavra[100];
	printf("Digite a palavra a ser invertida: ");
	gets(palavra);
	Pilha *pilha = criapilha();
	//empilharCaracteresDaPalavraLida(pilha,palavra);
	//desempilharEImprimir(pilha);
	EmpilhaeDesempilhaImprimindo (pilha,palavra);
	return 0;
}
