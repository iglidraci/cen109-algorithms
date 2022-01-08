#include <stdio.h>
#include <stdlib.h>

float  *  pattern_handler(int x); 

void pattern_processor(int x, float * pointer);

int main(void) {

	float * pointer;

	int a = 10;

	pointer = pattern_handler(a);
	printf("The address of the pointer inside main(): %x\n", &pointer);
	printf("The address where the pointer is pointing inside main(): %x\n", pointer);

	for (int i = 1; i <= 10; i++ )

		printf("%s%f\n", "The value in main after allocation is: ", *(pointer + i) );

	// here we are passing the same address that we returned from pattern_handler function
	// they are pointing in the same memory location
	pattern_processor(a, pointer);


	// the values after processing are changed and returned to the main function
	// the values after processibg should not reflect setting their values to 2.0 
	// because the change is local to the function ' pattern_processor '	

	// -->> Why the change is visible in the main function, then?
	// this changes are visible because we are passing the same address
	// both functions are changing the same memory block
	for (int i = 1; i <= 10; i++)

		printf("%s%f\n", "The value in main after processing is: ", *(pointer + i) );

	// deallocate the memory we allocated using calloc
	// this way we don't waste memory
	free(pointer);

	return 0;
}

 float  *  pattern_handler(int x) 
 { // begin of function

     float *pointer;
	 // allocate dynamic memory for (x+1) blocks of 4 bytes(float size)
	 // cast it into float pointer because calloc (malloc as well)
	 // returns a pointer of type void
	 // now pointer is pointing in the beggining of the block
	 pointer = (float  *) calloc( (x+1), sizeof(float));
	 	// check if it's successfully allocated
		if (pointer == NULL) {
   
			printf("Not enough memory to allocate buffer pattern\n");
   
			exit(0);
		}

		*(pointer) = 1.0;
		// change each value in the block of memory that we alocated into 1.0
		for(int k2=1; k2 < x+1; k2++) 
	    {
			// each time we increment the pointer we are moving by the size of float
			// basically we are pointing to the next block of allocated memory
			*(pointer+k2) = 1.0;

			printf("%s%f\n", "The value in the function after allocation is: ",
								*(pointer + k2) );

		}
		// return the pointer that was pointing in the beggining of the memory
		// block that we allocated using calloc
		// return type of the function itself is a float pointer
		printf("The address of the pointer inside pattern_handler(): %x\n", &pointer);
		printf("The address where the pointer is pointing inside pattern_handler(): %x\n", pointer);
		return pointer;

}  //end of function

void pattern_processor(int x, float * pointer) 
 { // begin of function

		for(int k2=1; k2 < x+1; k2++) 
	    {
		
			*(pointer+k2) = 2.0;

			printf("%s%f\n", "The value in the processing function is: ", *(pointer + k2) );

		}

}  //end of function