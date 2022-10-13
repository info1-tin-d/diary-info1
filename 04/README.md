# Semaine 04/16

- [ ] STDIN STDOUT 
- [ ] Écriture formattée
  - [ ] `printf("format", var1, var2);`
  - [ ] `%d` Entiers signés
  - [ ] `%c` Caractère
  - [ ] `%f` Float
  - [ ] `%lf` Double
  - [ ] `%g` Afficher un float en version raccourcie (enlève les zéros en trop)
  - [ ] `%04.3f` Affiche un float en format `0023.213`
  - [ ] `%x`
- [ ] Lecture formattée
  - [ ] `scanf("format", &var1, &var2)`


$ echo "1" | ./a.out 2 | ./a.out 3 | ./a.out 10 | cowsay | lolcat

EOF == End Of File  <C-D>

## Exercice lecture

Ecrire un programme qui lit 2 arguments:

- 1 entier 
- 1 double

Ce programme affiche ces valeurs sous différents formats: 

- Avec des zéros devant les nombres 
- Avec une certaine résolution
- En hexadécimal
- En format "canonique" `%g`
