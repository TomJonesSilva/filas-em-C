#include "fila.h"
#include <stdio.h>
#include <stdlib.h>

// cria uma fila
// e devolve a nova fila criada
fila criafila(void) {

  fila novo = malloc(sizeof(struct lista));
  novo->ant = NULL;
  novo->prox = NULL;
  return novo;
}

// recebe um fila f e um inteiro x
// e insere o inteiro x no final da fila
void insere(fila f, int x) {
  fila novo = criafila();
  novo->conteudo = x;
  if (f->prox == NULL) {
    novo->prox = f->prox;
    novo->ant = f;
  }
  fila no = f;
  while (no->prox != NULL) {
    no = no->prox;
  }
  novo->ant = no;
  no->prox = novo;
}
// recebe uma fila f e remove o inteiro da primeira aposição
// retorna 1 se removel e 0 se nao
int tiradafila(fila f) {
  fila no = f->prox;
  f->prox = no->prox;

  return 1;
}
// recebe uma fila f e verifica se ela contem algum inteiro
// e retorna 1 se estiver vazia e 0 se nao estiver
int vazia(fila f) {
  if (f->prox == NULL)
    return 1;
  else
    return 0;
}
