#include <cstdio>

int main(){
	int a,b;
	b = 0;
	while(scanf("%d",&a) != EOF){
		if (a>=1 && a  <= 1000){
			b = b + a;
		}
	}
	printf("%d\n",b);
}
