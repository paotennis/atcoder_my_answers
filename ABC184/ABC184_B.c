#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int N,X;
	char S[200010]={'\0'};
	int i;
	int point;

	scanf("%d %d\n%s",&N,&X,S);
	point=X;
	for(i=0;i<N;i++){
		if(S[i]=='o'){
			point++;
		}else if(S[i]=='x'){
			if(point!=0){
				point--;
			}
		}
	}
	printf("%d",point);
	return 0;
}
