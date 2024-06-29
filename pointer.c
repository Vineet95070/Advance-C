#include <stdio.h>

int main() {
	
    int x = 23;
    int *ptr = &x;
    
    printf("%p \n", (void*)&x);    // Address of x
    printf("%p \n", (void*)ptr);   // Value of variable ptr (which is the address of x)
    
    printf("%d \n", *ptr);         // Value at the address stored in ptr (which is the value of x)
    printf("%d \n", x);            // Value of variable 'x'
    
    printf("%p \n", (void*)&ptr);  // Address of pointer ptr
    
    return 0;
}

