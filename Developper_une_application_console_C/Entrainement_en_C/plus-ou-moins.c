#include <stdio.h>

#include <stdlib.h>

#include <time.h>

int main() {
  int nombreMystere = 0, nombreUtilisateur = 0, mode = 0, difficulte = 0;
  int compteur = 0;
  int maxNombre = 100;
  int continuerJeu = 1;

  while (continuerJeu) {
    printf("Sélectionnez le mode de jeu :\n");
    printf("1. Joueur solo\n");
    printf("2. Deux joueurs\n");
    scanf("%d", & mode);

    printf("Choisissez le niveau de difficulté :\n");
    printf("1. Facile (1-100)\n");
    printf("2. Moyen (1-1000)\n");
    printf("3. Difficile (1-10000)\n");
    scanf("%d", & difficulte);

    if (difficulte == 1)
      maxNombre = 100;
    else if (difficulte == 2)
      maxNombre = 1000;
    else if (difficulte == 3)
      maxNombre = 10000;
    else {
      printf("Erreur : niveau de difficulté non valide sélectionné !\n");
      return 1;
    }

    if (mode == 1) {
      srand(time(NULL));
      nombreMystere = (rand() % (maxNombre - 1 + 1)) + 1;
    } else if (mode == 2) {
      printf("Joueur 1, veuillez entrer le nombre mystère : ");
      scanf("%d", & nombreMystere);
    } else {
      printf("Erreur : mode de jeu non valide sélectionné !\n");
      return 1;
    }

    do {
      printf("Quel est le nombre ? ");
      scanf("%d", & nombreUtilisateur);

      if (nombreMystere > nombreUtilisateur)
        printf("Il est plus grand !\n\n");
      else if (nombreMystere < nombreUtilisateur)
        printf("Il est plus petit !\n\n");
      else
        printf("Félicitations, vous avez trouvé le nombre mystère en %d tentatives !\n\n", compteur);

      compteur++;
    } while (nombreUtilisateur != nombreMystere);

    printf("Souhaitez-vous jouer à nouveau ? (1 = oui, 0 = non) ");
    scanf("%d", & continuerJeu);
  }

  return 0;
}
