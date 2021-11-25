#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main (void)
{ // begin of main
    srand(time(NULL));
    const int size = 10;    
	double array[size];
    int i = 0;
    while (i<size)
    {
        // look at the way I've incremented i
        // array[i++] = rand() is the same thing as saying
        // array[i] = rand() then i = i+1
        // because i++ is post-increment meaning: use i first then increment it
        array[i++] = rand() % 10;
    }

    // print the numbers that were genereted

    // reset i = 0 because i here is equal to size
    i = 0;
    cout << "Values in array are: ";
    while (i < size)
    {
        cout << array[i++]<< " ";
    }
    cout <<endl;

	double sum = 0;
    // reset i = 0 because i here is equal to size
    i = 0;
    while (i < size)
    {
        sum += array[i++];
    }
    cout << "Sum of the random numbers genereted is " << sum<<endl;
	return 0;
}