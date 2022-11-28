#include<stdio.h>
int maxxnum(int x,int y,int z)
{
    if(x>y &&x>z)
        return x;
    else if(y>x && y>z)
        return y;
    else
        return z;
}
int main()
{
    int m;
    int a;
    int b;
    int c;
    printf("enter three numbers>>");
    scanf("%d %d %d",&a,&b,&c);
    m=maxxnum(a,b,c);
    printf("the maximum number is %d",m);
    return 0;
}
