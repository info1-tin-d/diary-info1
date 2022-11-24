#include <stdio.h>
#include <ctype.h>

char question(char *q, char *values)
{
    char c;
    char def = '\0';
    for (int i = 0; i < strlen(values); i++) {
        if (isupper(values[i])) {
            def = values[i];
        }
    }
    do
    {
        printf("%s [%s] ? : ", q, values);
        c = tolower(getchar());
        for (int i = 0; i < strlen(values); i++)
        {
            if (c == tolower(values[i]))
                return c;
            if (c == '\n')
                return def;
        }
        printf("Erreur tu n'as pas saisie la bonne valeur\n");
        while (c != EOF)
            ;
    }
}

int main()
{
    char u = question("Voulez-vous quitter", "aB");
    char v = question("Veuillez choisir une option", "equJsa");

    int count = 0;
    char c;
    do
    {
        printf("Veux-tu qu'il fasse beau à Yverdon-les-Bains [Y/n]: ");
        c = tolower(getchar());
        switch (c)
        {
        case 'n':
            printf("Oh non tu ne veux pas qu'il fasse beau %d fois !\n", ++count);
            break;
        case '\n':
        case 'y':
            printf("Bravo!\n");
            break;
        default:
            printf("Je t'ai dit de mettre Y pour yes ou N pour no, enculé (%d) !\n", ++count);
            break;
        }
        if (c != '\n')
            getchar();
    } while (c != 'y' && c != EOF);
}

// "\n"


char buffer[64];
//scanf("%63s", buffer);
gets(buffer, sizeof(buffer));

if (sscanf(buffer, "%d", &number) != 1) {
    printf("Erreur");
}