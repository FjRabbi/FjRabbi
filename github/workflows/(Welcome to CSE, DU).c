#include <stdio.h>

int main()
{
    int X, Y, Z, res;
    scanf("%d %d %d", &X, &Y, &Z);


    res = (X-Z)+(Y-Z)+Z;


    printf ("%d\n", res);
    return 0;
}
