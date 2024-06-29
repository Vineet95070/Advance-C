#include <stdio.h>

//wap to identify given number is odd or even:

int main(){
	
	int num;
	
	printf("Enter your number: ");
	scanf("%d", &num);
	
	if(num % 2 == 0){
		
		printf("Number is even: ");
	}
	else{
		
		printf("Number is odd: ");
	}
	
	return 0;
}
