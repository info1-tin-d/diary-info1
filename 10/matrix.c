#include <stdio.h>

int main() {
    int m[10][10] = {0};

    for (int x = 0; x < 10; x++) {
        for (int y = 0; y < 10; y++) {
            m[x][y] = x * y;
        }
    }

    for (int x = 0; x < 10; x++) {
        for (int y = 0; y < 10; y++) {
            printf("%4d ", m[x][y]);
        }
        printf("\n");
    }
}
