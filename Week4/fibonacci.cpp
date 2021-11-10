#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int previous1;
    int previous2;
    cout<<"enter the first fibonacci number:";
    cin>>previous1;
    cout<<"enter the second fibonacci number:";
    cin>>previous2;
    int nthFibonacci;
    cout<<"Enter the n-th fibonacci number you want to find:";
    cin>>nthFibonacci;
    if(nthFibonacci == 1)
        cout<<"first fibonacci number is "<<previous1;
    else if (nthFibonacci == 2)
        cout<<"second fibonacci number is "<<previous2;
    else{
        int count = 3;
        int currentFibonacci;
        while (count<=nthFibonacci)
        {
            currentFibonacci = previous1 + previous2;
            previous1 = previous2;
            previous2 = currentFibonacci;
            count++;
        }
        cout<<"Nth fibonacci number is "<<currentFibonacci<<endl;
    }
    return 0;
}
