#include <stdio.h>
#include <string.h>

int main(){
	
	char frase[50], fraseinv[50];
	int cont=0, i, j, tam1, tam2;
	
	fgets(frase, 50, stdin);
	
	tam1 = strlen(frase);
	
	frase[tam1-1] = '\0';
	fraseinv[tam1-1] = '\0';
	
	for(i=0, j=tam1-1; i<tam1-1 && j>=0; i++, j--){
		fraseinv[i] = frase[j];
	}
	
	for(i=0; i<tam1; i++){
		if(frase[i] == ' '){
			for(j=i; j<tam1; j++){
				frase[j] = frase[j+1];
			}
		}
		if(fraseinv[i] == ' '){
			for(j=i; j<tam2; j++){
				fraseinv[j] = fraseinv[j+1];
			}
		}
	}
	
	if(!strcmp(frase, fraseinv)) printf("sim");
	else printf("nao");
	
}
