#include <iostream>

using namespace std;

int main() {
  FILE *file_ptr;
  file_ptr = fopen("clients.txt", "r");
  if (file_ptr == NULL) {
    cout << "Cannot open the file, exiting the program" << endl;
    exit(0);
  } else {
    char clients_name[50];
    float clients_credit;
    while(!feof(file_ptr)) {
      fscanf(file_ptr, "%s %f\n", clients_name, &clients_credit);
      cout << "Client name: "<<clients_name<< " , clients credit: "
            << clients_credit << endl;
    }
  }
  fclose(file_ptr);
  return 0;
}
