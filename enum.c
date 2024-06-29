#include <stdio.h>

enum weeks{
	
	sunday = 10,
	monday,
	tuesday,
	wednesday,
	thursday,
	friday,
	saturday
};

int main(){
	
	enum weeks today = friday;
	printf("Today: %d \n", today);
	printf("%d : \n", sunday);
	printf("%d : \n", monday);
	printf("%d : \n", tuesday);
	printf("%d : \n", wednesday);
	printf("%d : \n", thursday);
	printf("%d : \n", friday);
	printf("%d : \n", saturday);
	
	return 0;
}
