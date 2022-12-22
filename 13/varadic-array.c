#include <stdio.h>
#include <stdlib.h>

// 64kB

int main(int argc, char *argv[]) {
    if (argc < 2) return -1;
    int length = atoi(argv[1]);
    int toto = 42;
    if (__STDC_NO_VLA__) return -1;
    if (length > STACK_MAX_SIZE / 2) return -1;
    int array[length];
    for (int i = 0; i < length; i++) {
        array[i] = i;
    }
}
