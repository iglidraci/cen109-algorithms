#include <iostream>
#include <stdlib.h>

using namespace std;

#define N 10

int main (void)
{ // beginning of main

	int arrayToSum[N];

	cout << "You will be prompt to enter 10 positive integer numbers" << endl;

	// load numbers (begins)
	int number = 0;

	for (int i = 0; i < N; i++ )
	{ // for loop begins
	    
		cout << "Please enter a positive integer number " << endl;
		cin >> number;

		if ( number > 0 )
		{ // if

			arrayToSum[i] = number;

		} // if

		else if ( number < 0 ) { 
		// else if

			cout << "The number you have entered is negative " << endl;
			arrayToSum[i] = 0;

			continue; 
		
		// else if
		}

		else if ( number == 0 ) { 
		// else if

			cout << "The number you have entered is zero " << endl;
			arrayToSum[i] = 0;

			continue; 
		
		// else if
		}

	} // for loop ends
	// load numbers (ends)

	// sum numbers (begins)
	int i = 0;
	int sum = 0;
	
	while( i < N )
	{ // while loop

		sum += arrayToSum[i];
		i++;

	} // while loop
	// sum numbers (ends)

	if ( sum == 0 ){

		cout << "You have entered all negative numbers or zeros" << endl;
	
	} else { 

		cout << "The sum of the positive numbers is: " << sum << endl;

	}

	int max = arrayToSum[0];

	/// compute max of data (begin)
	for (int i=0; i < N; i++)
	{ // for loop begins
	
				if( arrayToSum[i] > max ) 
			
					max = arrayToSum[i];
        
	} // for loop ends
	/// compute min of data (end)

	if ( sum == 0 ){

		cout << "You have entered all negative numbers or zeros" << endl;
	
	} 
	else {
	
		std::cout << "The maximum of the values you have entered is: " 
		          << max << endl;

	}

	return 0;
} // end of main