#include<stdio.h>
int main()
{
    int n,i;
    int ara[100];
    int max=ara[1];
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        scanf("%d",&ara[i]);
    }

    for(i=1; i<=n; i++)
    {
        if(ara[i]>max)
        {
            max=ara[i];
        }
    }
    printf("%d",max);
    return 0;
}
