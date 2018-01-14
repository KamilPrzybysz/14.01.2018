#include<stdio.h>
#include<stdlib.h>


int NWD(int a, int b)
{
   if(a!=b)
     return NWD(a>b?a-b:a,b>a?b-a:b);
   return a;
}

int main()
{
    int a, b;

    printf("Podaj liczę a: ");
    scanf("%d", &a);
    printf("Podaj liczę b: ");
    scanf("%d", &b);

    printf("NWD %d i %d to %d\n", a, b, NWD(a,b));

    return 0;
}
