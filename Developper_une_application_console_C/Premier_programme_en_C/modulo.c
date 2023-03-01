#include <stdio.h>

int main() {
  int a, b, result;

  printf("Veuillez entrer deux nombres : ");
  scanf("%d%d", & a, & b);

  result = a % b;
  printf("Le résultat du modulo est : %d\n", result);

  return 0;
}
