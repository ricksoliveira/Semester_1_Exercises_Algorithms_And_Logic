#include <stdio.h>
#include <math.h>

int main(){
	
	double x, y;
	
	printf("Digite um valor real para X: ");
	scanf("%lf", &x);
	
	if(x>=0){
		y = sqrt(x) + (x/2) + pow(x,x);
		printf("\nf(%.2lf) = %.3lf", x, y);
		
	}else
		printf("\nNao existe Y para este X");
	
}
