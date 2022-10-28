struct lista {
  int conteudo;
  struct lista *prox;
  struct lista *ant;
};

typedef struct lista *fila; // célula

fila criafila(void);

void insere(fila f, int x);

int tiradafila(fila f);

int vazia(fila f);

