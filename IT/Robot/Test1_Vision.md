# Test1: Création d'une classe pour un Robot

Nous avons pensé à un mini programme de simulation de collecte de déchets.
Nous avons créé une classe **Robot** dont hérite deux autres classes ***CollectorRobot*** et ***SorterRobot***.
Comme l'indiquent leurs noms:

- **CollectorRobot** est un robot qui parcourra une map afin de collecter les déchets et les déposer à une destination prédéfinie.

- **SorterRobot** est un robot qui positionné à la destination du CollectorRobot recevra la décharge des déchets qu'il aura collecté.

Lors de l'exécution du programme, le processus de collecte et de tri sera visualisé en **Ncurses**.