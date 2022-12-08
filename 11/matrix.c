#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int matrix[3][3] = {{1}, {2}, {3}};

    // Vilain !
    for (int i = 0; i < 9; i++) {
        int n;
        scanf("%d", &n);
        ((int*)matrix)[i] = n;
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%6d ", matrix[i][j]);
        }
        printf("\n");
    }
}
