# Semaine 10/16

- [x] Fonctions
  - [x] Passage par adresse
  - [x] Recursion (`fib.c` : Fibonacci)
- [ ] Tableaux multi-dimensionnel

## Tableaux multidimensionnels

```c
int a[10] = {1,2,3,4,5,6,7,8,9,10};
//             ^ a[1]
printf("%d\n", a[1]); // a[1] sucre syntaxique === *(a+1)
```

```c
int m[2][3] = {{1,2,3}, {4,5,6}};
printf("%d\n", m[1][2]); //
```
## Pointeurs

- `int a` Réserver un espace de 4 bytes en mémoire dans lequel vous pouvez stocker de l'information
- `int* p` Réserver un espace de 8 bytes pour y stocker une adresse permettant d'accéder à un int

- `*`
  1. Déclarer un pointeur (nouvelle variable qui contient une adresse)
  2. Déréférencer : "Aller à l'adresse et intéragir avec la valeur"
- `&` "L'adresse de", ("ET bit à bit")

## Fonctions

```c

void digit2char(int *num) {
    *num -= '0';
}

void digit2char_(int num) {
    num -= '0';
}

double add(double x, double y) {
    return x + y;
}

int main() {
    printf("%lf\n", add(23, 42));

    char d = '5';
    digit2char_(d);
    printf("%d\n", d); // 53

    char c = '4';
    digit2char(&c);
    printf("%d\n", c);
}
```

Une fonction qui fait une division entre a et b et qui retourne le reste et le résultat

```c
bool divmod(int a, int b, int *resultat, int *modulo) {
    if (b == 0) return 1;
    *resultat = a / b;
    *modulo = a % b;
    return 0;
}

int main() {
    int resultat, modulo;
    divmod(1, 3, &resultat, &modulo);
    printf("%d, %d\n", resultat, modulo);
}
```

## Scanf

```c
int main() {
    int value = 42;
    scanf("%d", &value); // L'adresse de !
}
```
