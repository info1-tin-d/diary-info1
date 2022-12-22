
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    if (argc < 2) return -1;
    int length = atoi(argv[1]);

    // Initialise le tableau dynamique
    if (length <= 0) return -1;

    int *numbers = malloc(sizeof(int) * length);

    // Initialise tableau
    for (int i = 0; i < length; i++) {
        numbers[i] = i;
    }

    // Crible
    for (int k = 2; k < length; k++)
        for (int i = k+1; i < length; i++)
            if (numbers[i] % k == 0)
                numbers[i] = -1;

    // Affiche tableau
    for (int i = 2; i < length; i++)
        if (numbers[i] != -1)
            printf("%d ", numbers[i]);
    printf("\n");

    // Libère l'espace mémoire
    free(numbers);
}
