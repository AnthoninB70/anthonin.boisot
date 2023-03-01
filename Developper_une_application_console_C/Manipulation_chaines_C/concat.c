#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* concat(char* str1, char* str2) {
    char* result = (char*) malloc((strlen(str1) + strlen(str2) + 1) * sizeof(char));
    strcpy(result, str1);
    strcat(result, str2);
    return result;
}
