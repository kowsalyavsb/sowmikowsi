#include <stdio.h>

int main(void) {
	int k,m,d,c;
	scanf("%d",&k);
	m=k%10;
	d=k/10;
	c=d*d+m*m;
	printf("%d",c);
	return 0;
}
