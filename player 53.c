#include <stdio.h>

int main(void) {
      char s[30];
      scanf("%s",s);
      int i,count=0;
      for(i=0;s[i]!='\0';i++)
      {
      	count ++;
      }
      printf("%d",count);
	return 0;
}
