#include <stdio.h>

void function2(int* x){
	
	*x = 14;
	x = 14;
}

int main(){
	
	int x = 12;
	
	function2( &x ); 	//call by reference
	
	printf("%d  \n", x);
	
	return 0;
}
