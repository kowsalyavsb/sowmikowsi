#include <stdio.h>

int main(void)
{
int a,b,c;
scanf("%d",&a);
scanf("%d %d",&b,&c);
switch(a)
{
	case 1:
	printf("%d",b/c);
	break;
	case 2:
	printf("%d",b%c);
	break;
	default:
	printf("default operations %d",b+c);
	break;
}
	return 0;
}
