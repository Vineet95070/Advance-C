#include <stdio.h>
//#pragma pack(1)

struct btech{
		
		char ch;
		int name;
		char ch2;
};

int main(){
	
	struct btech s1;
	
	printf("Size of structure: %d", sizeof( struct btech ));
	
	return 0;
}
