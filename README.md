# Fillit

## ENGLISH

### Description

Fillit is about tetriminos (tetris pieces), they look like this :
```
##..  ##..  .#..  ###.  #...
#...  ##..  ###.  #...  #...
#...  ....  ....  ....  #...
....  ....  ....  ....  #...
```
The final solution have to be a square grid containing all the tetriminos.
We had to make an algorithm to find how to position every tetriminos to make them fill
in the smallest square possible.

### Use it

You can compile it using : ```make```and start it with ```./fillit maps/tetris6```

### What I learned

- How to parse a file
- Catch errors
- How to code a backtracking algorithm
- Improving C comprehension

This project was pretty interesting to code. It took me a lot of time to get a nice comprehension
of how backtracking is working but this was a nice challenge.

*********************************************************************************
---------------------------------------------------------------------------------
*********************************************************************************

## FRANÇAIS

### Description

Le projet Fillit utilise des tetriminos (pièces de tetris) comme celles-ci :
```
##..  ##..  .#..  ###.  #...
#...  ##..  ###.  #...  #...
#...  ....  ....  ....  #...
....  ....  ....  ....  #...
```
Le but est de faire rentrer tous les tetriminos dans le plus petit carré possible.
On commence avec un petit carré puis on teste différents agencements, jusqu'à ce que toutes les pièces soient posées.
Si tous les agencements ont étés testés et toutes les pièces n'ont pas été posées,
alors on augmente la taille du carré et on recommence jusqu'à ce qu'on trouve une solution.

### Utilisation

On compile avec : ```make``` puis on le lance avec ```./fillit maps/tetris6```

### Ce que j'ai appris

- Parser un fichier
- Gérer des erreurs
- Coder un algorithme de backtracking
- Comprehension du C

J'ai trouvé ce projet plutôt cool, bien qu'il m'ait pris beaucoup de temps à réaliser
à cause de ma mauvaise compréhension du backtracking. C'était un bon challenge !
