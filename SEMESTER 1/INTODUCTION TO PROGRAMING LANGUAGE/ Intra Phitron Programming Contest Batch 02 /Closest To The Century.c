#include<stdio.h>
int main()
{
    int n;
    int i;
    int j;
    int m;
    int  s1[m+1];
    int s2[n+1];
    scanf("%d",&n);
    for (i=0; i<n; i++)
    {
        scanf("%d",&m);
        for(j=0; j<m; j++)
        {
            scanf("%d",&s1[j]);
        }
        int max=s1[0];
        for(j=0; j<m; j++)
        {
            if(s1[j]>max)
            {
                max=s1[j];
            }
        }
        s2[i]=max;
    }
    for(i=0; i<n; i++)
    {
        printf("%d",s2[i]);
        printf("\n");
    }
    return 0;
}
