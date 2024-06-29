#include <stdio.h>
#include <string.h>

int main(){
	
	char name[] = {"Shiva Ji"};
	
	int i = strlen(name) - 1;
	while( i >= 0 ){
		
		printf("%c", name[i] );
		
		i-- ;
	}
	
//	printf("%c", name[7] );
//	printf("%c", name[6] );
//	printf("%c", name[5] );
//	printf("%c", name[4] );
//	printf("%c", name[3] );
//	printf("%c", name[2] );
//	printf("%c", name[1] );
//	printf("%c", name[0] );
	
	return 0;
	
}
