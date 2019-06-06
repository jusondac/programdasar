#include <stdio.h>

int main(){
	int a,b,c,e = -1;
	scanf("%d",&a);

	for(b=1;b<=a;b++){
		for(c=1;c<=b;c++){
			e = e + 1;
			if(e==10){
				e=0;
			}
			printf("%d",e);
		}
		printf("\n");
	}
}
