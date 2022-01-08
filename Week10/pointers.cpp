#include <iostream>
#include <math.h>
#include <stdio.h>

using namespace std;

double theBiggest ( double *x1, double *x2, double *x3 );

double Average ( double *x1, double *x2, double *x3 );

double standardDeviation ( double *x1, double *x2, double *x3 );

int main ()
{
	double value1 = 0.0;
	double value2 = 0.0;
	double value3 = 0.0;

		cout << "Please enter three numbers, all different "  << endl;
		cout << "The program will find the biggest, " << endl;
		cout << "the average and the standard deviation" << endl;

		cout << "Please enter the first number ";

		cin >> value1;

		std::cout << "The number you have entered is: "  << value1 << endl;

		cout << "Please enter the second number ";

		cin >> value2;

		std::cout << "The number you have entered is: "  << value2 << endl;

		cout << "Please enter the third number ";

		cin >> value3;

		std::cout << "The number you have entered is: "  << value3 << endl;

		double *x1 = &value1; // initialize pointer x1 with the address of the variable value1
		double *x2 = &value2; // initialize pointer x2 with the address of the variable value2
		double *x3 = &value3; // initialize pointer x3 with the address of the variable value3

		// now use the pointer as argument:
		double theBiggestNumber = theBiggest( x1, x2, x3 );

		cout <<"The the Biggest Number is: " << theBiggestNumber << endl;

		// now use the pointer as argument:
		double theAverage = Average( x1, x2, x3 );

		cout << "The average is " << theAverage << endl;

		// now use the pointer as argument:
		double theStandardDeviation = standardDeviation( x1, x2, x3 );

		cout << "The Standard Deviation is " << theStandardDeviation << endl;


return 0;

}//end of funct

double theBiggest ( double *x1, double *x2, double *x3 )
{

		double theBiggestNumber = 0;

	   // double *value1 = *x1; // an entity of type double (*x1) cannot be used to initialize and entity of type double *
	   // double *value1 = &x1; // an entity of type double** (&x1) cannot be used to initialize and entity of type double *
		
		double *value1 = &*x1; // initialize value1 with the value located at the memory address of x1
		double *value2 = &*x2; // initialize value2 with the value located at the memory address of x2
		double *value3 = &*x3; // initialize value3 with the value located at the memory address of x3

		if ( (*value1 == *value2) ) 
		{ 
			   cout << "The numbers must be all different" << endl;
		       exit (0);
		}

		else if ( (*value1 == *value3) ) 
		{ 
			   cout << "The numbers must be all different" << endl;
		       exit (0);
		}

		else if ( (*value2 == *value3) ) 
		{ 
			   cout << "The numbers must be all different" << endl;
		       exit (0);
		}

		else if ( (*value1 > *value2) && (*value1 > *value3) ) theBiggestNumber = *value1;

		else if ( (*value2 > *value1) && (*value2 > *value3) ) theBiggestNumber = *value2;

		else if ( (*value3 > *value1) && (*value3 > *value2) ) theBiggestNumber = *value3;

	return theBiggestNumber;


}//end of function

double Average ( double *x1, double *x2, double *x3 )
{

		// double *value1 = *x1; // an entity of type double (*x1) cannot be used to initialize and entity of type double *
	    // double *value1 = &x1; // an entity of type double** (&x1) cannot be used to initialize and entity of type double *
		
		double *value1 = &*x1; // initialize value1 with the value located at the memory address of x1
		double *value2 = &*x2; // initialize value2 with the value located at the memory address of x2
		double *value3 = &*x3; // initialize value3 with the value located at the memory address of x3

	return ((double)( *value1 + *value2 + *value3 ) / 3) ;

}//end funct

double standardDeviation ( double *x1, double *x2, double *x3 )
{

	   // double *value1 = *x1; // an entity of type double (*x1) cannot be used to initialize and entity of type double *
	   // double *value1 = &x1; // an entity of type double** (&x1) cannot be used to initialize and entity of type double *
		
		double *value1 = &*x1; // initialize value1 with the value located at the memory address of x1
		double *value2 = &*x2; // initialize value2 with the value located at the memory address of x2
		double *value3 = &*x3; // initialize value3 with the value located at the memory address of x3

	// now use the pointers as arguments to the function
	double AverageValue = Average ( value1, value2, value3 );
	double rsum = 0;

	rsum =  sqrt(  ((double)(   ((*value1 - AverageValue ) * (*value1 - AverageValue)) +
	                            ((*value2 - AverageValue ) * (*value2 - AverageValue)) +
                                ((*value3 - AverageValue ) * (*value3 - AverageValue)) 
			   
			                ) / 3)  );

	return rsum;
}//end of funct