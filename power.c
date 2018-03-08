#include<stdio.h>
#include<math.h>
int main()
{
	int n,k;
	scanf("%d",&n);
            for(k=1;k<=n;k++)	 
            if(pow(2,k)==n) 
            printf("yes");
	return 0;
}
