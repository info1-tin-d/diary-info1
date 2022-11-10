#include <stdio.h>
#include <math.h>

void line(int digits) {
    printf("+");
    for (int i = 0; i < digits; i++)
        printf("-");
    printf("+\n");
}

int max_digits(long long array[], size_t size) {
    int max = 0;
    for(int i = 0; i < size; i++) {
        int digits = log10(array[i]) + 1;
        max = digits > max ? digits : max;
    }
    return max;
}

int row(long long array[], size_t size, int digits) {
    for(int i = 0; i < size; i++) {
        printf("|%*lld|\n", digits, array[i]);
    }
}

void display(long long array[], size_t size) {
    int digits = max_digits(array, size);

    line(digits);
    row(array, size, digits);
    line(digits);
}

int main() {
    long long array[] = {1, 64543213, 4646, 232, 12};
    long long array2[] = {1,2,3,4,5,6,7,8,9,10};
    display(array, sizeof(array)/sizeof(long long));
    display(array2, sizeof(array2)/sizeof(long long));
}
