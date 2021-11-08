#include <iostream>
using namespace std;
// we are going to allow the user to enter a specific amount of values
// we are going to sum only the even numbers
// we are going to print the sum and avg of even numbers only
// user might not enter any even number at all
int main() {
    // this variable signifies the total numbers you are going to process
    cout<<"Welcome to C++ programming"<<endl;
    int n;
    cout<<"enter how many numbers you want to process:"<<endl;
    cin>>n;
    int count = 1;
    int sum = 0;
    int evenNumbers = 0;
    // here we are going to save user input every time he enters one
    int userInput;
    while (count <= n)
    {
        cout<<"enter a number "<<count<<":";
        cin>>userInput;
        if (userInput%2 == 0) {
            sum += userInput;
            evenNumbers++;
        }
        count++;
    }
    cout<<"sum of your even numbers is "<<sum<<endl;
    if (evenNumbers > 0) {
        // this means that I can now calculate the average
        // don't forget (float), otherwise you will get an integer result
        float avg = (float)sum/evenNumbers;
        cout<<"Average of your even numbers is "<<avg<<endl;
    } else {
        cout<<"You didn't enter any even number, I can't calculate average"<<endl;
    }
    return 0;
}