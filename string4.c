#include <stdio.h>
#include <string.h>

int main(){
	
	char name[100];
	
	printf("Enter your Name: ");
	
	//Escape sequence method
//	scanf("%[^\n]s", &name);
	
	gets(name);
	
//	printf("%s", name);
	puts(name);
	
	return 0;
}
