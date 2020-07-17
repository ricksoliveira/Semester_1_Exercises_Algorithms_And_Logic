#include <stdio.h>

int main(){
	
	int a, b, c;
	
	scanf("%d %d %d", &a, &b, &c);
	
	if(a>b && b>c)
		printf("ordem crescente: %d, %d, %d", c, b, a);
	else if(a>c && c>b)
		printf("ordem crescente: %d, %d, %d", b, c, a);
	else if(b>a && a>c)
		printf("ordem crescente: %d, %d, %d", c, a, b);
	else if(b>c && c>a)
		printf("ordem crescente: %d, %d, %d", a, c, b);
	else if(c>a && a>b)
		printf("ordem crescente: %d, %d, %d", b, a, c);
	else
		printf("ordem crescente: %d, %d, %d", a, b, c);
}
