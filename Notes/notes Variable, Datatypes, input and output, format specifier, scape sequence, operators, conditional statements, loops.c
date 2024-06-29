1. Varables:
	It is like a container use to store data.
	
	-	Global variable:	
			The variable that accessable any where from the code.
			
	-	Local variable:
			The variable defined within a specific scope using paranthesis only.
			
	Definition:
		int x;
		int y;
	-	Re-definition is not allowed
		
	Initialization:
		x = 23;
		y = 76;
	-	Re-initialization is allowed.
		
	initialization and definition
		int x = 45;
	
2. Datatypes:
	Data type can be define as type of data you need to work on.
	
	int : -		67, 9, 43
	float: -	56.87,  43.78, 90.6
	double: - 	76.76, 78.34, 90.7
	bool: - 	0, 1
	char: -		'c', 'j', 'K'
	long: - 	4567890876
	long long: -	(two time of long)	9876543456976
	
	A.	Primitive data type:	They are independent.
		ex:-	int, float, char, bool
	
	B.	Derived data type:	They are derived from Primitive data type.
		ex:-	array, pointers
		
	C.  User defind:	The data type defind by user.
		ex:-	union, structure, enum:

Pre-defined Functions:
3. printf(); 	print the output on console window.

4. scanf();		take input from user.

5. Format specifiers:
	%d	:	int
	%u	:	unsigned int
	%f	:	float
	%c	:	char
	%o	:	octal value
	%p	:	Hexa decemal
	%lf :	double
	%lu	:	unsigned long
	%llu:	unsigned long long
	
6.	INT_MAX: is use to find the maximun range of integer
	INT_MIN: is use to find the minimum range of integer
	LLONG_MAX: Maximum value for a long long integer.
	LLONG_MIN: Minimum value for a long long integer.
	FLT_MAX: Maximum value for a float.
	FLT_MIN: Minimum normalized positive value for a float.
	DBL_MAX: Maximum value for a double.
	DBL_MIN: Minimum normalized positive value for a double.
	
	printf("Integer Limits:\n");
    printf("INT_MAX: %d\n", INT_MAX);
    printf("INT_MIN: %d\n", INT_MIN);
    
    printf("\nLong Integer Limits:\n");
    printf("LONG_MAX: %ld\n", LONG_MAX);
    printf("LONG_MIN: %ld\n", LONG_MIN);
    
    printf("\nLong Long Integer Limits:\n");
    printf("LLONG_MAX: %lld\n", LLONG_MAX);
    printf("LLONG_MIN: %lld\n", LLONG_MIN);
	
7. Scape sequences:
	\n	:	for next line
	\t	:	for some space like tab

8. Operators:
	
	+, -, *, /, %  Arithematic operator:
		
	>, <, <=, >=, == Relational operator:

	=, +=, -=, *=, /= Assignment operator:
		
	&&, ||  Logical operator:
		
	&, |, <<, >>, !, Bitwise operator
	
9. Conditional Statement:
	if(condition)
	{
		
	}
	
	else
	{
		
	}
	
	switch, case: its also a conditional statements;


===================================Loops===17-May 2024========================================================

Loops:

	It is a powerfull concept of programming where, A block of code is repeated untill 
	the condition is true.
	
	-	A loops statements allows programmers to executes a statement or group of statements
		multiple times without repetitions of code.
		
		
		Loop(condition){
			
		
		}
		
	-	Loops are mainly two types:
		
			1.	Entry control loop:
					To execute the loop first check the condition:
				 ex: -  while, for
				 
			2.	Exit control loop:
					After executing once after that check the condition:
				ex:-	 do-while


	-	Infiniter loop:
			When program condition is wrong then, this issue is created.
			-	It may cause hardware issue or RAM crashed problem
			-	To exit with infinite loop you can press Ctr+C
		
			
	-	Nesting of loop's:
		When more then one loop's are present inside a particular loop then
		it called nesting of loop's.
		
		Ex:		loop(){
					
					loop(){
						
					}
			
				}











