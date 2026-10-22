
#include <stdio.h>
void main()
{
    int a = 4, b;
    printf("%d\n", a); // 4
    // increase 'a' value then copy the incremented value to b
    b = ++a;
    printf("%d %d", a, b); // 5 5
}