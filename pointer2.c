#include <stdio.h>
#include "file.h" 

int main() {
    int *ptr = &x; 
    
	// Print the size of the pointer variable (using %d for size_t)
    printf("Size of pointer: %d", sizeof(ptr)); 
    
    return 0;
}

