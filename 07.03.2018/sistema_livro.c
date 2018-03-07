/*
Criar um TAD que armazena nome e nota de um aluno e as operações:
criar novo aluno, acessar dados do aluno, liberar memória.
Criar uma aplicação que usa o TAD criado para ler a
média e a idade de 10 alunos. Guardar estes aluno em um vetor.
Depois, estes dados devem ser exibidos.
Depois imprimir a média da turma
*/

#include <stdio.h>
#include <stdlib.h>
#include "livro.c"

int main() {
	Livro *livro, turma[3]; 
	char titulo[30];
	int ano,tot_pag;
	float preco,media,soma;
	int contador;
	for(contador=0;contador<3;contador++){
		printf("Nome do livro: ");
		fflush(stdin);
		gets(titulo);
		printf("Ano de edição: ");
		scanf("%i",&ano);
		printf("Total de paginas: ");
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
		printf("\nNome do livro: %s, Ano de edição: %i, Total de pag: %i, preco: R$ %.2f",titulo,ano,tot_pag,preco);
		soma = soma + tot_pag;
	}
	media = soma/3;
	printf("\n\nMedia de paginas = %.2f",media);
	return 0;
}
