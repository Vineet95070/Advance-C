#include <stdio.h>
#include <stdlib.h>

struct btech{
	
	int age;
	int roll;
	float cgpa;
};

int main(){
	
	//dynamic element of structure.
	struct btech *obj1 = (struct btech*)malloc( sizeof(struct btech) );
	obj1->age = 34;	
	obj1->roll = 3423;
	obj1->cgpa = 9.4;
	
	struct btech obj2;
	obj2.age = 23;
	obj2.cgpa = 3.4;
	obj2.roll = 24321;
	
	printf("Age: %d\n", obj1->age);
	printf("Roll: %d\n", obj1->roll);
	printf("CGPA: %f\n\n", obj1->cgpa);
	
	printf("Age: %d\n", obj2.age);
	printf("Roll: %d\n", obj2.roll);
	printf("CGPA: %f\n", obj2.cgpa);
	
	return 0;
}
