#include <stdio.h>

int main(){
 
	int vetor[10], acu=0, i;
	
	for(i=0; i<10; i++){
		scanf("%d", &vetor[i]);
		if(vetor[i] % 2 != 0){
			acu = acu + vetor[i];
		}
	}
	printf("%d", acu);
	
}
