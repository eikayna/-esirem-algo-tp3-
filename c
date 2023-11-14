1:enum 
#include <stdio.h>
typedef enum  {
    NONE=0,
    ONE=1,
    TWO=2,
} SOLUTION_TYPE ;
int main() { 
    enum SOLUTION_TYPE type = NONE ;
    printf("la valeur de type est: %d.\n," type);
    return 0;
}
2:Structure Solution
#include <stdio.h>
typedef enum  {
    NONE=0,
    ONE=1,
    TWO=2,
} SOLUTION_TYPE;
typedef struct {
   solutiontypefloat x0;
   float x1;
   float x2;
} STRUCTURE_SOLUTION ;
struct Solutiondegre1 (double a, double b) {
    struct STRUCTURE_SOLUTION solution;
    solution.type = (a != 0) ? NONE : ONE ;
    solution.x0 = (a != 0) ? -b / a : 0;
    solution.x1 = 0;
    solution.x2 = 0;
    return solution;
} 
struct Solutiondegre2 (double a, double b , double c) {  
   double discriminant = b * b - 4 * a * c;
    if (discriminant > 0) {
        solution.type = TWO;
        solution.x1 = (-b - sqrt(discriminant)) / (2 * a);
        solution.x2 = (-b + sqrt(discriminant)) / (2 * a);
    } else if (discriminant == 0) {
        solution.type = ONE;
        solution.x0 = -b / (2 * a);
        solution.x1 = 0;
        solution.x2 = 0;
    } else {
        solution.type = NONE;
        solution.x0 = 0;
        solution.x1 = 0;
        solution.x2 = 0;
    }
int main() {
    printf("Equation  du premier degre : %fx + %f = 0\n", a1, b1);
    printf("Solution 1: Type=%d, x0=%.2f\n", solution1.type, solution1.x0);
    printf("Equation du second degre : %fx^2 + %fx + %f = 0\n", a2, b2, c2);
    printf("Solution 2: Type=%d, x1=%.2f, x2=%.2f\n", solution2.type, solution2.x1, solution2.x2);
    return 0;
}
1.3 Création des tests unitaires
void test() {
    struct SSTRUCTURE_FONCTION solutions[] = {
        {NONE}
        {ONE, x1},
        {TWO, x1, x2},
    };
    for (int i = 0; i < sizeof(solutions)); ++i) {
        printf("Test %d:\n", i + 1);
        showSolution(solutions[i]);
        printf("\n");
    }
}
int main() {
    test();
    return 0;
}
