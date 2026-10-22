
#include <stdio.h>
void main()
{
    int a = 8, b;
    printf("%d\n", a); // 8
    b = --a;
    printf("%d %d", a, b); // 7 7
}