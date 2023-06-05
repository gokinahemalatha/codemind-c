#include<stdio.h>
int flcm(int x,int y)
{
    int g,i,lcm;
    if(x>y)
    {
        g=x;
    }
    else
    {
        g=y;
    }
    while(1)
    {
        if(g%x==0 && g%y==0)
        {
            lcm=g;
            break;
        }
        g+=1;
    }
    return lcm;
}
int main()
{
    int n,i,a[100],m,l,lcm;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    m=a[0];
    l=a[1];
    lcm=flcm(m,l);
    for(i=2;i<n;i++)
    {
        lcm=flcm(lcm,a[i]);
    }
    printf("%d",lcm);
}