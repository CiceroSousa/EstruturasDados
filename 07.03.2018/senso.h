typedef struct senso Senso;

Senso* criar(char sexo, int idade, float salario, int quant_filho);
void acessar(Senso *senso, char *sexo, int *idade, float *salario, int *quant_filho);
void liberar(Senso *senso);

