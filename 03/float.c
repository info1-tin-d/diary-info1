#include <stdio.h>

int main(int argc, char* argv[]) {
    float u = 0.1;
    float v = 1000000000;
    if (u == v) 
        printf("%.15f\n", u + v);
}