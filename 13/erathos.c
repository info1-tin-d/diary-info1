#include <stdio.h>
#define N 10000

int main() {
    int numbers[N];
    // Initialise tableau
    for (int i = 0; i < N; i++) {
        numbers[i] = i;
    }

    // Crible
    for (int k = 2; k < N; k++)
        for (int i = k+1; i < N; i++)
            if (numbers[i] % k == 0)
                numbers[i] = -1;

    // Affiche tableau
    for (int i = 2; i < N; i++)
        if (numbers[i] != -1)
            printf("%d ", numbers[i]);
    printf("\n");
}
