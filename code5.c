#include <stdio.h>

int main(){
	
	int num;
	printf("Enter your number: ");
	scanf("%d", &num);
	int fact = 1;
	
	int i = 2;
	while(i <= num){
		
		fact *= i;
		
		i++;
	}
	
	printf("Factorial is: %d", fact);
	
	return 0;
}
