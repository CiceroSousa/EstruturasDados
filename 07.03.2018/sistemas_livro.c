/*
Criar um TAD que armazena nome do livro, ano de edi��o, total de paginas e pre�o do livro e as opera��es:
criar novo livro, acessar dados do livro, liberar mem�ria.
Criar uma aplica��o que usa o TAD criado para ler os dados
de 10 livros. Guardar estes dados em um vetor.
Depois, estes dados devem ser exibidos.
Depois imprimir a m�dia de paginas dos livros do arquivo.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "livro.c"

int main() {
	setlocale(LC_ALL,"");
	Livro *livro, turma[3]; 
	char titulo[30];
	int ano,tot_pag;
	float preco,media,soma;
	int contador;
	for(contador=0;contador<3;contador++){
		printf("Nome do livro: ");
		fflush(stdin);
		gets(titulo);
		printf("Ano de edi��o: ");
		scanf("%i",&ano);
		printf("Total de p�ginas: ");
		scanf("%i",&tot_pag);
		printf("Valor do livro: R$ ");
		scanf("%f",&preco);
		livro = criar(titulo,ano,tot_pag,preco);
		turma[contador] = *livro;
	}
	soma=0;
	for(contador=0;contador<3;contador++){
		livro = &turma[contador];
		acessar(livro,titulo,&ano,&tot_pag,&preco);
		printf("\nNome do livro: %s, Ano de edi��o: %i, Total de pag: %i, Pre�o: R$ %.2f",titulo,ano,tot_pag,preco);
		soma = soma + tot_pag;
	}
	media = soma/3;
	printf("\n\nMedia de paginas = %.2f",media);
	return 0;
}

int idade, char sexo, float salario, int quant_filho
