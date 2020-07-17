#include <stdio.h>
#include <string.h>

int main(){
	
	char nome[80], nomeinv[80], cont=0;
	int tam, i, j, k;
	
	scanf("%s", nome);
	
	tam = strlen(nome);
	
	nomeinv[tam] = '\0';
	
	j = tam-1;
	i = 0;
	
	while(tam>i){
		nomeinv[j] = nome[i];
		j--;
		i++;
	}
	
	for(k=0; k<tam-1; k++){
		if(nome[k] == nomeinv[k]){
			cont++;
		}
	}
	
	if(cont == tam-1){
		printf("palindromo");
	}
	else{
		printf("nao");
	}
		
}
