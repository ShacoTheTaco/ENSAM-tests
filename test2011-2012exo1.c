#include <stdio.h>
#include <math.h>
int main()
{
    int n;
    do
    {
        printf("Entrer un nombre n positif : ");
        scanf("%d",&n);
    }while(n<=0);
    double Result = 0;
    for(int i = n; i > 1 ; i--)
    {
        Result = sqrt(i+Result);
    }
    printf("%lf",Result);
    return 0;
}