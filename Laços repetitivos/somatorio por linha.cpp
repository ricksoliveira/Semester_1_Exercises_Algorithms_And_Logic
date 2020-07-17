#include <stdio.h>

int main(){
	
	int n, i, acu;
	acu = 0;
	
	scanf("%d", &n);
	
	for(i=1; i<=n; i++){
		acu = acu + i;
		printf("%d\n", acu);
	}
	
}
