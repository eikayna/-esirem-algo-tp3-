# -esirem-algo-tp3
1.2-FONCTION D'AFFICHAGE
Fonction showSolution(solution):
    VAR solution 
    Debut 
       Si solution.type est égal à STRUCTURE_SOLUTION.TWO Alors
          Afficher "Il y a deux solutions : " x1 ", "et x2 "
          Sinon Si solution.type est égal à STRUCTURE_SOLUTION.ONE Alors
          Afficher "Il y a une solution : x "
       Sinon
          Afficher "Il n'y a aucune solution"
       Fin Si
    Fin 
Fin Fonction
