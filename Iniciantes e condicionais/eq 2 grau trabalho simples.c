#include <stdio.h>
#include <math.h>
#include <locale.h>

int main(){
	
	double a, b, c, x1, x2, del, xv, yv;
	
	setlocale(LC_ALL, "Portuguese");
	printf("Dada a equação ax^2 + bx + c, forneça os valores de A, B e C, respectivamente: ");
	scanf("%lf %lf %lf", &a, &b, &c);
	
	if(a!=0){
		del = pow(b,2) - (4*a*c);
		x1 = (-b + sqrt(del)) / (2*a);
		x2 = (-b - sqrt(del)) / (2*a);
		xv = (-b) / (2*a);
		yv = (-del) / (4*a);
		printf("\nDelta = %.2lf\n", del);
			
			if(a>0) printf("\nComo A é positivo, a concavidade da parábola é voltada para CIMA.\n\nVértice da parábola é o ponto Mínimo (%.2lf; %.2lf)\n", xv, yv);
			else if(a<0) printf("\nComo A é negativo, a concavidade da parábola é voltada para BAIXO.\n\nVértice da parábola é o ponto Máximo (%.2lf; %.2lf)\n", xv, yv);
			
			if(del>0) printf("\nDelta é positivo, a equação tem duas raízes:\nX1 = (%.2lf; 0)\nX2 = (%.2lf; 0)\n", x1, x2);
			else if(del==0) printf("\nDelta é igual a zero, a equação tem uma única raíz:\nX = (%.2lf; 0)\n(raiz = vértice)\n", x1);
			else if(del<0) printf("\nDelta é negativo, a equação não tem raízes reais pois a parábola não encosta no eixo X.\n");
	}else
		printf("\nErro, a = 0.\nNão foi possível calcular.\nA equação não é de segundo grau.");
}
