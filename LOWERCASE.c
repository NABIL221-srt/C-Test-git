#include <stdio.h>

// Déclaration de la fonction lower
char lower(char c);

int main() {
    // Déclare un tableau de caractères à tester
    char testChars[] = {'A', 'Z', 'a', 'm', '!', '5'};
    // Calcule le nombre d'éléments dans le tableau testChars
    int n = sizeof(testChars) / sizeof(testChars[0]);

    // Boucle à travers chaque caractère du tableau testChars
    for (int i = 0; i < n; ++i) {
        // Utilise printf pour afficher chaque caractère original et sa conversion en minuscule
        printf("Le caractere '%c' converti en minuscule est '%c'\n", testChars[i], lower(testChars[i]));
    }

    // Retourne 0 pour indiquer que le programme s'est terminé avec succès
    return 0;
}

// Définition de la fonction lower
char lower(char c) {
    // Utilise l'opérateur ternaire pour vérifier si c est une lettre majuscule ASCII
    // Si c'est le cas, convertit en minuscule en ajoutant 32
    // Sinon, renvoie c inchangé
    return (c >= 'A' && c <= 'Z') ? c + 32 : c;
}
