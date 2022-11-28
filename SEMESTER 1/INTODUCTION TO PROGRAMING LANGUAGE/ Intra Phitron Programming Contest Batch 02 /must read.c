#include<stdio.h>
int main()
{
    int n;
    int m;
    int i;
    int j;

    char s1[m+1];
    int p,e;
    p=0;
    e=0;

    scanf("%d",&n);
    for (i=0; i<n; i++)
    {
        printf("o>>\n");
        scanf("%d",&m);
        getchar();
        s1[m]='\0';
        for(j=0; j<m; j++)
        {
            scanf("%c",&s1[j]);

        }

        printf("\n");
        for(j=0; j<m; j++)
        {
            printf("%c",&s1[j]);

        }

        /*
        int y=0;
        while(s1[y]!='\0')
        {
            if(s1[y]=='H')
            {
                e++;
            }
            else
            {
                p++;
            }
        }
        if(p>e)
        {
            printf("Pakistan");
        }
        else
        {
            printf("England");
        }*/
    }


    return 0;
}
