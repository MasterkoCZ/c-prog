#include <stdio.h>

int main() {
    int i;
    printf("Cisla delitelna 5 mezi 1 do 50\n");
    i=1;
    while(i<=50)
    {
        if(i % 5 ==0)
        {
            printf("%d\n",i);
        }
        i++;
    }
}