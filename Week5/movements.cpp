#include <iostream>

using namespace std;
int main() {
    const int EURO_TO_LEK = 123;
    // we have an array with bank movements in euro
    int movements[] = {100, -50, 40, 100, -20, 200, -30, 400, -100};
    int totalDeposit = 0;
    int totalWithdraw = 0;
    int maxDeposit = movements[0];
    int maxWithdraw = movements[0];
    // get the size of array
    // we already know the size of the array, we can easily count them one by one
    // sizeof operator gives the size of the 
    int size = sizeof(movements)/sizeof(int);
    for(int i=0; i<size; i++) {
        if (movements[i] > 0) {
            totalDeposit += movements[i];
            if (movements[i] > maxDeposit)
                maxDeposit = movements[i];
        } else {
            totalWithdraw += movements[i];
            if (movements[i] < maxWithdraw)
                maxWithdraw = movements[i];
        }
    }
    int balance = totalDeposit+totalWithdraw;
    cout << "Total deposit in euro is: "<<totalDeposit<<endl;
    cout << "Total deposit in lek is: "<<totalDeposit*EURO_TO_LEK<<endl;
    cout<<"Total withdraw in euro is: "<<-totalWithdraw<<endl;
    cout<<"Total withdraw in lek is: "<<-totalWithdraw*EURO_TO_LEK<<endl;
    cout<<"Balance in euro is: "<<balance<<endl;
    cout<<"Balance in lek is: "<<balance*EURO_TO_LEK<<endl;
    cout<<"Biggest deposit in euro: "<<maxDeposit<<endl;
    cout<<"Biggest deposit in lek:"<<maxDeposit*EURO_TO_LEK<<endl;
    cout<<"Biggest withdraw in euro : "<<-maxWithdraw<<endl;
    cout<<"Biggest withdraw in lek: "<<-maxWithdraw*EURO_TO_LEK<<endl;
    return 0;
}