
#include <stdio.h>
void main()
{
    int a = 12, b;
    printf("%d\n", a); // 12
    b = a--;
    printf("%d %d", a, b); // 11 12
}