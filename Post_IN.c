
#include <stdio.h>
void main()
{
    int a = 6, b;
    printf("%d\n", a);     // 6
    b = a++;               // old 'a' value to b then increase the 'a' value
    printf("%d %d", a, b); // 7  6
}