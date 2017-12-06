#include<stdio.h>

long long int main(){
	long long int T,N,Q,i,prod=1,temp;
	scanf("%lld",&T);
	while(T--){
		prod=1;
		scanf("%lld %lld",&N,&Q);
		while(N--){
            scanf("%lld",&temp);
            if(temp>0)
            	prod*=temp;
		}
		while(Q--){
			scanf("%lld",&temp);
			printf("%lld ",temp/prod);
		}
		printf("\n");
	}


	/*asd*/