#include<stdio.h>
int main()
{
    int n=5;
    int i;
    int sum;
    sum=0;
    for(i=1; i<=n; i++)
    {
        sum=sum+i;
    }
    printf("%d",sum);
    return 0;
}
