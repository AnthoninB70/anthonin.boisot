#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_SIZE 100

typedef struct Personne {
  char prenom[MAX_SIZE];
  char nom[MAX_SIZE];
  int age;
  double poids;
  double taille;
  char genre[MAX_SIZE];
} Personne;

void ajouter_entree(FILE *fichier) {
  Personne personne;

  printf("Entrez votre prénom : ");
  scanf("%s", personne.prenom);

  printf("Entrez votre nom : ");
  scanf("%s", personne.nom);

  printf("Entrez votre âge : ");
  scanf("%d", &personne.age);

  printf("Entrez votre poids (en kg) : ");
  scanf("%lf", &personne.poids);

  printf("Entrez votre taille (en cm) : ");
  scanf("%lf", &personne.taille);

  printf("Entrez votre genre (homme/femme) : ");
  scanf("%s", personne.genre);

  double taille_m = personne.taille / 100.0;
  double imc = personne.poids / (taille_m * taille_m);

  fprintf(fichier, "%s %s est un(e) %s. Il mesure %.2lf cm, pèse %.2lf kg et son IMC est de %.2lf.\n", personne.prenom, personne.nom, personne.genre, personne.taille, personne.poids, imc);
}

void afficher_imc(FILE *fichier) {
  char ligne[MAX_SIZE];
  while (fgets(ligne, MAX_SIZE, fichier) != NULL) {
    printf("%s", ligne);
  }
}

int main() {
  int choix;

  FILE *fichier = fopen("donnees.txt", "a+");
  if (fichier == NULL) {
    printf("Impossible d'ouvrir le fichier.");
    return 1;
  }

  printf("Que souhaitez-vous faire ?\n");
  printf("1. Consulter les IMC\n");
  printf("2. Ajouter une nouvelle entrée\n");
  scanf("%d", &choix);

  if (choix == 1) {
    afficher_imc(fichier);
  }
  else if (choix == 2) {
    ajouter_entree(fichier);
  }
  else {
    printf("Choix invalide.");
    return 1;
  }

  fclose(fichier);
  return 0;
}
