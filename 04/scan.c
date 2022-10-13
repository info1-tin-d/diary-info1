#include <stdio.h>

int main() {
    char a,b,c,d;
    printf("Quel sont tes 4 carctères préférés ? ");
    scanf("%c%c%c%c", &a, &b, &c, &d);

    printf("Ahhh je vois, tu aimes beaucoup %c et %c et %c et aussi %c!", d, c, a, b);
}