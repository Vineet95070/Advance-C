File Handling:
	It is an important concept of C language use to read, write and 
	append some data into another file which is present some where else
	in another memory location.
	
	Open an Close file:
		To open and close any particular file we need to use respected
		functions like.
		1. fopen(): use to open a file.
		2. fclose(): use to close a file.
		
	-	fopen() return NULL in case of fail to open a file.
	-   fclose() also return NULL or 0 in case of close file successfully.
	
	-Any particular file can open in mainly three modes:
		1. Reading mode 'r': In this mode you can only read data from
		the given file.
		- If file name is not present then file is not create.
		
		2. Writing mode 'w': In this mode we can write some data into
		opened file.
		- If file is not present then compiler create file for us.
		
		3. Append mode 'a': In this mode we can append some data into
		opened file.
		- If file is not present then compiler create file for us.
		
	Q. What is FILE in C language.
	FILE is a predefind structure use for defining a pointer to structure
	in C language.
	
	
	Two types of path are present in Computer language:
		1. Relative path:
			A relative path specifies the location of a file or directory 
			relative to the current working directory. It does not begin 
			with the root directory.
			
		ex: File handling/file.txt

		
		2. Absolute path:
			An absolute path provides the complete location of a file or 
			directory from the root of the filesystem. 

		ex: C:/Users/Realme/OneDrive/Documents/File handling/file.txt
		
		
		fprintf(): Writes formatted data to a file that is already opened.
		
		fscanf(): Reads formatted data from an opened file and prints it 
		to the console.
		
		
		
		
		
		
		
		
		
		
		
