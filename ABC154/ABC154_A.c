#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
int main(void) {
	char s[12]={'\0'},t[12]={'\0'},u[12]={'\0'};
	int a,b;
 
	scanf("%s %s\n",s,t);
	scanf("%d %d\n",&a,&b);
	scanf("%s",u);
 
	if(!strcmp(s,u)){
		printf("%d %d",a-1,b);
	}else{
		printf("%d %d",a,b-1);
	}
	return 0;
}
