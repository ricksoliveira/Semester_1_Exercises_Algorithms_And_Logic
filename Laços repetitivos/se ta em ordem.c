#include <stdio.h>

int main(){
	
	int n, ordemc, ordemd, anterior, atual, i;
	ordemc=0;
	ordemd=0;
	
	scanf("%d", &n);
	scanf("%d", &anterior);
	
	for(i=0; i<n-1; i++){
		scanf("%d", &atual);
		if(atual>anterior)
			ordemc++;
		else
			ordemd++;
		anterior = atual;
	}
	
	if(ordemc == n-1 || ordemd == n-1)
		printf("ta na ordem");
	else
		printf("nao ta na ordem");
	
}
