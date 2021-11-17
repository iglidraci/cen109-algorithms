#include <iostream>

using namespace std;

void saySth(string);

int main() {
    saySth("hello");
    cout<<"How many numbers you are going to enter?"<<endl;
    int size;
    cin>>size;
    int input;
    int numbers[size];
    for(int i=0; i<size; i++) {
        cout<<"enter number "<<i+1<<": ";
        cin>>numbers[i];
    }
    cout<<"The numbers that you entered are: ";
    for (int i = 0; i < size; i++)
    {
        cout<<numbers[i]<< " ";
    }
    cout<<endl;
    // sum all the even numbers in the array
    // if somehow you find a 0 or a negative number in the array, break out of the loop
    // print the sum
    int sumEven = 0;
    for (int i = 0; i < size; i++)
    {
        // break if you enter negative or 0
        if (numbers[i] <= 0)
            break;
        // skip those numbers that are odd
        if (numbers[i] % 2 == 1)
            continue;
        // if somehow we got here, that means we should add it the sum
        sumEven += numbers[i];
    }
    cout << "Sum of even numbers before encountering 0 or negative value: "
        <<sumEven<<endl;
    saySth("bye");
    return 0;
}

void saySth(string str) {
    cout<<str<<endl;
}