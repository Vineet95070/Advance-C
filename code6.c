#include <stdio.h>

int main(){
	
	int num;
	printf("Enter number: ");
	scanf("%d", &num);
	
	int i=1;
	while( i <= 10){
		
		int z = 78;
		printf("%d x %d = %d\n", num, i, num*i);
		
		i++;
	}
	
	return 0;
}
