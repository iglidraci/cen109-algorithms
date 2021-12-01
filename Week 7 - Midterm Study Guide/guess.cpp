#include <iostream>
#include <cstdlib>
#include <ctime>
#include <stdlib.h>

using namespace std;

int main (void)
{ // beginning of main

	int num;
	int guess = 0;
	bool done;

	// https://stackoverflow.com/questions/33380282/how-does-rand-work-in-c
	time_t t;
	// srand Intializes random number generator */
	srand((unsigned) time(&t));
	num = rand() % 10; /* random numbers from 0 to 10 */
	// integer reminder of the division by 10
	// https://stackoverflow.com/questions/33380282/how-does-rand-work-in-c
	

	done = false;

	while (!done) {

	cout << "Enter an integer greater "
		 << "than or equal to 0 and "
		 << "less than 10: ";

	cin >> guess;
	cout << endl;

	if ( guess >=0 && guess <=10 )
	{ // proceed

	if (guess == num)
	{

		cout  << "You guessed the correct "
              << "number." << endl;

		done = true;

	}

	else if (guess < num)

      cout << "Your guess is lower "
           << "than the number "
           << "Guess again!" << endl;

	else 
      cout << "Your guess is higher "
           << "than the number "
           << "Guess again!" << endl;

	} else {

		cout << "The number must be in the range [0, 10] " << endl;
		break;
	}
} // end of while loop

   return 0;
} // end of main