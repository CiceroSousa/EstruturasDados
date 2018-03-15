/*
Criar um TAD que armazena os dados pesquisados de 500 pessoas com as sequintes informações:
sexo, idade, quantidade de filhos e salário; e tbm as operações:
criar nova ficha, acessar dados da ficha e liberar memória.
Criar uma aplicação que usa o TAD criado para ler os dados;
Guardar estes dados em um vetor.
Depois imprimir a média de salários do arquivo
(Para testar pode ser 5 pessoas).
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <locale.h>
#include "senso.c"

int main() {
	setlocale(LC_ALL,"portuguese");
	Senso *senso, habitante[5]; 
	char sexo;
	int idade,quant_filho,contador;
	float salario,media,soma;
	
	for(contador=0;contador<5;contador++){
		printf("Digite o sexo (M/F): ");
		fflush(stdin);
		scanf("%c",&sexo);
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
