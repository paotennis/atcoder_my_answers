#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
#include <inttypes.h>

 
int main(void){
	int a;
	int answer;
 
	scanf("%d",&a);
	answer=a+a*a+a*a*a;
	printf("%d",answer);
	return 0;
}
