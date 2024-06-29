#include <stdio.h>

void func2(){
	
//	static variable allocate memory for any identifier at once.
	static int x = 1;
	x = x+1;
	printf("%d  ", x);
}

void func1(){
	
	int x = 1;
	x = x+1;
	printf("%d  ", x);
}

int main(){
	
	func1();
	func1();
	
	printf("\n \n");

	func2();
	func2();
	
	return 0;
}
