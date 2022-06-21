# Dante

### Introduction

Le Dante est un projet qui se sépare en deux parties:

* Créer un algorithme de création de labyrinthe.
* Créer un algorithme de résolution de labyrinthe.



### A Star

![](.gitbook/assets/Astar\_progress\_animation.gif)

Le but de l'algorithme A Star est de trouver le chemin le plus court entre deux points avec un système de propagation orientée vers la destination. Cet algorithme est le plus utilisé en raison de son efficacité optimale et de son exhaustivité.



### Utilisation

#### Generator

Permet de générer un labyrinthe

./generator x y \[perfect]

Où x est la longueur de la map, y sa largeur, et perfect pour préciser si la map doit être un labyrinthe parfait ou non.



#### Solver

Permet de résoudre un labyrinthe grâce à un algorithme de pathfinding.

./solver map\_filename

Où map\_filename est le nom du fichier de la map, qui peut être génée avec le ./generator ci-dessus.t



### Map

Les maps sont composées de deux caractères; les "\*" et les "X". Les "X" représentent les mûrs du labyrinthe, et les "\*" les zone vides. Par conséquent pour résoudre le labyrinthe on ne peut marcher uniquement que sur les "\*".



### Solver

Pour résoudre un labyrinth aussi vite, j'ai fais le choix d'utiliser l'algorithme de pathfind nommé le A\*. Grâce a ce dernier non seulement on obtient un chemin valide pour aller d'un point A à un point B mais en plus le chemin trouvé est toujours le plus court.

Le chemin est affiché avec des "o" sur la map. Il doit toujours partir du coin en haut à gauche et aller au coin en bas à droite de la map.

