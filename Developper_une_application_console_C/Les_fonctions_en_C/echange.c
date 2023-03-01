#include <stdio.h>

void echange(int * a, int * b) {
  int temp = * a;
  * a = * b;
  * b = temp;
}

int main() {
  int x = 3;
  int y = 5;

  printf("Valeurs initiales : x = %d, y = %d\n", x, y);

  echange( & x, & y);

  printf("Valeurs finales : x = %d, y = %d\n", x, y);

  return 0;
}
