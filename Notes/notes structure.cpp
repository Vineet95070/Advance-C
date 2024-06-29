Structure:
	Structure is a user-defind data type use to store different 
	type's of data in continuous mennor.
	
	- Variables defind inside structure are called structure member's.
	- To access structure member we need to declear structure element.
	- you can create any number of element's for an structure;
	
Syntax:
	
	struct structure_name{
		
		int name;
		char ch;
		char ch2;
	};
	
	- Structures are allocated in memory in chunks that are multiples 
	of the size of the largest data type among their members.
	
	- Padding Bytes: To align structure members correctly, the compiler may 
	insert padding bytes between them. Padding ensures that each member starts 
	at an address that's a multiple of its size or alignment requirement.
	
	#pragma pack(1)
	is use to create a memory packing of 1bite.
	
	
	
Array of Structure:
	When structure elements are defind using Subscript[] operator then 
	its called array of structures.
	
	Syntax: 
		struct structure_name element_name[number_of_element];
	
	
	- fflush(stdin) this function is use to clear buffer in C.
	- we can also use fgets() function to take string as user
	  input.
	  
Arraow Operator( -> ):
	The arrow operator (->) in C is used to access members of 
	a structure that is referenced by a pointer. 
	  
Dynamic Element of structure:
	When element of structure is allocate memory during run time then
	it is called Dynamic element;
	
	Syntax:
		struct structure_name *obj = (type_cast*)malloc(sizeof(struct));
		
Self referencial structure:
	When a structure element is of pointer type and able to store 
	address of itself then it calles self referential structure.
	
	Ex:
		struct mystruct{
			
			struct mystruct *ptr;
		};
	
Union:
	It is use to store hetrogenious type of data into single memory
	block.
	
	
	
	
	
	
	
	
	
