#include <stdio.h>
#include "file2.h"

//extern tells compiler, that variable is define in another file 
extern float cgpa;
extern void details();

int main(){
	
	details();
	printf("CGPA : %.2f", cgpa);
	
	return 0;
}
