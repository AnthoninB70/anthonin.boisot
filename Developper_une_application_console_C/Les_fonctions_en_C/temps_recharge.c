#include <stdio.h>

int temps_recharge(int puissance) {
  int temps = 0;

  if (puissance > 0 && puissance <= 100) {
    temps = 30;
  } else if (puissance > 100 && puissance <= 200) {
    temps = 15;
  } else if (puissance > 200 && puissance <= 300) {
    temps = 5;
  }

  return temps;
}

int main() {
  int puissance = 200;
  int temps = temps_recharge(puissance);

  printf("Le temps de recharge pour une puissance de %d Kilowatts est de %d minutes.\n", puissance, temps);

  return 0;
}
