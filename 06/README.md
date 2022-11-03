# Semaine 06/16

- [ ] Opérateurs
- [ ] Promotion des entiers

## Promotion des entiers

Lors d'une opération, le type résultant est toujours le type le plus grand
des deux opérandes, sauf, si les types sont plus petit que int. Dans ce cas
on promeut le type de sortie en int.

```c
(int)(int + int)
(long)(int + long)
(long long)(long long + int)
(int)(short + int)
(int)(short + char)  // /!\ Attention
(int)(char + char)   // /!\ Attention
```

```c
i + (~j) * (k++) ^ u << 2

i + (~j) * (k) ^ u << 2
k = k + 1

(m = ((i + ((~j) * (k))) ^ (u << 2)))
k = k + 1
```

## Post/Pre increment

```c
    int m = i++ + 1;
    printf("%d, %d", m, i); //
```

```c
    int m = i + 1;
    i = i + 1;
    printf("%d, %d", m, i); //
```

```c
    int m = ++i + 1;
    printf("%d, %d", m, i); //
```

```c
    i = i + 1;
    int m = i + 1;
    printf("%d, %d", m, i); //
```

```c
int j = i++ + ++i;
```

```c
i = i + 1;
int j = i + i;
i = i + 1;
```


