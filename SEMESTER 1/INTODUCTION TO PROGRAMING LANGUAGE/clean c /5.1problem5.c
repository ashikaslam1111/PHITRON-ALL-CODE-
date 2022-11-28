#include<stdio.h>
int main()
{
    int arr[105];
    int n,i,j,count;
    scanf("%d",&n);
    int  arry[100];
    for(i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }

    for(i=0; i<n; i++)
    {
        for(j=2; j<arr[i]-1; j++)
            if(arr[i]%j!=0)
            {
                count++;
                break;


            }
    }
    printf(">>>>%d",count);

    return 0;
}
