#include <iostream>
#include <stdlib.h>

using namespace std;

#define N 10

int main (void)
{ // beginning of main


	int arrayOfIntegers[N] = {0, 2, 7, 99, 55, 44, 23, 17, 19, 1};
	
	int searchItem;

	cout << "For the number you enter, the program will perform " << endl;
	
	cout << "sequential search in the array stored in memory" << endl;
	
	cout << "Please enter an integer" << endl;

	cin >> searchItem;

	bool found  = false;
	int storeLocation=-1;

	for (int i = 0; i < N; i++)
	{ // for loop begins

		if ( arrayOfIntegers[i] == searchItem )
		{
			found = true;
			storeLocation = i;
			break;
		}
		else{
		
			found = false;
		}

	} // for loop ends

	if ( found == true )
	{ // if
	
		cout << "The requested item: " << searchItem << " is found at location: " << storeLocation << endl;
		cout << "in the array stored in memory" << endl;

	}  // if
	else if ( found == false ) 
	{  // else

		cout << "The requested item cannot be found" << endl;

	}  // else
	// part I - ends

		return 0;
} // end of main