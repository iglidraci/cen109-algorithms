#include <iostream>

using namespace std;

void print_menu();

int main() {
  FILE *file_ptr = fopen("clients.txt", "r");
  if (file_ptr == nullptr) {
    cout << "Cannot open the file, exiting the program"<<endl;
    exit(0);
  }
  int input;
  char clients_name[50];
  float clients_balance;
  print_menu();
  cin >> input;
  while(input != 4) {
    switch(input) {
      case 1:
        while(!feof(file_ptr)) {
          fscanf(file_ptr, "%s %f\n", clients_name, &clients_balance);
          if (clients_balance > 0)
            cout << "Client: "<<clients_name << " , balance: " << clients_balance <<endl;
        }
        break;
      case 2:
        while(!feof(file_ptr)) {
          fscanf(file_ptr, "%s %f\n", clients_name, &clients_balance);
          if (clients_balance < 0)
            cout << "Client: "<<clients_name << " , balance: " << clients_balance <<endl;
        }
        break;
      case 3:
        while(!feof(file_ptr)) {
          fscanf(file_ptr, "%s %f\n", clients_name, &clients_balance);
          if (clients_balance == 0)
            cout << "Client: "<<clients_name << " , balance: " << clients_balance <<endl;
        }
        break;
      default:
        cout << "wrong input! \n";
        break;
    }
    rewind(file_ptr);
    print_menu();
    cin >> input;
  }
  fclose(file_ptr);
  return 0;
}

void print_menu() {
  cout << "Enter 1 for accounts with credit \n"
        << "Enter 2 for accounts with debit \n"
        << "Enter 3 for accounts with zero balance \n"
        << "Enter 4 to quit\n";
}
