#include <stdio.h>
int main()
{
    int n;
    do{
        printf("Entrer un nombre n entier compris entre 2 et 1000 : ");
        scanf("%d",&n);
    }while(n < 2 || n > 1000);
    int m;
    do{
        printf("Entrer un nombre m entier plus grand que 2 : ");
        scanf("%d",&m);
    }while(m < 2);
    int N = 0;
    int T = 0;
    int x = 0;
    while(N < n)
    {
        int k = 0;
        for(int i = 2; i <= m; i++)
        {
            if(m%i == 0)
            {
                k++;
            }
        }
        if(k == 1)
        {
            printf("%d ",m);
            N++;
            if(x != 0)
        {
            if((m-x)>T)
            T = m-x;
        }
        x = m;
        }
        m++;
    }
    printf("\nLa difference maximale est de %d",T);
    return 0;
}