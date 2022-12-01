#include <stdio.h>

int main() {
    int m[100] = {0};

    for (int x = 0; x < 10; x++) {
        for (int y = 0; y < 10; y++) {
            m[10 * (x*y % 10) + y] = x * y;
        }
    }

    for (int x = 0; x < 10; x++) {
        for (int y = 0; y < 10; y++) {
            printf("%4d ", m[10 * (x*y % 10) + y]);
        }
        printf("\n");
    }
}
