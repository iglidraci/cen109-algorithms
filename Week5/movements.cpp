#include <iostream>

using namespace std;
int main() {
    const int EURO_TO_LEK = 123;
    // we have an array with bank movements in euro
    int movements[] = {100, -50, 40, 100, -20, 200, -30, 400};
    int totalDeposit = 0;
    int totalWithdraw = 0;
    int maxDeposit = movements[0];
    int maxWithdraw = movements[0];
    // get the size of array
    int size = sizeof(movements)/sizeof(int);
    for(int i=0; i<size; i++) {
        if (movements[i] > 0) {
            totalDeposit += movements[i];
            if (movements[i] > maxDeposit)
                maxDeposit = movements[i];
        } else {
            totalWithdraw += movements[i];
            if (movements[i] < maxDeposit)
                maxDeposit = movements[i];
        }
    }
    cout << "Total deposit in euro is: "<<totalDeposit<<endl;
    cout<<"Total withdraw in euro is: "<<-totalWithdraw<<endl;
    cout<<"Balance in euro is: "<<totalDeposit+totalWithdraw<<endl;
    cout<<"Biggest deposit: "<<maxDeposit<<" euro"<<endl;
    cout<<"Biggest withdraw: "<<maxWithdraw<<" euro"<<endl;
    return 0;
}