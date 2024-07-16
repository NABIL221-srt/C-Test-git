#include<stdio.h>

int htoi(char s[]) /* convert hex string s to integer */
{
    int i, n;
    char c;

    n = 0;
    // Initialise la variable de résultat à 0

    for (i = 0; (c = s[i]) != '\0'; ++i) {
        // Boucle à travers chaque caractère de la chaîne jusqu'au caractère nul

        n *= 16;
        // Multiplie le résultat actuel par 16 (déplacement d'un chiffre hexadécimal à gauche)

        if (c >= '0' && c <= '9') {
            n += c - '0';
            // Si le caractère est un chiffre (0-9), convertit-le en valeur numérique
        } else if (c >= 'a' && c <= 'f') {
            n += c - 'a' + 10;
            // Si le caractère est une lettre minuscule (a-f), convertit-le en valeur numérique
            // (a = 10, b = 11, ..., f = 15)
        } else if (c >= 'A' && c <= 'F') {
            n += c - 'A' + 10;
            // Si le caractère est une lettre majuscule (A-F), convertit-le en valeur numérique
            // (A = 10, B = 11, ..., F = 15)
        }
    }
    return n;
    // Retourne le résultat final
}



int main() {
    char hex1[] = "7ed1a";
    char hex2[] = "1a3f";
    char hex3[] = "ABC";

    printf("Le nombre hexadécimal %s en décimal est %d\n", hex1, htoi(hex1));
    // Affiche : Le nombre hexadécimal 7ed1a en décimal est 519450

    printf("Le nombre hexadécimal %s en décimal est %d\n", hex2, htoi(hex2));
    // Affiche : Le nombre hexadécimal 1a3f en décimal est 6719

    printf("Le nombre hexadécimal %s en décimal est %d\n", hex3, htoi(hex3));
    // Affiche : Le nombre hexadécimal ABC en décimal est 2748

    return 0;
}