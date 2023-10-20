#include <stdio.h>
#include "bst.h"

int main () {
  Tree t = createTree();
  link x;
  insert(t, 99);
  insert(t, 88);
  insert(t, 77);
  insert(t, 55);
  insert(t, 66);
  insert(t, 111);

  imprime(t, "avl");

  return 0;
}
