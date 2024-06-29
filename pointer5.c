#include <stdio.h>

int main(){
	
	float x = 45;
	
	int *ptr = (int *)&x;	//Type casting of variable x
	
	printf("%f\n", x);
	printf("%d\n", ptr);
	
	return 0;
}
