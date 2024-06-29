#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int n;
	printf("Enter an integer: ");
	scanf("%d", &n);
	
	int *ptr = (int *)calloc( n , sizeof(int));
	
	int i;
//	for(i=0; i<n; i++){
//		
//		printf("ptr[%d] : ", i);
//		scanf( "%d", ptr+i );
//	}
	
	for(i=0; i<n; i++){
		
		printf("%d \n", *(ptr+i) );
	}
	
	return 0;
}
