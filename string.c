#include <stdio.h>

void func(char *x) {
	
    // Example function that does something with the array
    printf("In func: %c\n", x[0]);
}

int main() {
    // name of array contains the base address itself
    char arr[3] = {'K', 'G', 'I'};
    
    printf("%p  \n", (void*)arr);      // gives the base address
    printf("%p  \n", (void*)&arr[0]);  // gives the base address
    printf("%p  \n", (void*)&arr);     // gives the base address
    
    printf("%c  \n", arr[0]);          // gives the 1st index value
    
    func(arr);          // passing the base address of the array to the function
    func(&arr[0]);      // also passing the base address of the array to the function
    
    return 0;
}

