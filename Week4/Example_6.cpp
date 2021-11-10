#include <iostream>

using namespace std;

int main (void)
{
	static int N = 10;

	int counter, sum, number;

	cout << " Enter a Positive Integer smaller"
		<< " or equal to 10 (the counter) ";
	cin >> counter;
	cout << endl;

	sum = 0;

	do
	{
		cout << " Enter a Positive Integer " ;
		cin >> number;
		cout << endl;

		sum = sum + number;  

		counter ++;

	} while ( counter < N );

	cout << " The sum of the digits you have entered is = " << sum << endl;

	if ( ( sum % 2 ) == 0 )
		cout << " " << sum << " is divisible by 2 " << endl;
	else 
		cout << " " << sum << " is not divisible by 2 " << endl;

// note here no need of return anything
// because the return type of ' main ' is ' void '
} // end of main


