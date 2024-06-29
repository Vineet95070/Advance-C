#include <stdio.h>

int main(){
	
	FILE* fptr = fopen("C:/Users/Realme/OneDrive/Documents/Vs code/c language/c++/Btech KGI/File handling/file.txt", "r");
	
	if( fptr == NULL ){
		
		printf("File opening fail! \n");
		exit(1);
	}
	else
		printf("File open sucessfully! \n");
		
	
	char word[100];
	fscanf(fptr ,"%[^\n]s", word);
	
	printf("%s", word);
	
	
	if ( fclose(fptr) == 0 )
		printf("File close: \n");
	else
		printf("File not closed!\n");
	
	
	return 0;
}
