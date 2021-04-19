#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
#include <inttypes.h>
 
int main(void){
	long long int n,ans=1;
	long long int x[10000010]={1};
	int i;
	int temp;
 
	scanf("%I64d",&n);
	for(i=2;i<=n;i++){
		for(temp=1;i*temp<=n;temp++){
			x[i*temp]++;
		}
	}
	for(i=2;i<=n;i++){
		ans+=(x[i]+1)*i;
	}
	printf("%lld",ans);
 
	return 0;
}
