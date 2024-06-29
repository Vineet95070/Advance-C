#include <stdio.h>

typedef unsigned long lu;
typedef struct btech c;

struct btech{
	
	lu roll;
	float cgpa;
};


int main(){
	
	c ele;
	
	ele.roll = 4983;
	ele.cgpa = 3.4;
	
	printf("Roll: %lu  \n", ele.roll);
	printf("CGPA: %f \n", ele.cgpa);
	
	return 0;
}
