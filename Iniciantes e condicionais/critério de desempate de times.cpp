#include <stdio.h>

int main(){
	
	int va, vb, sga, sgb, gma, gmb, cva, cvb, caa, cab;
	
	printf("Vitorias do time A: ");
	scanf("%d", &va);
	printf("Saldo de gols do time A: ");
	scanf("%d", &sga);
	printf("Gols marcados pelo time A: ");
	scanf("%d", &gma);
	printf("Cartoes vermelhos do time A: ");
	scanf("%d", &cva);
	printf("Cartoes amarelos do time A: ");
	scanf("%d", &caa);
	
	printf("\nVitorias do time B: ");
	scanf("%d", &vb);
	printf("Saldo de gols do time B: ");
	scanf("%d", &sgb);
	printf("Gols marcados pelo time B: ");
	scanf("%d", &gmb);
	printf("Cartoes vermelhos do time B: ");
	scanf("%d", &cvb);
	printf("Cartoes amarelos do time B: ");
	scanf("%d", &cab);
	printf("\n");
	
	if(va > vb)
		printf("Time A vence o desempate.");
	else if(va < vb)
		printf("Time B vence o desempate.");
	else if(sga > sgb)
		printf("Time A vence o desempate.");
	else if(sga < sgb)
		printf("Time B vence o desempate.");
	else if(gma > gmb)
		printf("Time A vence o desempate.");
	else if(gma < gmb)
		printf("Time B vence o desempate.");
	else if(cva > cvb)
		printf("Time B vence o desempate.");
	else if(cva < cvb)
		printf("Time A vence o desempate.");
	else if(caa > cab)
		printf("Time B vence o desempate.");
	else if(caa < cab)
		printf("Time A vence o desempate.");
	else
		printf("Os times ainda estao empatados.");
			
	
	return 0;
}
