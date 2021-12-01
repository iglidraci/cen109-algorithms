#include <iostream>
#include <stdlib.h>

using namespace std;

int main (void)
{ // beginning of main

	int x;

	cout << "You will be prompt to enter numbers between 1 and 10" << endl;

	for (;;)
	{ // for infinite loop

		cout << "Please enter a number between 1 and 10" << endl;
		cout << "Please enter 0 to exit " << endl;
		cin >> x;

		if (  x <= 5 &&  x >= 1 )

		cout << "The number you entered is between 1 and 5" << endl;
		
		else if ( x >= 6 && x <= 10 )

		cout << "The number you entered is between 6 and 10" << endl;
		
		else if ( x > 10 || x < 0 ) 
		{
			
			cout << "The number must be between 1 and 10 " << endl;
			continue;
		
		}

		else if ( x == 0 ) { 
			
			cout << "The loop ends" << endl;
			break; 
		
		}

	} // for infinite loop

	return 0;
} // end of main