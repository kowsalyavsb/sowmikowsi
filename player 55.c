#include <stdio.h>
#include<string.h>
int main(void)
{
	char k[50],d,m[50],n;
	int i,count=0;
	scanf("%s%s",k,m);
	d=strlen(k);
	n=strlen(m);
	for(i=0;k[i]!='\0'&& m[i]!='\0';i++)
	{
	if(k[i]==m[i])
	{
	count++;
	}
	}
	if(count==d && count==n)
	{
	printf("yes");
	}
	else
	{
	printf("no");
	}
	return 0;
}
