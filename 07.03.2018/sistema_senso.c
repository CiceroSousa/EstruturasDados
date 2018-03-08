#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "senso.c"

int main() {
	setlocale(LC_ALL,"portuguese");
	Senso *senso, habitante[5]; 
	char sexo[2];
	int idade,quant_filho,contador;
	float salario,media,soma;
	
	for(contador=0;contador<5;contador++){
		printf("Digite o sexo (M/F): ");
		fflush(stdin);
		gets(sexo);
		printf("Digite a idade: ");
		scanf("%i",&idade);
		printf("Digite a renda: R$ ");
		scanf("%f",&salario);
		printf("Número de filhos: ");
		scanf("%i",&quant_filho);		
		senso = criar(sexo,idade,salario,quant_filho);
		habitante[contador] = *senso;
	}
	soma=0;
	for(contador=0;contador<5;contador++){
		senso = &habitante[contador];
		acessar(senso,&sexo,&idade,&salario,&quant_filho);
		soma = soma + salario;
	}
	media = soma/5;
	printf("\n\nRenda Media por habitante R$ %.2f",media);
	return 0;
}
