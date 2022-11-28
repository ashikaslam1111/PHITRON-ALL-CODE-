#include<stdio.h>
int main()
{
    int i,n;
    int ara[2000005];
    int move=0;
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&ara[i]);
    }
    for(i=1; i<n; i++)
    {
        if(ara[i]<ara[i-1])
        {
            move=move+(ara[i-1]-ara[i]);
            ara[i]-ara[i-1];
        }
    }
    printf("\n%d",move);
    return 0;
}
