#include <stdio.h>

//	Check the number is palindrom or not:

int main(){
	
	while(1){
		
		int num, rev = 0;
		printf("Enter number: ");
		scanf("%d", &num);
		
		int i = num;
		while(i > 0){
			
			int temp = i%10;
			rev = rev * 10 + temp;
			i /= 10;
		}
		
		if(num == rev){
			
			printf("Number is Palindrom: \n\n");
		}
		else{
			
			printf("Number is not Palindrom: \n\n");
		}
	}
	
	
	return 0;
}
