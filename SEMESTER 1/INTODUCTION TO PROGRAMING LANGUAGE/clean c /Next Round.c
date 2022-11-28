#include<stdio.h>
int main()
{
    int i,n,k,con=0;
    int ara[100];
    scanf("%d",&n);
    scanf("%d",&k);
    for(i=1; i<=n; i++)
    {
        scanf("%d",&ara[i]);
    }
    for(i=1; i<=n; i++)
    {
        if(ara[k]<=ara[i]&&ara[i]>0)
        {
            con++;
        }
    }
    printf("\n%d",con);
    return 0;
}
