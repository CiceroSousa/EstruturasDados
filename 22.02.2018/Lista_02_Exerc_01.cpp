// Complemente o programa abaixo para que escreva o número 10 na tela, utilizando X e P.

#include <stdio.h>
#include <locale>

int main() {
	int x, *p;
	p = &x; x = 10;
	setlocale (LC_ALL,"");
// Imprime o endereço da variavel X que foi armazenada em P.
	printf ("\nO endereço de x é: %p", &p);
// Imprime o conteudo da variavel X utilizando P.
	printf ("\nO conteudo de x é: %d", *p);

return(0);
}
