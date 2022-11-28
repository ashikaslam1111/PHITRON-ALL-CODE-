#include<stdio.h>
int main()
{
    int n;
    int i;
    int j;
    int m;
    char s1[100];
    int s2[100];
    int p;
    int e;
    scanf("%d",&n);



    for (i=0; i<n; i++)
    {
        scanf("%d",&m);
        for(j=0; j<=m-1; j++)
        {

            scanf("%c",&s1[j]);
        }

        printf("\n");
        for(j=0; j<=m-1; j++)
        {

            printf("%c",s1[j]);
        }

    }




    /*
    for(i=0; i<n; i++)
    {
        if(s2[i]==0)
        {

            printf("Pakistan\n");
        }
        else
        {
            printf("England\n");
        }
    }*/
    return 0;
}
