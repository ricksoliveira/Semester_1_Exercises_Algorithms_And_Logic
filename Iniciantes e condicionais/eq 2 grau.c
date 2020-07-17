#include <stdio.h>
#include <math.h>

int main(){
	
	double a, b, c, x1, x2, del;
	
	scanf("%lf %lf %lf", &a, &b, &c);
	
	if(a!=0){
		del = b*b - 4*a*c;
		printf("delta = %.5lf\n", del);	
			if(del>=0){
				x1 = (-b + sqrt(del)) / (2*a);
				x2 = (-b - sqrt(del)) / (2*a);
				printf("x1 = %.5lf\nx2 = %.5lf", x1, x2);
			}else
				printf("Nao existem raizes rais");
	}else
		printf("A equaçao nao e de segundo grau");
		
}
