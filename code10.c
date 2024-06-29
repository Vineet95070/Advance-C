#include <stdio.h>

//	Program to print A to Z;

int main(){
	
	int start = 'A';
	int end = 'Z';
	
	while(start <= end){
		
		printf("%c  \n", start++);
		
	}
	
	return 0;
}
