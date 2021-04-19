#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
int main(void) {
	char s[110]={'\0'};//,t[10],u[10];
	int i=0;
 
	scanf("%s",s);
 
	while(s[i]!='\0'){
		s[i]='x';
		i++;
	}
	printf("%s",s);
	return 0;
}
