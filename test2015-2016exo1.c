#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int n;
    printf("Entrer un nombre N entier :");
    scanf("%d",&n);
    for(int i= 0; i < 10; i++)
    {
        for(int j = n; j > 0; j/=10)
        {
            if(j%10==i)
            {
                printf("%d",i);
            }
        }
    }
    return 0;
}