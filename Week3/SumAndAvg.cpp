#include <iostream>
using namespace std;
int main() {
    // this variable signifies the total numbers you are going to process
    cout<<"Welcome to C++ programming"<<endl;
    int n;
    cout<<"enter how many numbers you want to process:"<<endl;
    cin>>n;
    int count = 1;
    int sum = 0;
    // here we are going to save user input every time he enters one
    int userInput;
    while (count <= n)
    {
        cout<<"enter number"<<count<<":";
        cin>>userInput;
        sum += userInput;
        count++;
    }
    cout<<"sum of your numbers is "<<sum<<endl;
    if (n != 0) {
        // this means that I can now calculate the average
        // don't forget (float), otherwise you will get an integer result
        float avg = (float)sum/n;
        cout<<"Average of your numbers is "<<avg<<endl;
    } else {
        cout<<"You didn't enter any number, I can't calculate average"<<endl;
    }
    return 0;
}
