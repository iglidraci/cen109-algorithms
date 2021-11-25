#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;


int main() {
    // we are going to build an array that we don't know the size of it
    // we are going to ask the user about the size of the array
    // then create an array with the given size
    // then initialize each element of the array with random values
    // from 1 to 9

    // seed the random number generator with the current time in milliseconds
    srand(time(NULL));
    int size;
    cout<<"enter the size of the array: ";
    cin >> size;
    // just declare the array with length size
    int array[size];
    for (int i = 0; i < size; i++)
    {
        // intialize each value of the array with random values
        array[i] = rand() % 9 + 1;
    }

    // print the values of the array
    cout << "Array values are: ";
    for (int i = 0; i < size; i++)
    {
        cout<<array[i]<<" ";
    }
    cout<<endl;
    return 0;
}