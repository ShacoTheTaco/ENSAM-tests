#include <stdio.h>
int main()
{
    int n;
    printf("Entrer un nombre n plus grand que 2 : ");
    do{
        scanf("%d",&n);
    }while(n<2);
    for(int i = 2 ; i <= n ; i++)
    {
        if(n%i == 0)
        {
            int k = 0;
            for(int j = 2; j<i; j++)
            {
                if(i%j == 0)
                {
                    k++;
                }
            }
            if(k == 0)
            {
                printf("%d ",i);
            }
        }
    }
    return 0;
}
