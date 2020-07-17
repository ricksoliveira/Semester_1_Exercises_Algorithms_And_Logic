#include <stdio.h>
#include <math.h>
#include <locale.h>

int main(){
	
	double a, b, c, x1, x2, del, xv, yv;
	
	setlocale(LC_ALL, "Portuguese");
	printf("Dada a equa��o ax^2 + bx + c, forne�a os valores de A, B e C, respectivamente: ");
	scanf("%lf %lf %lf", &a, &b, &c);
	
	if(a!=0){
		del = pow(b,2) - (4*a*c);
		x1 = (-b + sqrt(del)) / (2*a);
		x2 = (-b - sqrt(del)) / (2*a);
		xv = (-b) / (2*a);
		yv = (-del) / (4*a);
		printf("\nDelta = %.2lf\n", del);
			
			if(a>0) printf("\nComo A � positivo, a concavidade da par�bola � voltada para CIMA.\n\nV�rtice da par�bola � o ponto M�nimo (%.2lf; %.2lf)\n", xv, yv);
			else if(a<0) printf("\nComo A � negativo, a concavidade da par�bola � voltada para BAIXO.\n\nV�rtice da par�bola � o ponto M�ximo (%.2lf; %.2lf)\n", xv, yv);
			
			if(del>0) printf("\nDelta � positivo, a equa��o tem duas ra�zes:\nX1 = (%.2lf; 0)\nX2 = (%.2lf; 0)\n", x1, x2);
			else if(del==0) printf("\nDelta � igual a zero, a equa��o tem uma �nica ra�z:\nX = (%.2lf; 0)\n(raiz = v�rtice)\n", x1);
			else if(del<0) printf("\nDelta � negativo, a equa��o n�o tem ra�zes reais pois a par�bola n�o encosta no eixo X.\n");
	}else
		printf("\nErro, a = 0.\nN�o foi poss�vel calcular.\nA equa��o n�o � de segundo grau.");
}
