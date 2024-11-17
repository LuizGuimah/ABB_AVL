#include "avl.h"

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