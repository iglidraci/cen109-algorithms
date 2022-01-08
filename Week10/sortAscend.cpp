#include <iostream>

using namespace std;

void main(void)
{
	
	int i, j, index, MIN, TEMP;
	
	const int N = 10;

	int arrayOfIntegers[N];

	std::cout << "You will be prompt to enter 10 integer numbers "
		      << endl;

	int counter = 0;

	while ( counter < N ) 
	{ // while loop begins

	std::cout << "Please enter an integer number " << endl;
	
	cin >> arrayOfIntegers[counter];

	counter++;

	}// while loop ends

	int max = arrayOfIntegers[0];

	/// compute max of data (begin)
	for (int i=0; i < N; i++)
	{ // for loop begins
	
				if( arrayOfIntegers[i] > max ) 
			
					max = arrayOfIntegers[i];
        
	} // for loop ends
	/// compute max of data (end)

	std::cout << "The maximum of the values you have entered is: " 
		      << max << endl;

	// sorting algorithm (begin)
	// sort in ascending order
	j = 0;
	while( j < N )
	{ // outer while loop (scan the array)
	
		MIN = max;

		// set to scan the array starting from ' i '
		i = j;

		while( i < N )
		{ // inner while loop (find min)

			if( arrayOfIntegers[i] <= MIN ) 
			{ // if
			
				// store the smaller vaule in ' MIN '
				MIN = arrayOfIntegers[i];

				// store the current ' i ' in ' index '
				// ' index ' is the index of the smaller value
				// found in the array (smallest at the end of the search) 
				index  = i;
			
			} // if
			
        // increment ' i '
		i++;
		
		} // inner while loop (find min)
		// ' MIN ' is now the smallest value of the search 

		// swap the current array value ' arrayOfIntegers[j] '
		// with ' MIN ' which is now the smallest value of the search 
		// do this in three steps:

		// STEP 1:
		// store current array value indexed by ' j ' in TEMP
		TEMP = arrayOfIntegers[j];
		
		// STEP 2:
		// store MIN (the smallest of the search)
		// in current array value indexed by ' j ' 
		arrayOfIntegers[j] = MIN;
		
		// STEP 3:
		// change the array value pointed by current ' index '
		// with ' TEMP '
		arrayOfIntegers[index] = TEMP;

		// increment ' j ' by 1
		j = j + 1;

	} // outer while loop (scan the array)
	// sorting algorithm (end)
	// sort in ascending order
	
	std::cout << "The sorted array is: " << endl;

    // print the sorted array (begin)
	for(i = 0; i < N; i++)

		std::cout << arrayOfIntegers[i] << endl; 

	// print the sorted array (end)

}// end of main
