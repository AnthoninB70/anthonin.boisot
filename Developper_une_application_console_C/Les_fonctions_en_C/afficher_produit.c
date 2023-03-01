#include <stdio.h>

void afficher_produit(int a, int b) {
  printf("Le produit de %d et %d est %d\n", a, b, a * b);
}

int main() {
  int x = 2, y = 3;

  afficher_produit(x, y);

  return 0;
}
