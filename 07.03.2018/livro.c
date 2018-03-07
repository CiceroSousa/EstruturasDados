#include <string.h>
#include <stdlib.h>
#include "livro.h"

struct livro {
	char titulo[30];
	int ano;
	int tot_pag;
	float preco;
};

Livro* criar(char *titulo, int ano, int tot_pag, float preco){
	Livro *a = (Livro*) malloc(sizeof(Livro));
	if(a!=NULL){
		strcpy(a->titulo,titulo);
		a->ano = ano;
		a->tot_pag = tot_pag;
		a->preco = preco;
	}
	return a;	
}

void acessar(Livro *livro, char *titulo, int *ano, int *tot_pag, float *preco) {
	strcpy(titulo,livro->titulo);
	*ano = livro->ano;
	*tot_pag = livro->tot_pag;
	*preco = livro->preco;
}

void liberar(Livro *livro){
	free(livro);
}
