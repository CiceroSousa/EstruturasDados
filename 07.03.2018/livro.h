typedef struct livro Livro;

Livro* criar(char *titulo, int ano, int tot_pag, float preco);
void acessar(Livro *livro, char *titulo, int *ano, int *tot_pag, float *preco);
void liberar(Livro *livro);
