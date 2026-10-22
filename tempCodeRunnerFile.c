
// Logical operators :

#include<stdio.h>
void main(){
    int a = 10,b=5;
    printf("%d\n",a>5 && b<a);  //  Logical  AND 
    printf("%d\n",a<5 || b<a);  //  Logical  OR
    printf("%d\n",!(a>5));      //  Logical  NOT
}