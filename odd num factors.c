#include <stdio.h>
int main(void) 
{
	int i,n;
	scanf("%d",&n);
	for(i=2;i<n;i++)
	{
		if(i%2==1&&n%i==0)
		{
			printf("%d ",i);
		}
	}
	return 0;
}
