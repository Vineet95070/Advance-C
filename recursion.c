#include <stdio.h>

int printsum(int); 

int main(){
	
	int num;
	printf("Enter number: ");
	scanf("%d", &num);
	
	printsum(num);
	
	return 0;
}

int printsum(int x){
	
	if(x == 0){
		return -1;
	}
	
	printf("%d ", x);
	return printsum(x-1);
}
