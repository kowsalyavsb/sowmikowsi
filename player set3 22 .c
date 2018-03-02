
#include <stdio.h>

int main(void) {
	int a,b,c,i;
	scanf("%d %d",&a,&b);
	for(i=2;i<=a;i++)
	{
		if(a%i==0 && b%i==0)
		{
			c=i;
		}
	}
	printf("%d",c);
	return 0;
}
