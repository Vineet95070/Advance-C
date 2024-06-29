#include <stdio.h>

void function1(int x){
	
	x = 14;
}

int main(){
	
	int x = 12;
	
	function1( x );		//call by value
	
	printf("%d  \n", x);
	
	return 0;
}
