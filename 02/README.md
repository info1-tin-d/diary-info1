# Semaine 02/16

## Information

La quantité d'information s'exprime en bit
256 différentes possibiltés avec 8 bits: $2^{8}$

Une information peut être représentée dans différents systèmes : 

| Base        | Convention  | Représentation formelle |
| ----------- | ----------- | ----------------------- |
| Binaire     | `10010101b` | $10010101_2$            |
| Octal       | `0225`      | $225_8$                 |
| Hexadécimal | `0x95`      | $95_{16}$               |
| Décimal     | `149`       | $149_{10}$              |

## Suffixes

Les suffixes standards `k`, `M`, `G`... sont exprimés en base 1000.

```
1000 g == 1 kg
1000 CHF == 1 kCHF
1000 bits == 1 kbit
1000 kbit == 1 Mbit
1000 Mbit == 1 Gbit
1000 Gbit == 1 Tbit
1000 Tbit == 1 Pbit
```

Attention cependant aux `ki`, `Mi`, `Gi`... qui sont exprimés en base 1024. 

```
1024 bytes == 1 kiB
```

## Représentation signée

Avec un espace de stockage de 4 bits, on peut représenter jusqu'à 16 différents états. 
Par exemple les nombres de 0 à 15, dans l'ordre:

```
00 01 02 03 04 05 06 07 08 09 10 11 12 13 14 15
```

Mais pourquoi pas utiliser le bit de gauche (MSB) comme bit de signe 
Dans ce cas, toutes les valeurs en dessous de `1000b` seront positives. 

```
00 01 02 03 04 05 06 07 -0 -1 -2 -3 -4 -5 -6 -7
```

Enfin une solution consiste à exprimer les valeurs négatives en notation complément à deux. 

>LE COMPLEMENT A DEUX, C'EST LE COMPLEMENT A UN (puis), PLUS UN.
>LE COMPLEMENT A UN : C'EST INVERSER LES BITS

```
+0 +1 +2 +3 +4 +5 +6 +7 -8 -7 -6 -5 -4 -3 -2 -1
```

Ce qui est cool en complément à deux c'est que si vous voulez exprimer la valeur négative de 6, vous prenez la valeur binaire, inversez les bits et ajouter 1: 

```
6 -> 0110 -> 1001 -> 1010 
``` 

De la même manière:

```
2 -> 0010 -> 1101 -> 1110
3 -> 0011 -> 1100 -> 1101 -> 0010 -> 0011
```

## Table de correspondance 

| Décimal | Binaire | Octal | Hexadécimal |
| ------- | ------- | ----- | ----------- |
| 0       | 0000    | 000   | 0           |
| 1       | 0001    | 001   | 1           |
| 2       | 0010    | 002   | 2           |
| 3       | 0011    | 003   | 3           |
| 4       | 0100    | 004   | 4           |
| 5       | 0101    | 005   | 5           |
| 6       | 0110    | 006   | 6           |
| 7       | 0111    | 007   | 7           |
| 8       | 1000    | 010   | 8           |
| 9       | 1001    | 011   | 9           |
| 10      | 1010    | 012   | a           |
| 11      | 1011    | 013   | b           |
| 12      | 1100    | 014   | c           |
| 13      | 1101    | 015   | d           |
| 14      | 1110    | 016   | e           |
| 15      | 1111    | 017   | f           |

Qualification d'une information : 

1. Base
   - Décimal
   - Hexadécimal
   - Binaire
2. Type
   - Entier non signé
   - Entier signé
   - Valeur à virgule
   - Caractère(s)
   - Autre ?
3. Sa nature
   - Quantité physique


