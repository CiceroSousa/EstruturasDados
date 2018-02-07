// Lê 4 numeros inteiros, calcula e imprime a media arimétrica;
// Aprovado para media >= 6 e reprovado para media < 6.

#include <stdio.h>

int main() {
	int n1, n2, n3, n4, soma;
	float media=0;
//	for (i=1; i<=4; i++)
//	printf("Entre com a ",i," ° nota: ");
//	scanf("%i", &n[i]);
	printf("Informe as 4 notas do aluno: ");
	scanf("%i%i%i%i", &n1, &n2, &n3, &n4);
	media = (n1 + n2 + n3 + n4)/4;
	}
	{
	if media>= 6
		printf("Aluno Aprovado - media: &d", media);
	else
		printf("Aluno Reprovado - media: &d", media);
}
