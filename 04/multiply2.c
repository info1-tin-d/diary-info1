#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]) {
    if (argc < 2) {
        printf("Il faut au moins un argument\n");
        return 1;
    }
    double n;

    int m;
    if (sscanf(argv[1], "%d", &m) != 1) {
        printf("Ce n'est pas un nombre\n");
        return 2; 
    }

    while(!feof(stdin)) {
        if (scanf("%lf", &n) != 1) {
            printf("Vous devez fournir au programme des nombres\n");
            return 3;
        };
        printf("%lg\n", n * m);
    }
}