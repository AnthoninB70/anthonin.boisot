#include <stdio.h>

int main() {
  float taille, poids;

  printf("Veuillez entrer votre taille en mètres : ");
  scanf("%f", & taille);
  printf("Veuillez entrer votre poids en kilogrammes : ");
  scanf("%f", & poids);

  float imc = poids / (taille * taille);

  printf("Votre IMC est : %.2f\n", imc);

  return 0;
}
