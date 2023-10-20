#ifndef BST_H
#define BST_H


typedef struct node * link;
struct node {
  link l;
  link r;
  int item;
  int N;      // quantidade de nos na subarvore
  int id;     // id da nó
  int height; // altura da sub�rvore enraizada neste n�
};

typedef struct tree {
  link head; // raiz
  link z;    // nó externo
} * Tree;

Tree createTree();


link rotR (Tree t, link h);

link rotL (Tree t, link h);

link search (Tree h, int query);

link insert (Tree h, int item);

int height(link h);

int max(int a, int b);

int getBalance(link h);

void imprimeEmOrdem (Tree t, link h);
void imprimePosOrdem (Tree t, link h);
void imprimePreOrdem (Tree t, link h, int k);

link AVLinsert (Tree t,link h, link n);

void imprime(Tree a, char *s);
 
#endif 


