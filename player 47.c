#include<stdio.h>
int main()
{
    int k,m,s,d;
    scanf("%d %d %d",&k,&m,&s);
    d=k+m+s;
    if(d==180)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
    return 0;
}
