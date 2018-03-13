#include <stdio.h>
int main()
{
	int i,j,s[3],n,k,temp;
	scanf("%d",&n);
	scanf("%d",&k);
	for(i=0;i<=n;i++)
	{
		scanf("%d",&s[i]);
	}
	for(i=0;i<=n;i++)
	{
		for(j=i+1;j<=n;j++)
		{
			if(s[i]>s[j])
			{
				temp=s[i];
				s[i]=s[j];
				s[j]=temp;
			}
		}
	}
	printf("%d\n",s[k-1]);
	return 0;
}
