
#include<stdio.h>
int maxxnum(int x,int y,int z); // x   y and are arguments
int main()
{
    int m;
    int a;
    int b;
    int c;
    printf("enter three numbers>>");
    scanf("%d %d %d",&a,&b,&c);
    m=maxxnum(a,b,c);/// a b and c are paramiter
    printf("the maximum number is %d",m);
    return 0;
}

int maxxnum(int x,int y,int z) // x   y and are arguments
{
    if(x>y &&x>z)
        return x;
    else if(y>x && y>z)
        return y;
    else
        return z;
}
