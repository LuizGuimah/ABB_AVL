#include <stdio.h>

#define FRACASSO 0
#define SUCESSO 1

//definicao de uma struct de dados que pode ser substituida
typedef struct info{
    int chave;
    char* palavra;
}info;

//implementação do descritor da Árvore Binaria de Busca
typedef struct ABB
{
    int nElementos; //Guarda a quantidade de nos da arvore
    struct ABB *raiz;//ponteiro para a raiz da arvore
}ABB;

//declaração da struct NO da ABB com referência para o pai e para os nos esquerdo e direito
typedef struct NoABB{
    info dados;
    struct NoABB *pai;
    struct NoABB *esq;
    struct NoABB *dir;
}NoABB;

void apagaNoABB(NoABB *p);
int calcNumFolhas(NoABB *p);
ABB * criaABB(int tamInfo);
ABB * destroiABB(ABB *p);
void reiniciaABB(ABB *p);
int buscaABB(ABB *pa, info *destino, int chaveDeBusca);
int insereABB(ABB *p, info *novoReg);
int removeABB(ABB *p, int chaveDeBusca, info *copia);
int testaVaziaABB(ABB *p);
int numFolhas(ABB *p);
int emOrdem(ABB *pa);
int posOrdem(ABB *pa);
int preOrdem(ABB *pa);