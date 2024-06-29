
//Write a program to identify number is devisible by 3 or not:

#include <stdio.h>

int main(){
	
	int num;
	printf("Enter number: ");
	scanf("%d", &num);
	
	if(num == 0){
		
		printf("Number is 0, Invalid input: ");
	}
	else if(num%3 == 0){
		
		printf("Devisible by three");	
	}
	else{
		
		printf("Not devisible: ");
	}
	
	return 0;
}













