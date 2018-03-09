#include <stdio.h>
int main(void) {
	int n,k[10],i,j,count=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	scanf("%d",&k[i]);
	}
	for(i=0;i<n;i++)
	{
	 for(j=i+1;j<n;j++)
	 {
	   if(k[i]<k[j])
	   {
	    count++;
	   }
	 }
	}
	if(count==0)
	{
	printf("Yes");
	}
	else
	{
	printf("No");
	}
	return 0;
}
