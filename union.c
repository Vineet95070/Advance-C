#include <stdio.h>

union btech{
	
	char section;
	int room;
};

int main(){
	
	union btech b1;
	b1.section = 'B';
	
	printf("%c \n", b1.section);
	printf("%d \n", b1.room);
	
	return 0;
}
