# Dante

### Introduction

Le Dante est un projet qui se sépare en deux parties:

* Créer un algorithme de création de labyrinthe.
* Créer un algorithme de résolution de labyrinthe.



### Map

Les maps sont composées de deux caractères; les "\*" et les "X". Les "X" représentent les mûrs du labyrinthe, et les "\*" les zone vides. Par conséquent pour résoudre le labyrinthe on ne peut marcher uniquement que sur les "\*". Lorsqu'une map à été résolue, les "o" sont les caractères qui constituent le chemin trouvé.



### A Star

![](.gitbook/assets/Astar\_progress\_animation.gif)

Le but de l'algorithme A Star est de trouver le chemin le plus court entre deux points avec un système de propagation orientée vers la destination. Cet algorithme est le plus utilisé en raison de son efficacité optimale et de son exhaustivité. Dans le programme l'algorithme A\* permet de trouver le chemin le plus court entre le coin supérieur gauche et le coin inférieur droit.



### Utilisation

#### Generator

Permet de générer un labyrinthe

./generator x y \[perfect]

Où x est la longueur de la map, y sa largeur, et perfect pour préciser si la map doit être un labyrinthe parfait ou non.

Exemple:

```
clement@clement-neon:~/Delivery/Dante$ ./generator/generator 5 5 perfect
*****
X*XXX
*****
XXX*X
*****
```



#### Solver

Permet de résoudre un labyrinthe grâce à un algorithme de pathfinding.

./solver map\_filename

Où map\_filename est le nom du fichier de la map, qui peut être génée avec le ./generator ci-dessus.t

Exemple:

```
clement@clement-neon:~/Delivery/Dante$ ./solver/solver map.txt
oo***
XoXXX
*ooo*
XXXoX
***oo
```

