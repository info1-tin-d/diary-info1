#include <stdio.h>


int main(int argc, char *argv[]) {
    double x, y;
    if (argc < 3) {
        printf("Erreur: blabla\n");
        return 2;
    }
    if (sscanf(argv[1], "%lf", &x) != 1 || sscanf(argv[2], "%lf", &y) != 1) {
        return 1;
    }
    int a = 100;
    int b = 25;
    int c = 5;

    if (argc > 3) {
        if (sscanf(argv[3], "%d", &a) != 1) 
            return 3;
    }

    // Calcul
    // Affiche le résultat 
}