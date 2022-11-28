#include<stdio.h>
int main()
{
    int n;
    int i;
    int j;
    int sum;
    int  s1[100];
    int s2[100];
    scanf("%d",&n);
    for (i=0; i<n; i++)
    {
        for(j=0; j<=5; j++)
        {
            sum=0;
            scanf("%d",&s1[j]);
        }


        for(j=0; j<=5; j++)
        {
            sum=sum+s1[j];
        }
        if(sum==0)
        {
            s2[i]=0;
        }
        else
        {
            s2[i]=1;
        }
    }

///

    for(i=0; i<n; i++)
    {
        if(s2[i]==0)
        {

            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }

////
return 0;
}
