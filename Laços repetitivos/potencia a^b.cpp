#include <stdio.h>

int main(){
	
	int a, b, i, acu;
	acu = 1;
	
	scanf("%d %d", &a, &b);
	
	for(i=1; i<=b; i++){
		acu = acu * a;
	}
	printf("%d", acu);
	
}
