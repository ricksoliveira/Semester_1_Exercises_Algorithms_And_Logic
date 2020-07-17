#include <stdio.h>

int main(){
	
	char unidtemp;
	int tempF, tempC;
	
	printf("Digite 'F' para Fahrenheit ou 'C' para Celsius: ");
	scanf("%c", &unidtemp);
	
	switch(unidtemp){
		case'F':
			printf("Digite temperatura em Fahrenheit: ");
			scanf("%d", &tempF);
			
			tempC = 5.0/9*(tempF-32);
			
			printf("%d graus Fahrenheit correspondem a %d graus Celsius", tempF, tempC);
			break;
			
		case'C':
			printf("Digite temperatura em Celsius: ");
			scanf("%d", &tempC);
			
			tempF = tempC*1.8+32;
			
			printf("%d graus Celsius correspondem a %d graus Fahrenheit", tempC, tempF);
			break;
		
		default:
			printf("Voce nao digitou uma das letras validas.");
			break;
	}
	
}
