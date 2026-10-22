
// Logical operators :

#include <stdio.h>
void main()
{
    int a = 10, b = 5;
    printf("%d\n", a > b && b < a); //  Logical  AND
    printf("%d\n", a < b || b < a); //  Logical  OR
    printf("%d\n", !(a > b));       //  Logical  NOT
}