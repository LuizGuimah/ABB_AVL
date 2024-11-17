# ABB_AVL

Esta é uma implementação educativa de Arvore Binaria de Busca (ABB) Balanceada do tipo AVL.

A implementação consiste em uma biblioteca definindo um descritor da ABB com referência para o no raiz, um no contendo um campo de informacao genérico e referencias para o no pai, no esquerdo e no direito. Alem dessas definicoes primarias, sao declaradas as seguintes funcoes.


 - ABB * criaABB(int tamInfo);
Reserva certo espaco de memoria e declara o descritor da árvore

 - ABB * destroiABB(ABB *p);
Libera o espaco de memoria ocupado pela arvore

 - void apagaNoABB(NoABB *p);
Recebendo o endereco de um no, efetua a remocao do mesmo realocando as referencias pertinentes

 - int buscaABB(ABB *pa, info *destino, int chaveDeBusca);
Recebendo um valor, compara-o com as chaves dos nos seguindo a logica de busca em arvore
Se chaveDeBusca < chaveAtual entao noAtual = noAtual->esq
Senao noAtual = noAtual->dir
Se chegar em no folha e nao encontrado return FRACASSO

 - int removeABB(ABB *p, int chaveDeBusca, info *copia);
Recebendo um valor de busca efetua uma busca pela arvore e se encontrado, remove o no que contem o valor recebido.

 - int calcNumFolhas(NoABB *p);


 - void reiniciaABB(ABB *p);

 - int insereABB(ABB *p, info *novoReg);

 - int testaVaziaABB(ABB *p);

 - int numFolhas(ABB *p);

 - int emOrdem(ABB *pa);

 - int posOrdem(ABB *pa);

 - int preOrdem(ABB *pa); 