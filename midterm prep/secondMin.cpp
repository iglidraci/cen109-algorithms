#include <iostream>
#include <cstdlib>
#include <ctime>
#include <climits>


#define SIZE 20


using namespace std;

int getSecondMin(int[], int);
void printArray(int[], int);

int main() {
    srand(time(NULL));
    int array[SIZE];
    for (int i = 0; i < SIZE; i++)
    {
        array[i] = rand() % 20;
    }
    cout << "Array values are: ";
    printArray(array, SIZE);
    int secMin = getSecondMin(array, SIZE);
    cout << "Second minimum value is " << secMin <<endl;
    return 0;
}

int getSecondMin(int array[], int size) {
    int smallest, secondSmallest = INT_MAX;
    for (int i = 0; i < size; i++)
    {
        if (array[i] < smallest) {
            secondSmallest = smallest;
            smallest = array[i];
        }
            
        else if (array[i] < secondSmallest)
            secondSmallest = array[i];
    }
    return secondSmallest;
}

void printArray(int array[], int size) {
    for (size_t i = 0; i < size; i++)
    {
        cout << array[i]<< " ";
    }
    cout<<endl;
}