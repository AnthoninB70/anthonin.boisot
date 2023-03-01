#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* concat(char* str1, char* str2);

int main() {
    char* mood = (char*) malloc(100 * sizeof(char));
    char* birthdate = (char*) malloc(100 * sizeof(char));

    printf("Entrez votre humeur : ");
    fgets(mood, 100, stdin);
    printf("Entrez votre date de naissance : ");
    fgets(birthdate, 100, stdin);

    char* final_string = (char*) malloc(200 * sizeof(char));
    char* temp_string = (char*) malloc(200 * sizeof(char));
    strcpy(temp_string, "Bonjour, l'utilisateur présente l'humeur : ");
    strcat(temp_string, mood);
    strcat(temp_string, ". Il est né le ");
    strcat(temp_string, birthdate);
    strcpy(final_string, temp_string);

    printf("%s", final_string);

    free(mood);
    free(birthdate);
    free(final_string);
    free(temp_string);

    return 0;
}
