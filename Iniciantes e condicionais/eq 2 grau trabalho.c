#include <stdio.h>
#include <math.h>

int main(){
	
	double a, b, c, x1, x2, del, xv, yv;
	
	printf("Digite os valores A, B e C de uma equacao de segundo grau, respectivamente: ");
	scanf("%lf %lf %lf", &a, &b, &c);
	
	if(a>0){
		printf("\nA concavidade da parabola e voltada para CIMA.\n");
		del = (b*b) - (4*a*c);
		printf("\nDelta = %.3lf\n", del);
		if(del>0){
			x1 = (-b + sqrt(del)) / (2*a);
			x2 = (-b - sqrt(del)) / (2*a);
			xv = (-b) / (2*a);
			yv = (-del) / (4*a);
			printf("\nx1 = (%.3lf; 0)\nx2 = (%.3lf; 0)\nVertice = (%.3lf; %.3lf)\n", x1, x2, xv, yv);
		}else if(del==0){
			x1 = (-b + sqrt(del)) / (2*a);
			x2 = (-b - sqrt(del)) / (2*a);
			xv = (-b) / (2*a);
			yv = (-del) / (4*a);
			printf("\nx1 = (%.3lf; 0)\nx2 = (%.3lf; 0)\nVertice = (%.3lf; %.3lf)\n", x1, x2, xv, yv);
		}else{
			printf("\nNao existem raizes reais para esta equacao.\n");
			xv = (-b) / (2*a);
			yv = (-del) / (4*a);
			printf("\nVertice = (%.3lf; %.3lf)\n", xv, yv);
		}
	}else if(a<0){
		printf("\nA concavidade da parabola e voltada para BAIXO.\n");
		del = (b*b) - (4*a*c);
		printf("\nDelta = %.3lf\n", del);
		if(del>0){
			x1 = (-b + sqrt(del)) / (2*a);
			x2 = (-b - sqrt(del)) / (2*a);
			xv = (-b) / (2*a);
			yv = (-del) / (4*a);
			printf("\nx1 = (%.3lf; 0)\nx2 = (%.3lf; 0)\nVertice = (%.3lf; %.3lf)\n", x1, x2, xv, yv);
		}else if(del==0){
			x1 = (-b + sqrt(del)) / (2*a);
			x2 = (-b - sqrt(del)) / (2*a);
			xv = (-b) / (2*a);
			yv = (-del) / (4*a);
			printf("\nx1 = (%.3lf; 0)\nx2 = (%.3lf; 0)\nVertice = (%.3lf; %.3lf)\n", x1, x2, xv, yv);
		}else{
			printf("\nNao existem raizes reais para esta equacao.\n");
			xv = (-b) / (2*a);
			yv = (-del) / (4*a);
			printf("\nVertice = (%.3lf; %.3lf)\n", xv, yv);
		}
	}else
		printf("\nErro, a equacao nao e de segundo grau.");
}
