#include<stdio.h>
int main()
{
    int  ara[105];
    int n,i,ans;
    int ec=0,oc=0;
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        scanf("%d",&ara[i]);
    }
    for(i=1; i<=n; i++)
    {
        if(ara[i]%2==0)
        {
            ec++;
        }
        else
        {
            oc++;
        }
    }
    // printf("\nevens=%d odd=%d",ec,oc);
    if(ec==1)
    {
        //position of even
        for(i=1; i<=n; i++)
        {
            if(ara[i]%2==0)
            {
                ans=i;
            }
        }

    }
    else
    {
        //position of odd
        for(i=1; i<=n; i++)
        {
            if(ara[i]%2!=0)
            {
                ans=i;
            }
        }
    }
    printf("\n%d",ans);
    return 0;
}
