#include <stdio.h>

int main(){
	
	printf("Enter how many memory you want to reserve: ");
	int n;
	scanf("%d", &n);
	
	int *ptr = (int *)malloc( n * sizeof(int) );
	
	if( ptr == NULL ){
		
		printf("Fail to allocate memory: ");
		return;
	}
	else{
		printf("Memory is allocated sucessfully: ");
	}
	
	int i;
	for(i=0; i<n; i++){
		
		printf("ptr [%d] : ", i);
		scanf("%d", ptr + i);
	}
	
	for(i=0; i<n; i++){
		
		printf("ptr [%d] : %d", i, *(ptr + i) );
	}
	
	return 0;
}
