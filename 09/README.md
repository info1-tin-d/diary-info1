# Semaine 09/16

- [ ] Générateur congruentiel linéaire

## Générateurs pseudo-aléatoires

int rand() {
    return ...
}

## Structures de contrôles

### Blocks

```c
int main() {
    {
        int i = 42;
        {
            printf("%d\n", i); // 42
            int i = 23; // Masquez la variable i
            printf("%d\n", i); // 23
        }
        printf("%d\n", i); // 42
    }
}
```

On affiche 42 23 42

### Test conditionnels

- `if`
- `else`

```c
if (condition) <instruction>

if (i < 10) {};
```

```c
if (condition) <instruction/block>
else <instruction/block>

if (i < 42) {

} else {

}

if (i < 42) {

} else
    if (i < 50) {

    }
```

### Boucles

#### For

for ( ; ; ) <insruction/block>

{
    int i = 0;
    for (<start>; ; ) {
        int i = 0;

    }
}

```c
int i = 0;
for(;i<10;) {
    printf("%d\n", i);
    i++;
}
0 1 2 3 4 5 6 7 8 9
```

Ceci est équivalent

```c
int i = 0;
for(;i<10; i++) {
    printf("%d\n", i);
}
```

Ceci est aussi équivalent

```c
for(int i = 0;i<10; i++) {
    printf("%d\n", i);
}
```

```c
for (a = u > 5 ? 42 : 23; ; a += 10)
```

#### Instruction ternaire

<condition> ? <si vrai> : <si faux>

```c
int i;
if (u > 5) {
    i = 42;
}
else
{
    i = 23;
}

int i = u > 5 ? 42 : 23;

int (i = ((u > 5) ? 42 : 23));
int (i = (true ? 42 : 23));
int (i = 42);

int i = u < 10 ? u > 5 ? 10 : 20 : 30; // Illisible donc pas bien !
int i = (u < 10) ? ((u > 5) ? (10) : (20)) : (30);

printf("%s", test ? "Vrai" : "Faux");

```

## Correction TE

```c
int i = 0; // 1
while (i - 10) { // 2 2a
   i += 2; // 3
   printf("%i ", i) // 4
}

| 1   2    2a    3     4
| i=0 i-10 while i+=2  i
| 0   -10  true  2     2
|     -8   true  4     4
|     -6   true  6     6
|     -4   true  8     8
|     -2   true  10    10
|     0    false
v t

int i = 0
while (i <= 5) {
    int j = 2 * i;
    printf("%i ", j);
    i += 1;
}

i   i<=5  2*i j  i+=1
0   true  0   0  1
1   true  2   2  2
2   true  4   4  3
3   true  6   6  4
4   true  8   8  5
5   true  10  10 6
6   false

0 2 4 6 8 10

for (int i = 'a'; i < 'd'; i++) {
   printf("%c " ", i);
}

i    i<'d'  i    i+=1
'a'  true   'a'  'b'
'b'  true   'b'  'c'
'c'  true   'c'  'd'
'd'  false

"a b c "

for (int i = 0; i < 10; i++) {
	printf("%d\n", i % 2);
}

i  i < 10  i % 2  i++
0  true    0      1
1  true    1      2
2          0
3          1
4          0
5          1
6          0
7          1
8          0
9          1
10 false ...
```

## Modulo

```c
i = 1;
1 % 2; // 1 / 2 == 0, il reste 1


```
