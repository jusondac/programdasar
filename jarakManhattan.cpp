#include <cstdio>
#include <cmath>

int main(){
	int x1,x2,y1,y2,hasil;
	scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
	hasil = (x1 - x2) + (y1 - y2);
	hasil = abs(hasil);
	printf("%d\n",hasil);
}

