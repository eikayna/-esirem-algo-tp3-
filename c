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
int main() {
   STRUCTURE_SOLUTION s1 =  
   


  
