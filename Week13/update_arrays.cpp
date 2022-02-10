#include <iostream>

using namespace std;

int main() {
  FILE *file_ptr = fopen("arrays.dat", "rb+");
  if (file_ptr == nullptr) {
    cout << "Cannot open the file, exiting the program"<<endl;
    exit(0);
  }
  // seek position in file to user-specified record
  fseek(file_ptr, 3*sizeof(int)*3, SEEK_SET);
  int updated_array[3] = {100, 200, 300};
  fwrite(updated_array, sizeof(int), 3, file_ptr);
  fclose(file_ptr);
  return 0;
}
