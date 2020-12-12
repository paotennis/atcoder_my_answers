#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int A,B;
	int port=0;
	int answer;

	scanf("%d %d",&A,&B);
	if(B==1){
		printf("0");
		exit(0);
	}
	for(answer=1;port<B;answer++){
		port=A*answer-(answer-1);
	}
	printf("%d",--answer);
	return 0;
}
