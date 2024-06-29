#include <stdio.h>

int main(){
	
	int x = 43;
	
	int *ptr = &x;
	
	int **pptr = &ptr;
	
	printf("%d \n", &ptr);
	printf("%d \n", pptr);
	
	printf("%d \n", ptr);		//value of variable ptr;
	printf("%d \n", *&ptr);		//Value at address of ptr
	printf("%d \n", &x);		//address of x;
	
	return 0;
}
