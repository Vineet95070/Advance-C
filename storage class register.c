#include <stdio.h>

int main(){
	
//	register keyword tells compiler to allocate memory inside registers
	register int x = 12;
	
	printf("x = %d", x);
	
	return 0;
}
