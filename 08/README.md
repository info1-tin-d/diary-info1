# Semaine 08/16

- [x] Chaînes de caractères
- [ ] Leibnitz
- [ ] Équipes Labo-07
- [ ] Labo-07

## Chaîne de caractères

```c
char *s = "abcdef"; // Déclarer un pointeur sur l'adresse de début de la constante littérale "abcdef"
//         ^ s pointe ici
char t[64]; // Déclare un buffer de 64 caractères qu'on peut modifier
char u[64] = "abcdef"; // Déclare un buffer de 64 caractère dans lequel, je copie la constante littérale "abcdef"
char v[] = "abcdef"; // Déclare un buffer de la taille de la constante littérale (soit 6 + 1 (sentinelle))
```

Bibliothèque standard

```c
if (strcmp(argv[1], "--version") == 0) // Si les deux chaînes sont égales
//                v 0xab1112343
char *c = strchr("abcdef", 'c'); // Retourne l'adresse du caractère trouvé dans la chaîne
//                  ^ 0xab1112345
```

## Exercice Leibnitz

$$ \frac{\pi}{4} = 1 - \frac{1}{3} + \frac{1}{5} - \frac{1}{7} ... $$
