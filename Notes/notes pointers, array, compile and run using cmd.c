===========================================================================================

Compiling c/cpp file using command prompt:
	
	compile:-	g++ file_name.c 
	run:-		a

	compile:-	g++ file_name.c -o exc_file_name
	run:-		exc_file_name

	compile:-	g++ -E file_name.c -o exc_file_name
	run:-		exc_file_name

Expendable file: Extension of expendable file is '.i'
	create .i file :-	g++ file_name.c -o expendable_file_name.i
	run:-		type expendable_file_name.i

	
We can also include properties of another file using 
#include "file_name.h"


=============================22-May 2024===================================

Pointers:
	Pointers is a special type of variables which is use to store the 
	address of another variable.
	
	-	They are defined using the * (asterisk) symbol.
	-	Pointers are powerful because they provide direct access to memory blocks.
	
	Synatax:
		data_type * variable_name = & another_variable_name;
	
	Ex:-
		int *ptr = &x;
		int* ptr = &x;
		int * ptr = &x;
		
	printf("%d \n", &x);		//address of x;
	printf("%d \n", ptr);		//Address of variable x ptr.
	printf("%d \n", *&ptr);		//Value at the address stored in ptr
	
	printf("%d \n", *ptr);		//value at this address
	printf("%d \n", x);			//Value of variable 'x'
	
	
Pointer to Pointer:
	To store address of a poiner we use pointer to pointer concept.
	-	It is decleared by '**' double star symbol.
	
	Syntax:-
		data_type ** pointe_name = &another_pointer_name;
		
		Ex:-
			int **pptr = &ptr;


Types of Pointer:
	1.Void poiner:
		A void pointer is a pointer that has no associated data type. 
		It can point to any data type.
		Syntax:		void *ptr;
					void *x;
		
	2.Wild Pointer:
		A wild pointer is a pointer that points to an invalid or 
		uninitialized memory location.
		Syntax:		int* ptr = 34;
					int* x = 23;
					
	3.Dangling pointer:
		A dangling pointer is a pointer that points to a memory location 
		that has been deallocated.
		Syntax:
					int * ptr = &x;
					free(ptr);
		
	4.Null Pointer:
		It is a type of pointer which contains null value.
		Ex:    int* ptr = NULL; 
		
		
=============================================================================================


Array:
	An array is a derived data type used to store elements of the same 
	data type in contiguous memory locations.
	-	We need to define the size of array before decleration.
	-	Arrays are indexed starting from 0 in C and C++.
	
	Syntax:
		data_type array_name[size_of_array];
		
	Ex:
		int arr[5] = {34, 65, 39, 67, 12};
	
	
2-D Array:
	In programming 2-D or 2 Dimensional array is also called matrix.
	-	It is used to store elements in a table-like structure with rows 
		and columns.
	-	The size of both dimensions (columns and rows) must be defined
		before declaration.
	
	Syntax:
		data_type array_name[number_of_coloums][number_of_rows];
		
	Ex:
		int arr[2][3] = { {1, 2, 3 }, { 4, 5, 6 } };
	
	
	
	
	
	
