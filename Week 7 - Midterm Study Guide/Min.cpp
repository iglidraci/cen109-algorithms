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

	int min = arrayOfIntegers[0];

	/// compute min of data (begin)
	for (int i=0; i < N; i++)
	{ // for loop begins
	
				if( arrayOfIntegers[i] < min ) 
			
					min = arrayOfIntegers[i];
        
	} // for loop ends
	/// compute min of data (end)

	std::cout << "The minimum of the values you have entered is: " 
		      << min << endl;

	return 0;
} // end of main