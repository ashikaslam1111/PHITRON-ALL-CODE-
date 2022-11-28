#include<stdio.h>
#include<math.h>
float f( int x, int y);
int absolute(int x);
int main()
{
    int x =12;
    int y=7;
    float ans;
    ans=f(x,y);
    printf("%d",ans);
    return 0;
}

float f( int x, int y)
{
    int temp_ans=absolute(x-3)+(y+4)*(y+4);
    return (temp_ans);
}
int absolute(int x)
{
    if(x>=0)
    {
        return x;
    }
    else
    {
        return (-1*x);
    }

}
