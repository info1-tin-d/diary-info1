#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(int argc, char*argv[]) {
    if (argc < 2) return 1;
    int n = atoi(argv[1]);
    double pi4 = 0;
    printf("pi/4 = ");
    for (int i = 0; i <= n; i++) {
        pi4 += -pow(-1, i) * 1 / (2*i + 1);
        printf("%+.0f/%d ", pow(-1, i),  (2*i + 1));
    }
    printf("\n%.12f\n", pi4 * 4);
}
