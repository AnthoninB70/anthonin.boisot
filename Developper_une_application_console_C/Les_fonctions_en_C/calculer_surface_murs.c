#include <stdio.h>

int calculer_surface_murs(int longueur, int hauteur, int nombre_murs) {
  int surface_totale = longueur * hauteur * nombre_murs;
  return surface_totale;
}

int main() {
  int longueur, hauteur, nombre_murs;
  printf("Entrez la longueur du mur : ");
  scanf("%d", & longueur);
  printf("Entrez la hauteur du mur : ");
  scanf("%d", & hauteur);
  printf("Entrez le nombre de murs : ");
  scanf("%d", & nombre_murs);

  int surface_totale = calculer_surface_murs(longueur, hauteur, nombre_murs);
  printf("La surface totale des murs est de %d m².\n", surface_totale);

  return 0;
}
