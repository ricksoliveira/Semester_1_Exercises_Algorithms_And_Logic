#include <stdio.h>

int main(){
	
	int n, i, j;
	
	scanf("%d", &n);
	
	if(n<=50){
		
	for(i=1; i<=n; i++){
		for(j=1; j<=n; j++){
			if(i==j)
				printf("%d", j);
			else
				printf("  ");
		}
		printf("\n");
	}
	}else
		printf("digite um valor menor que 50");
}
