#include <stdio.h>

void display(char array[9][9]) {
    for (int j = 0; j < 9; j++) {
        for (int i = 0; i < 9; i++)
            printf("%d ", array[j][i]);
        printf("\n");
    }
}

int main() {
    char data[9][9] = {
        {1,3,5,7,9,2,6,8,4},
        {1,3,5,7,9,2,6,8,4},
        {1,3,5,7,9,2,6,8,4},
        {1,3,5,7,9,2,6,8,4},
        {1,3,5,7,9,2,6,8,4},
        {1,3,5,7,9,2,6,8,4},
        {1,3,5,7,9,2,6,8,4},
        {1,3,5,7,9,2,6,8,4}
    };

    printf("Data ");
    display(data);

    // for (int row = 0; row < 2; row++)
    // {
    //     char test[9] = {0};
    //     for (int col = 0; col < 9; col++) {
    //         test[data[row][col]-1] += 1;
    //     }
    //     for (int i = 0; i < 9; i++) {
    //         if (test[i] != 1) {
    //             return 1;
    //         }
    //     }
    // }
    // return 0;
}
