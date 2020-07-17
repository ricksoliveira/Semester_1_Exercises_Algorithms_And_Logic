#include <stdio.h>

int main(){
	
	int d1, m1, a1, d2, m2, a2;
	
	printf("Digite o dia da primeira data: ");
	scanf("%d", &d1);
	printf("Digite o mes da primeira data: ");
	scanf("%d", &m1);
	printf("Digite o ano da primeira data: ");
	scanf("%d", &a1);
	printf("\nDigite o dia da segunda data: ");
	scanf("%d", &d2);
	printf("Digite o mes da segunda data: ");
	scanf("%d", &m2);
	printf("Digite o ano da segunda data: ");
	scanf("%d", &a2);
	
	printf("\nPrimeira data: %d/%d/%d", d1, m1, a1);
	printf("\nSegunda data: %d/%d/%d\n", d2, m2, a2);
	
	if(a1>a2)
		printf("\nA maior data e: %d/%d/%d", d1, m1, a1);
	else if(a1<a2)
		printf("\nA maior data e: %d/%d/%d", d2, m2, a2);
	else if(m1>m2)
		printf("\nA maior data e: %d/%d/%d", d1, m1, a1);
	else if(m1<m2)
		printf("\nA maior data e: %d/%d/%d", d2, m2, a2);
	else if(d1>d2)
		printf("\nA maior data e: %d/%d/%d", d1, m1, a1);
	else if(d1<d2)
		printf("\nA maior data e: %d/%d/%d", d2, m2, a2);
	else
		printf("\nAs datas sao iguais");	
}
