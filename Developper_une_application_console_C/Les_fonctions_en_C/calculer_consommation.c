#include <stdio.h>

float calculer_consommation(float puissance, float temps) {
  float consommation = puissance * temps;

  if (consommation > 10) {
    printf("Haute consommation\n");
  } else if (consommation >= 5) {
    printf("Consommation normale\n");
  } else {
    printf("Faible consommation\n");
  }

  return consommation;
}

int main() {
  float puissance, temps, consommation;

  printf("Saisir la puissance de l'appareil en kilowatts : ");
  scanf("%f", & puissance);
  printf("Saisir la durée de fonctionnement de l'appareil en heures : ");
  scanf("%f", & temps);

  consommation = calculer_consommation(puissance, temps);
  printf("La consommation de l'appareil est de %.2f kilowattheures\n", consommation);

  return 0;
}
