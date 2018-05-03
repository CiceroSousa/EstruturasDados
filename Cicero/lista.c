// tarefa: implementar fun��es para:
// 1. inserir um elemento no final da lista
// 2. excluir o �ltimo elemento da lista
// 3. inserir um elemento na en�sima posi��o
// 4. excluir o en�simo elemento

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>

typedef struct no No;

struct no {
	int info;
	No *next;
};

No *lista = NULL;
          
No* getnode() {
	No* no = (No*) malloc(sizeof(No));
  	if(no==NULL) {
    	printf("\nMem�ria insuficiente!");
	    exit(0);
  	}
  	return no;
}          

void freenode(No *no){
	free(no);
}

void imprimeLista() {
	printf("\n\nConte�do da lista: ");
	No *l = lista;
	while(l!=NULL){
		printf("%i ",l->info);
		l=l->next;
	}
}

int contaQuantidadeDeElementosDaLista() {
	int contador = 0;
	No *l = lista;
	while(l!=NULL){
		contador++;
		l=l->next;
	}
	return contador;
}

void insereNoInicio(int numero){
	No *p = getnode();
    p->info = numero;
	p->next = lista;
	lista = p;
}


void insereNaPosN(int posN, int numero){
	  if (posN < 0){
	  	printf("\nPosi�ao invalida!");
	    exit(0);
		}
		if (posN == 0){
        insereNoInicio(numero);
        return;
		}
	    if(tamanho() >= posN){
	
       
        No *p = getnode();
        
        p->info = numero;
        int cont = 0;//para contagem da posi��o a partir de 0
        while (cont < posN-1)//n-1 para parar uma posi��o antes de n, para fazer a inser��o na posi��o certa
        {
            no = no->next;
            cont++;
            tamanho++;
        }
        aux = no->next;
        no->next = novo;
        novo->next = aux;
    }





int removeDoInicio(){
	No *p = lista;
	lista = p->next;
	int x = p->info;
	freenode(p);
	return x;
}

int main() {
	setlocale(LC_ALL,"");
	int numero;
	int posN;
	int tamanho=0;
	
    do {
        system("cls");
        printf("\nDigite um valor inteiro, ou zero para finalizar: ");
        scanf("%d",&numero);
        tamanho++;
        if(numero!=0) {
            insereNoInicio(numero);  
        }
    } while(numero!=0);   
    imprimeLista();
    	
    	
    	printf("\nDigite a posi�ao para inserir: ");
    	scanf("%d",&posN);
    	printf("\nDigite o elemento a ser inserido: ");
    	scanf("%d",&numero);
    	insereNaPosN(posN, numero);
    	
		    
    
    
	printf("\nRemovendo do in�cio da lista: %i",removeDoInicio());
	
	imprimeLista();
    
	return 0;
}
