# Semaine 05/16

- [ ] Comment fonctionne printf/scanf/sscanf/fprintf...
- [ ] Exercice `scanf`
- [ ] Opérateurs

## Constantes littérales

```c 
'a'   char
21l   long
33ll  long long 
21    int
2.    double
2.1   double
.2    double
2.4f  float 
0x22  int (en hexadécimal)
007   int (en octal)

"abc" Chaîne de caractère
```

## `printf`

```c
int main() {
    char a[] = {'b', 'o', 'n', 'j', 'o', 'u', 'r', '!', 0};
    printf("%ld\n", sizeof(a));
    for(int i = 0; a[i]; i++) {
        putchar(a[i]);
    }
}
```

