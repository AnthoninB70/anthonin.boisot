#include <stdio.h>

#include <math.h>

void affiche_carre(double x) {
  double carre = pow(x, 2);
  printf("Le carré de %lf est %lf\n", x, carre);
}

int main() {
  double nombre;

  printf("Entrez un nombre réel : ");
  scanf("%lf", & nombre);

  affiche_carre(nombre);

  return 0;
}
