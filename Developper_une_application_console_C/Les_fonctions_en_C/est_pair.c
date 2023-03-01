#include <stdio.h>

int est_pair(int n) {
  if (n % 2 == 0) {
    return 1;
  } else {
    return 0;
  }
}

int main() {
  int n;
  printf("Entrez un entier : ");
  scanf("%d", & n);

  if (est_pair(n)) {
    printf("L'entier %d est pair.\n", n);
  } else {
    printf("L'entier %d est impair.\n", n);
  }

  return 0;
}
