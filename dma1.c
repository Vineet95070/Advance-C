#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int *ptr = (int *) malloc( 5 * sizeof(int) );
	
	if( ptr == NULL ){
		
		printf("Memory allocation fail! \n");
		return;
	}
	else{
		
		printf("Memory allocated sucessfully! \n");
	}
	
	int i;
	for(i=0; i<5; i++){
		
		printf("ptr[%d] : ", i);
		scanf("%d", ptr+i);
	}
	
	for(i=0; i<5; i++){
		
		printf("ptr[%d] : %d \n", i, *(ptr+i) );
	}
	
	return 0;
}
