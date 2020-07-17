#include <stdio.h>
#include <math.h>

int main(){
	
	int a, b, c, area, s;
	
	scanf("%d %d %d", &a, &b, &c);
	
	if(a+b > c && b+c > a && a+c > b){
		if(a == b && b == c)
			printf("equilatero\n");
		else if(a == b || b == c || a == c)
			printf("isosceles\n");
		else
			printf("escaleno\n");
			
	s = (a+b+c)/2;
	
	area = sqrt(s*(s-a)*(s-b)*(s-c));
	
	printf("%d", area);
	
	}else
		printf("nao existe este triangulo");
		
}
