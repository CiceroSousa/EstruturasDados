#include <string.h>
#include <stdlib.h>
#include "senso.h"

struct senso {
	int idade, quant_filho;
	char sexo;
	float salario;
	
};

Senso* criar(char sexo, int idade, float salario, int quant_filho){
	Senso *s = (Senso*) malloc(sizeof(Senso));
	if(s!=NULL){
		s->sexo=sexo;
		s->idade = idade;
		s->salario = salario;
		s->quant_filho = quant_filho;
	}
	return s;	
}

void acessar(Senso *senso, char *sexo, int *idade, float *salario, int *quant_filho) {
	*sexo =senso->sexo;
	*idade = senso->idade;
	*salario = senso->salario;
	*quant_filho = senso->quant_filho;
}

void liberar(Senso *senso){
	free(senso);
}
