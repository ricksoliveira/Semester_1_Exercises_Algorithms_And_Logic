#include <stdio.h>

int main(){
	
	int v1[5], v2[5], produto, acu=0;
	int i;
	
	for(i=0; i<5; i++){
		scanf("%d", &v1[i]);
	}
	
	printf("\n");
	
	for(i=0; i<5; i++){
		scanf("%d", &v2[i]);
	}
	
	for(i=0; i<5; i++){
		produto = v1[i]*v2[i];
		acu = acu + produto;
	}
	
	printf("\n%d", acu);
}
