#include <stdio.h>

int main(){
	
	int age[5];
	
	int i;
	for(i=0; i<5; i++){
		
		printf("%d. student age: ", i+1);
		scanf("%d", &age[i]);
		
	}
	printf("\n\n");
	
	for(i=0; i<5; i++){
		
		printf("age[%d] : %d \n", i, age[i]);
		
	}
	
	
	return 0;
}
