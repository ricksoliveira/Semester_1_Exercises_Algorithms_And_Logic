#include <stdio.h>

int main(){
	
	long int n, i, acu;
	acu = 1;
	
	scanf("%d", &n);
	
	for(i=n; i>=1; i--){
		acu = acu * i;
	}
	printf("%d", acu);
	
}
