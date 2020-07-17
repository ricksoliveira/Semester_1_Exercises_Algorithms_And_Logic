#include <stdio.h>
#include <math.h>

int main(){
	
	int x, y;
	
	scanf("%d  %d", &x, &y);
	
	printf("\nx=%d e y=%d\n", x, y);
	
	x = y + x;
	y = x - y;
	x = x - y;
	
	printf("\nx=%d e y=%d", x, y);
	
}
