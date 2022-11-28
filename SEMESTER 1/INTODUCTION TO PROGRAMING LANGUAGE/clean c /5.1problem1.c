#include<stdio.h>
int main()
{
    int ara[105];
    int n,i;
    scanf("%d",&n);
    if(n==1)
    {
        ara[0]=0;
    }
    else if(n==1)
    {
        ara[0]=0;
        ara[1]=1;
    }
    else
    {
        ara[0]=0;
        ara[1]=1;
        for(i=2; i<n; i++)
        {
            ara[i]=ara[i-1]+ara[i-2];
        }
    }
    printf("\n");
    for(i=0; i<n; i++)
    {
        printf("%d ",ara[i]);
    }
    return 0;
}
