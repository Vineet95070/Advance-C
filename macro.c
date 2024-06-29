#include <stdio.h>

//num and msg are called macro, during compilation it will be 
//load first, maco does not have any data type.

#define num 21
#define msg "Good morning: "

int main(){
	
	printf("num : %d \n", num);
	
	printf("MSG : %s \n", msg);
	
	return 0;
}
