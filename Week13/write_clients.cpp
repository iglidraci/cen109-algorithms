#include <iostream>

using namespace std;


int main() {
  FILE *file_ptr;
  file_ptr = fopen("clients.txt", "w");
  if (file_ptr == NULL) {
    cout << "Cannot open the file, exiting the program"<<endl;
    exit(0);
  } else {
    char clients_name[50]; // up to 50 chars
    float clients_credit;
    cout << "Enter the name and credit amound of each client, after ?" << endl;
    cout << "? "<<endl;
    cin >> clients_name;
    cin >> clients_credit;
    while(!feof(stdin)) {
      fprintf(file_ptr, "%s %.2f\n", clients_name, clients_credit);
      cout << "? " << endl;
      cin >> clients_name;
      cin >> clients_credit;
    }
    fclose(file_ptr); // close the file connection
  }
}
