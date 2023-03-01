#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    FILE *fptr;
    char text[] = "Lorem ipsum dolor sit amet, consectetur adipiscing elit. Mauris ullamcorper porttitor nulla eu scelerisque. Nullam molestie sed est sagittis eleifend. Nam commodo arcu ut nibh facilisis, non molestie quam rutrum. Aliquam erat volutpat. Fusce sollicitudin justo vitae augue ultrices, rhoncus suscipit ligula consectetur. Nulla tincidunt magna rhoncus velit maximus porttitor.";
    int result;

    fptr = fopen("fichier.txt", "w");
    if (fptr == NULL) {
        printf("Erreur : impossible d'ouvrir le fichier.");
        exit(1);
    }

    result = fprintf(fptr, "%s", text);
    if (result != strlen(text)) {
        printf("Erreur : impossible d'écrire dans le fichier.");
        exit(1);
    }

    fclose(fptr);

    return 0;
}
