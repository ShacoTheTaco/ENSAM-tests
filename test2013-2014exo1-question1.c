#include <stdio.h>
int main()
{
    int n;
    do{
        printf("Entrer un nombre n plus grand que 1 : ");
        scanf("%d",&n);}while(n < 1);
    int k = 0;
    for(int i = 2; i <n ;i++)
    {
        if(n%i == 0)
        {
            k++;
        }
    }
    if(k==0)
    {
        printf("%d est un nombre premier",n);
    }
    else
    {
        printf("%d n'est pas un nombre premier",n);
    }
    return 0;
}