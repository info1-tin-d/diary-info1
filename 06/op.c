#include <stdio.h>

int main() {
    int i = 23, j = 42;
    int k = i + j * i;
//              -----
//          -------
//      --------

    int u = 0x55;        // 0b01010101
    int v = 0xAA;        // 0b10101010
    int w = u | v;       // 0b11111111
    int x = u & v;       // 0b00000000
    int y = u ^ (v + 1); // 0b11111110
    int t = u & ~v;
    int z = u && v;

    int aa = i+++i;  // i++ + i,  i + ++i, i++ (+i)
#if 0
    int m = ++i + 1;
    printf("%d, %d", m, i); // 25, 24
#else
    int m = i++ + 1;
    printf("%d, %d", m, i); //
#endif
}
