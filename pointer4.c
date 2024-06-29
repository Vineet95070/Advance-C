#include <stdio.h>

int main() {
    int x = 34;
    int *ptr = &x;
    
    printf("%p\n", (void*)&x);    // Address of x 
    printf("%d\n", *ptr);         // 34
    printf("%p\n", &ptr);  // Address of ptr 
    printf("%p\n", *(&ptr)); // Address of x 
    printf("%d\n", *(&x));        // 34
    
    return 0;
}

