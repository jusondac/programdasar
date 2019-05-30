#include <cstdio>

int main(){
	int N,K,c;
	scanf("%d %d",&N,&K);

	for(c=1;c<=N;c++){
		if(c > 1){
			printf(" ");
		}if(c % K == 0){
			printf("*");
		}else {
			printf("%d",c);
		}
	}
	printf("\n");
}
