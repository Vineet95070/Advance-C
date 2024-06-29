#include <stdio.h>

int main(){
	
	label:
		printf("Enter a number: ");
		int num;
		scanf("%d", &num);
	
	if( num != 0){
		
		goto label;
	}
	else{
		
		goto end;
	}
	
		
	end:
	
	return 0;
}
