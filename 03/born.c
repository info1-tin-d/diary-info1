#include <stdio.h>
#include <stdlib.h>
int main(int argc, char* argv[]) {
    if (argc < 2) return -1;
    printf("💩%c\n", argv[1][0]);
    //int year = 2022 - ((argv[1][0] - 0x30) * 10 + argv[1][1] - 0x30);
    int year = 2022 - atoi(argv[1]);

    printf("Tu es né en %d", year);
}