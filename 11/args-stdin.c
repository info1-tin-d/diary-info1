/**
 * --verbose  Verbeux
 * --version
 * --help
 * -a
 * -b
 */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void version(FILE *fp)
{
    fprintf(fp, "Version 1.0.0 Copyright(c) HEIG-VD\n");
}

void process_args(int argc, char *argv[], int *a, int *b, int *verbose_level)
{
    for (int arg = 1; arg < argc; arg++)
    {
        // if (argv[arg][0] == '-' && argv[arg][1] == '-')
        if (!strcmp(argv[arg], "--version"))
        {
            version(stdout);
            exit(EXIT_SUCCESS); // identique à return 0
        }
        if (!strcmp(argv[arg], "--verbose") || !strcmp(argv[arg], "-v"))
        {
            (*verbose_level)++;
            continue;
        }
        if (!strncmp(argv[arg], "-a", 2))
        {
            if (sscanf(&argv[arg][2], "%d", a) != 1)
            {
                fprintf(stderr, "Erreur: nombre invalide!\n");
                exit(EXIT_FAILURE);
            }
        }
        if (!strncmp(argv[arg], "-b", 2))
        {
            if (sscanf(&argv[arg][2], "%d", b) != 1)
            {
                fprintf(stderr, "Erreur: nombre invalide!\n");
                exit(EXIT_FAILURE);
            }
        }
    }
}
int main(int argc, char *argv[])
{
    int verbose_level = 0;
    int a = 0, b = 0; // Pas oublier d'initialiser la variable
    process_args(argc, argv, &a, &b, &verbose_level);

    // Affichage de la somme
    if (verbose_level > 1)
    {
        printf("A = %d\n", a);
        printf("B = %d\n", b);
    }
    else if (verbose_level == 1)
    {
        printf("%d, %d\n", a, b);
    }
    printf("%d\n", a + b);

    while (!feof(stdin))
    {
        int x;
        if (scanf("%d", &x) != 1)
        {
            fprintf(stderr, "Erreur: Valeur invalide sur l'entrée standard\n");
            exit(EXIT_FAILURE);
        }
        printf("%d\n", a * x * x + b * x + 0);
    }
}
