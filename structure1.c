#include <stdio.h>

struct btech{
	
	char name[20];
	int age;
	float cgpa;
	
}rajan, ritesh;

int main(){
	
	strcpy( rajan.name, "rajan");
	rajan.age = 22;
	rajan.cgpa = 8.5;
	
	strcpy( ritesh.name, "ritesh");
	ritesh.age = 26;
	ritesh.cgpa = 7.7;
	
	printf("Name: %s \n", rajan.name);
	printf("Age: %d \n", rajan.age);
	printf("CGPA: %f \n\n", rajan.cgpa);
	
	printf("Name: %s \n", ritesh.name);
	printf("Age: %d \n", ritesh.age);
	printf("CGPA: %f \n\n", ritesh.cgpa);
	
	return 0;
}
