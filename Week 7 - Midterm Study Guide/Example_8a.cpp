#include <iostream>
#include <math.h>
#include <ctype.h>

using namespace std;
#define N 10

int main (void)
{ // begin of main

	double arrayOfIntegers[N];
	double number = 0;
	int counter = 0;

	for (int i = 0; i < N; i++ )
	{ // for loop begins
	    
		std::cout << "Please enter a positive integer number " << endl;

		std::cin >> number;

		if ( number <= 0 ) { 
			
			cout << "You have entered a negative number or a zero " << endl; 
			cout << "The program will restart " << endl;

		    break;
		}

		else {  
			
			arrayOfIntegers[i] = (double)number; 
		    counter ++;
		}

	} // for loop ends

	if ( counter == N )
	{ // if all the numbers are positive

		std::cout << "You have entered " << counter << " valid numbers " << endl;

		double sum = 0;
		for (int i = 0; i < N; i++ )
		{ // for loop begins

			sum = sum + arrayOfIntegers[i];

		} // for loop ends

		double average = ((double)sum/counter);

		

		double sd = 0;
		for (int i = 0; i < N; i++ )
		{ // for loop begins

			sd += ( (double) (arrayOfIntegers[i] - average) * (arrayOfIntegers[i] - average) );

		} // for loop ends

		sd = ( (double) sd/counter );
		
		sd = sqrt ( (double) sd );


		char Type = 'a';

		std::cout << "Type 'a' to print average or 's' to print standard deviation" << endl;

		cin >> Type;

		Type = tolower(Type);

		if (Type == 'a')
	
			std::cout << "The average is: " << average << endl;

		else if (Type == 's')

			std::cout << "The standard deviation is: " << sd << endl;

		else
		
			std::cout << "Did not receive correct instruction" << endl;

	} // if all the numbers are positive
	else { // else if
	
		cout << "Please enter all positive integer numbers" << endl; 

	} // else if
	
	return 0;
}