#include <stdio.h>

int main(){
	
	int ano;
	
	scanf("%d", &ano);
	
	if(ano%400==0)
		printf("O ano e bissexto");
	else if(ano%4==0 && ano%100!=0)
		printf("O ano e bissexto");
	else
		printf("nao e bissexto");
	
}
