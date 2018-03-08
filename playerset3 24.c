#include<stdio.h>
int main()
{
char k[20];
int i,sum=0;
scanf("%s",k);
for(i=0;k[i]!='\0';i++)
{
if(k[i]=='0'||k[i]=='1'||k[i]=='2'||k[i]=='3'||k[i]=='4'||k[i]=='5'||k[i]=='6'||k[i]=='7'||k[i]=='8'||k[i]=='9')
{
sum=sum+1;
}
}
if(sum==1)
{
printf("yes");
}
else
{
printf("no");
}
return 0;
}
