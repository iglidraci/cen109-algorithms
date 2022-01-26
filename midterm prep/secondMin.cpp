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
    int a, b = INT_MAX;
    for (int i = 0; i < SIZE; i++)
    {
        if (array[i] < a) {
            b = a;
            a = array[i];
        }
            
        else if (array[i] < b)
            b = array[i];
    }
    cout << b <<endl;
    return 0;
}

int getSecondMin(int array[], int size) {
    int a, b = INT_MAX;
    for (int i = 0; i < size; i++)
    {
        if (array[i] < a) {
            b = a;
            a = array[i];
        }
            
        else if (array[i] < b)
            b = array[i];
    }
    return b;
}

void printArray(int array[], int size) {
    for (size_t i = 0; i < size; i++)
    {
        cout << array[i]<< " ";
    }
    cout<<endl;
}