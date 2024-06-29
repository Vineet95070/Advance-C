#include <stdio.h>

int sum = 0;
void function(int n){
	
	if( n==0 )
		return;
	
	sum += n;
	
	function(n-1);
}

int main(){
	
	function(10);
	
	printf("Sum: %d", sum);
	
	return 0;
}
