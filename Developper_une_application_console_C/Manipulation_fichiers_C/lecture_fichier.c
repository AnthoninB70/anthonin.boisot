#include <stdio.h>

int main() {
    FILE *fichier;
    char contenu[200];

    fichier = fopen("fichier.txt", "r");

    if (fichier == NULL) {
        printf("Erreur lors de l'ouverture du fichier\n");
        return 1;
    }

    while (fgets(contenu, 200, fichier) != NULL) {
        printf("%s", contenu);
    }

    fclose(fichier);

    return 0;
}
