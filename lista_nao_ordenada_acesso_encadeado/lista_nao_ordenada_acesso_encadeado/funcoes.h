typedef struct noh *Lista;
cria_lista();
int lista_vazia(Lista *lst);
int insere_elem(Lista *lst, int elem);
int remove_elemento(Lista *lst, int elem);
void imprime(Lista*lst);
