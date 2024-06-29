//Take a character from use and print that character is 
//vowel or consonenet:

#include <stdio.h>

int main(){
	
	
	while(1){
		
		char ch;
		printf("Enter your cheracter: ");
		scanf("\n%c", &ch);
		
		if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
		
			printf("Vowel: \n\n");
		
		else if(ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
		
			printf("Vowel: \n\n");
		
		else
		
			printf("Consonent: \n\n");
	}
	
	
	return 0;
}
