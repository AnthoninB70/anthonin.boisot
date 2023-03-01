#include <stdio.h>

int main() {
  int age, argent;
  printf("Veuillez entrer votre âge : ");
  scanf("%d", & age);
  printf("Veuillez entrer le montant d'argent que vous possédez : ");
  scanf("%d", & argent);
  if (age <= 10 && argent <= 1000) {
    printf("Hors de ma vue jeune misérable\n");
  } else if (age <= 10 && argent >= 1001 && argent <= 10000) {
    printf("Salut jeune\n");
  } else if (age <= 10 && argent >= 10001 && argent <= 100000) {
    printf("Bienvenue jeune Picsou\n");
  }
  if (age >= 11 && age <= 20 && argent <= 1000) {
    printf("Hors de ma vue, adolescent misérable\n");
  } else if (age >= 11 && age <= 20 && argent >= 1001 && argent <= 10000) {
    printf("Salut adolescent\n");
  } else if (age >= 11 && age <= 20 && argent >= 10001 && argent <= 100000) {
    printf("Bienvenue, adolescent Picsou\n");
  }
  if (age >= 21 && age <= 30 && argent <= 1000) {
    printf("Hors de ma vue jeune adulte misérable\n");
  } else if (age >= 21 && age <= 30 && argent >= 1001 && argent <= 10000) {
    printf("Salut jeune adulte\n");
  } else if (age >= 21 && age <= 30 && argent <= 10001 && argent <= 100000) {
    printf("Bienvenue jeune adulte Picsou\n");
  }
  if (age >= 31 && age <= 40 && argent <= 1000) {
    printf("Hors de ma vue vieux misérable\n");
  } else if (age >= 31 && age <= 40 && argent >= 1001 && argent <= 10000) {
    printf("Salut vieux\n");
  } else if (age >= 31 && age <= 40 && argent >= 10001 && argent <= 100000) {
    printf("Bienvenue vieux Picsou\n");
  }
  return 0;
}
