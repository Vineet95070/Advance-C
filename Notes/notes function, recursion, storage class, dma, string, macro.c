-	Call by value:
		When we pass variable value as a argument in a function then it's
		called call by value;
		ex:		func(x, y);	//func() is a function and x and y is a variable
				func(23, 7.7);
				func('g', 3);
		
	
-	Call by reference:
		When we pass address of a variable in function call then its called
		call by reference.
		
		ex:		func(&x, &y);
		

Recursion:
	When function call itself then it's called Recursive function.
	When function call is present in its defenition then its called
	recursion.
	
	-	Base case:
		It is a condition when function is terminated its called base
		case.

=============================================================================

String:
	In C language there is no data type called string, but the
	there is a concept called cheracter arry, which referes to
	string.
	
Syntax:
		char string_name[] = {"Your String: "};
		
		char *string_name = {"Your String: "};

	-	If there is any grammatical mistake, then please correct me.
	-	Character arrays end with \0 in the C language.
	- 	Whitespace is also counted as a character in strings.
	-	The strlen() function is used to determine the length of a string.
	-	<string.h> is used to handle string functions in C.
	-	The gets() function is used to take user input as a string.
	-	The scanf(" %[^\n]s", name); with %[^\n] is also used to take user 
		input until the next line is encountered.
	-	The puts() function is used to print a string.

========================================10-June 2024======================================
Storage Classes:
	
	Storage class is refer to how variables are stored in memory.
	
-	Every computer system has multiple levels of memory blocks:
	1. Register
	2. Catch
	3. Main memory(RAM)
	4. Magnatic Disk
	5. Magnatic tape
	
	-	In C language there are mainly four storage class
	(i). automatic storage:
				This type of variable allocation mainly allocate memory in RAM or main
				memory.
		-	using auto keyword we can achive this type of memory allocation.
		Syntax:
			auto int num = 23;	
			
			
	(ii). Static memory:
			This type of variable allocation achive using static keyword, it reserve
			memory block inside stack.
		-	Stack follow LIFO [Last in first out mechanism]
		Syntax:
			static int x = 12;
			
	(iii). extern: 
				extern keyword say's that variable is defind or inetilize somewhere else
				in the memory.
			extern int num;
			
	(iv). register:
			The register keyword instructs the compiler to store the variable or data in
			register memory.
		Syntax:
			register int num = 12;


================================================================================================


Macro:
	In c language macro are load very first during compilation.
	-	to define macro we need to use '#' before identifier name.

	Synatx:
		#define x 12
		#define GREETING "Hello, "
		#define NAME "John"


====================================================================================================


DMA:
	DMA stands for Dynamic memory allocation, it allocate 
	memory during runtime of a program.
	
-	To achive Dynamic memory in C language we need to use
	following function's.
	1. malloc();
	2. calloc();
	3. realloc();

	Two types of memory allocation is possible in C languages:
		1. Compile time allocation:
			When memory is allocate for variables during compilation of a 
			progam then it called comile time memory allocatoin.
			
		-	In compile time memory is reserve inside stack.
		-	Stack have limited amount of storage.
			
		2. Run time allocation:
			Memory allocated for variables during program execution is 
			called run-time memory allocation.
			
		-	In run time memory is allocate inside heap.
		-	Heap have large amount of storage, and it also further extend.
		

	malloc():
		malloc stands for memory allocation, it returns NULL
		in case of fail to allocate memory.
	-	It return NULL in case of fail to allocate memory.
	-	malloc() function is defiend inside <stdlib> header file.
	-	malloc() assign garbage values on the memory block's.
	
	Syntax: 
		data_type* variable_name = (type_casting *)malloc( number_of_blocks );
		
	ex:
		int *ptr = (int *)malloc(n * sizeof(int) );

	
	calloc():
		calloc stands for contiguous allocation.
		- malloc() and calloc() are similar, but calloc() initializes 
		memory blocks with 0 values.
		- calloc alos defind inside <stdlib.h> header file.
		
	Syntax: 
		data_type *ptr_name = (type_case)calloc( n, sizeof(data_type));
	
	Ex:
		int *ptr = (int *)calloc(n, sizeof(int));















