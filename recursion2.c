#include <stdio.h>

int sum = 0;

void function(int arr[], int s, int l){
	
	if( s==5 )
		return;
		
	sum += arr[s];
	
	s++;
	function(arr, s, l);
}

int main(){
	
	int arr[5] = {1,2,3,4,5};

	function(arr, 0, 4);
	
	printf("Sum: %d", sum);
	
	return 0;
}
