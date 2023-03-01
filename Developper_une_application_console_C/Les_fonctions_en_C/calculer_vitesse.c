#include <stdio.h>

float calculer_vitesse(float distance, float temps) {
  float vitesse = distance / temps;
  return vitesse;
}

int main() {
  float distance;
  float temps;

  printf("Entrez la distance du trajet en mètres : ");
  scanf("%f", & distance);
  printf("Entrez le temps du trajet en secondes : ");
  scanf("%f", & temps);

  float vitesse = calculer_vitesse(distance, temps);

  if (vitesse >= 15 && vitesse <= 20) {
    printf("Vite\n");
  } else if (vitesse >= 5 && vitesse <= 15) {
    printf("Normale\n");
  } else if (vitesse >= 0 && vitesse <= 5) {
    printf("Lent\n");
  } else {
    printf("Vitesse non valide\n");
  }

  return 0;
}
