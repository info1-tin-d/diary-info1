#include <stdio.h>

int main() {
    char pattern[] = "%d";
    char str[] = "12345";

    int u = 0;
    if (sscanf(pattern, str, &u) != 1) { 
        fprintf(stderr, "Erreur: OOps oops!\n");
    }
    printf("%d\n", u * 42);
}
