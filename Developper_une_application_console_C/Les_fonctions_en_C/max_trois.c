#include <stdio.h>

void max_trois(int a, int b, int c) {
  int max = a;

  if (b > max) {
    max = b;
  }
  if (c > max) {
    max = c;
  }

  printf("Le plus grand des trois nombres est : %d\n", max);
}

int main() {
  max_trois(10, 15, 20);
  max_trois(-5, 0, 5);
  max_trois(100, 100, 100);

  return 0;
}
