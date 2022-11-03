#include <stdio.h>
#include <stdbool.h>

void pf(char *a, char c) {
    bool special = false;
    for(int i = 0; a[i]; i++) {
        if (special) {
            if (a[i] == 'c')
                putchar(c);
            else if (a[i] == 'd')
                printf("%d", c);
            special = false;
            continue;
        }
        if (a[i] == '%') {
            special = true;
        } else {
            special = false;
            putchar(a[i]);
        }
    }
}

int main() {
    pf("bon%cour!", 'j');
}
