#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int string_length(char *string) {
    int pos = 0;
    while(string[pos++] != '\0') {}
    return pos - 1;
}

int main(int argc, char *argv[]) {
    // char *s = "abcdef";

    // printf("%d\n", string_length(s));

    // // Pas bien parce que : constante bulgare "10"
    // for (int i = 0; i < 10; i++) {
    //     printf("%c", s[i]);
    // }

    // // Exploiter la sentinelle de fin '\0'
    // for (int i = 0; s[i] != '\0'; i++) {
    //     printf("%c", s[i]); // *(s + i)  == i[s]
    // }

    // // Utiliser strlen pour connaitre la taille de la chaine de caractère
    // // /!\ Mais c'est pas bien !
    // for (int i = 0; i < strlen(s); i++) {
    //     printf("%c", s[i]);
    // }

    // // Utiliser strlen pour connaitre la taille de la chaine de caractère
    // const int len = strlen(s);
    // for (int i = 0; i < len; i++) {
    //     printf("%c", s[i]);
    // }

    // // Utilise la fonctionnalité %s de printf
    // printf("%s\n", s);

    // -------------------------------------

    // char u[64] = "abcdef";
    // u[2] = 'Q';
    // printf("%s\n", u);
    // u[2] = '\0';
    // printf("%s\n", u);

    // u[2] = 'c';
    // int length = strlen(u);
    // for (int repeat = 0, start = 0; repeat < 3; repeat++, start += length) {
    //     for (int i = 0; i < length; i++) {
    //         u[start + i] = u[i];
    //     }
    // }
    // printf("%s\n", u);

    // -------------------------------------

    char *arg = argv[1];
    char *version = "--version";

    int lv = strlen(version);
    for (int i = 0; i < lv; i++) {
        if (arg[i] != version[i]) {
            printf("Oops c'est pas égal\n");
            exit(1);
        }
    }
    printf("Yeah!\n");
    exit(0);
}
