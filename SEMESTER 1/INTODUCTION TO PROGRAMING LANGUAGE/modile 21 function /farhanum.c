#include<stdio.h>
int lastnumprime(int x);
int sum( int x);
int seven_pres(int x);
int main()
{
    int n=783;
    if(lastnumprime(n)==1&&sum(n)>10&&seven_pres(n)==1)
    {
        printf("YES");

    }
    else
    {
        printf("NO");
    }
    // printf("\n%d",sum(n));


    return 0;
}

int sum( int x)
{
    int y=0;
    while(x>0)
    {
        y=y+x%10;
        x=x/10;
    }
    return y;
}

int lastnumprime(int X)

{
    int x=X%10;
    if(x==2||x==3||x==5||x==7)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int seven_pres(int x)
{
    int y;
    while(x>0)
    {
        y=x%10;
        if(y==7)
        {
            return 1;
        }
        x=x/10;
    }
    return 0;

}
