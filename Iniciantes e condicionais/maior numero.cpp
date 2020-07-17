#include <stdio.h>

int main(){
	
	int a, b, c;
	
	printf("Digite tres numeros inteiros: ");
	scanf("%d" "%d" "%d", &a, &b, &c);
	
	if(a>b && a>c)
		printf("O maior numero e %d", a);
		
	else
		if(b>a && b>c)
			printf("O maior numero e %d", b);
			
		else
			printf("O maior numero e %d", c);
		
	return 0;
}
