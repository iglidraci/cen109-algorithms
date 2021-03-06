#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    const int EURO_TO_LEK = 123;
    const int SIZE = 20;
    // we have an array with bank movements in euro
    // int movements[] = {100, -50, 40, 100, -20, 200, -30, 400, -100};
    srand(time(NULL));
    int movements[SIZE];
    for (int i = 0; i < SIZE; i++)
    {
        // random numbers between -3 and 3
        int randomNumber = rand()%7 - 3;
        movements[i] =  randomNumber;
        cout<<randomNumber<<" ";
    }
    cout<<endl;
    
    int totalDeposit = 0;
    int totalWithdraw = 0;
    int maxDeposit = movements[0];
    int maxWithdraw = movements[0];
    for(int i=0; i<SIZE; i++) {
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