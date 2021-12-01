#include <iostream>

using namespace std;

int main(void) {

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

	/// compute min of data (begin)
	for (int i=0; i < N; i++)
	{ // for loop begins
	
				if( arrayOfIntegers[i] > max ) 
			
					max = arrayOfIntegers[i];
        
	} // for loop ends
	/// compute min of data (end)

	std::cout << "The maximum of the values you have entered is: " 
		      << max << endl;

	return 0;
} // end of main