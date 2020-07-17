#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int prato;
	
	do{
		system("cls");
		printf("Escolha um dos pratos\n 1 - Bife\n 2 - Macarrao\n 3 - Arroz\n 4 - Salada\n 5 - SAIR\n ");
		scanf("%d", &prato);
	
		switch(prato){
			case 1:
				printf("Voce escolheu Bife\n");
				break;
			case 2:
				printf("Voce escolheu Macarrao\n");
				break;
			case 3:
				printf("Voce escolheu Arroz\n");
				break;
			case 4:
				printf("Voce escolheu Salada\n");
				break;
			case 5:
				printf("Saindo do Menu\n");
				break;
			default:
				printf("Voce nao escolheu uma das 4 opcoes\n");
			}
			system("pause");
			
	}while(prato!=5);
	return 0;
}
