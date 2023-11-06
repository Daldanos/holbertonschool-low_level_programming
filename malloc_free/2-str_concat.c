#include "main.h"
#include <stdlib.h>
/**
 * str_concat - Concatenates two strings
 * @s1: string
 * @s2: string
 * Return: Pointer to concatenated string
 */

char *str_concat(const char *s1, const char *s2) {
    unsigned int len1 = 0, len2 = 0;
    char *concatenated;
    unsigned int i = 0, j = 0;

    if (s1 != NULL) {
        while (s1[len1] != '\0')
            len1++;
    }

    if (s2 != NULL) {
        while (s2[len2] != '\0')
            len2++;
    }

    concatenated = (char *)malloc((len1 + len2 + 1) * sizeof(char));

    if (concatenated == NULL)
        return NULL;

    for (i = 0; i < len1; i++) {
        concatenated[i] = s1[i];
    }

    for (j = 0; j < len2; j++) {
        concatenated[i + j] = s2[j];
    }

    concatenated[len1 + len2] = '\0';

    return concatenated;
}