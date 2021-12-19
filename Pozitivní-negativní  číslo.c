#include <stdio.h>
 
void main()
{
    int num;
 
    printf("Zadej číslo: \n");
    scanf("%d", &num);
    if (num > 0)
        printf("%d je pozitivní číslo \n", num);
    else if (num < 0)
        printf("%d je negativní číslo \n", num);
    else
        printf("0 není ani pozitivní ani negativní");
}