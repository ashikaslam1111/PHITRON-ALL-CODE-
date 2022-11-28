#include<stdio.h>
int main()
{
    int arr[105];
    int n,i,j,count;
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }

    for(i=0; i<n; i++)
    {
        if(arr[i]%2!=0)
        {
            count+=arr[i];
        }
    }
    printf("\n>>>>>>>>%d",count);
    return 0;
}
