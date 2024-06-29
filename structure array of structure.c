#include <stdio.h>

struct btech{
	
	char name[20];
	int roll;
	float cgpa;
	
}obj[3];

void getdata(int n){
	
	printf("%d. Enter Name: ", n+1);
//	scanf("%[^\n]s", &obj[n].name);		//scape sequence method
	fgets(obj[n].name, 20, stdin);
	fflush(stdin);						//to clear buffer space
	
	printf("%d. Enter Roll: ", n+1);
	scanf("%d", &obj[n].roll);
	fflush(stdin);
	
	printf("%d. Enter CGPA: ", n+1);
	scanf("%f", &obj[n].cgpa);
	fflush(stdin);
}

void putdata(int n){
	
	printf("\n%d. Name: %s\n", n+1, obj[n].name);
	printf("%d. Roll: %d\n", n+1, obj[n].roll);
	printf("%d. Name: %f\n\n", n+1, obj[n].cgpa);
}

int main(){
	
//	struct btech obj[3];
	int i;
	for(i=0; i<3; i++){
		
		getdata(i);
	}
	
	for(i=0; i<3; i++){
		
		putdata(i);
	}
	
	return 0;
}
