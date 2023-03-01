#include <stdio.h>

void afficher_fruits(int pommes, int poires) {
  printf("Nombre de pommes : %d\n", pommes);
  printf("Nombre de poires : %d\n", poires);
  printf("Nombre total de fruits : %d\n", pommes + poires);
}

int main() {
  int pommes, poires;
  printf("Combien de pommes avez-vous ? ");
  scanf("%d", & pommes);
  printf("Combien de poires avez-vous ? ");
  scanf("%d", & poires);

  afficher_fruits(pommes, poires);
  return 0;
}
