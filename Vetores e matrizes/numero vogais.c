#include <stdio.h>
#include <string.h>

int main(){
	
	char palavra[50], vogais[5] = {'a', 'e', 'i', 'o', 'u'};
	int i, j, numvogais=0;
	
	scanf("%s", palavra);
	
	for(i=0; palavra[i] != '\0'; i++){
		for(j=0; j<5; j++){
			if(palavra[i] == vogais[j]){
				numvogais++;
			}
		}
	}
	printf("%d", numvogais);
		
}
