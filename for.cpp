#include <cstdio>

int main(){
	int N,hasil = 1;
	scanf("%d",&N);
	for(int i = 1; i<=N; i++){
		int Bi;
		scanf("%d",&Bi);
		hasil += Bi;
	}
	printf("%d\n",hasil);
}

