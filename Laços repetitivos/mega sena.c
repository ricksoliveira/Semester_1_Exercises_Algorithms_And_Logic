#include <stdio.h>

int main(){
	
	int d1, d2, d3, d4, d5, d6;
	long long int c;
	c=0;
	
	for(d1=1; d1<=60; d1++){
		for(d2=d1+1; d2<=60; d2++){
			for(d3=d2+1; d3<=60; d3++){
				for(d4=d3+1; d4<=60; d4++){
					for(d5=d4+1; d5<=60; d5++){
						for(d6=d5+1; d6<=60; d6++){
							printf("\n%d %d %d %d %d %d - %lli", d1, d2, d3, d4, d5, d6, c);
							c++;
						}
					}
				}
			}
		}
	}
	printf("\n\n%lli", c);
}
