#include <stdio.h>
#include <string.h>

char *humeurs[] = {"heureux", "content", "triste", "mélancolique", "peiné"};

int mot_present(char *mot, char *chaine) {
    char *p = strstr(chaine, mot);
    if (p != NULL) {
        return 1;
    }
    else {
        return 0;
    }
}

int main() {
    char *mots_trouves[100];
    int nb_mots_trouves = 0;

    char chaine[] = "Bonjour, l'utilisateur présente l'humeur : je suis content mais un peu mélancolique. Il est né le 12/01/1998";

    for (int i = 0; i < sizeof(humeurs)/sizeof(char*); i++) {
        if (mot_present(humeurs[i], chaine)) {
            mots_trouves[nb_mots_trouves] = humeurs[i];
            nb_mots_trouves++;
        }
    }

    printf("Mots trouvés :\n");
    for (int i = 0; i < nb_mots_trouves; i++) {
        printf("%s\n", mots_trouves[i]);
    }

    return 0;
}
