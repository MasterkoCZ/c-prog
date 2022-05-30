#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int an(int a1, int d, int n)
{
    return a1 + ((n - 1) * d);
}

void gene(int a1, int d, int n)
{
    for (int a = a1; a <= an(a1, d, n); a += d)
    {
        printf("%s%d", a != a1 ? ", " : "", a);
    }
    printf("\n");
}

int main()
{
    gene(3, 5, 10);
    return 0;
}