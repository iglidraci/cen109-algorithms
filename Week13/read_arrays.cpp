#include <iostream>

using namespace std;

int main() {
  FILE *file_ptr = fopen("arrays.dat", "rb");
  if (file_ptr == nullptr) {
    cout << "Cannot open the file, exiting the program"<<endl;
    exit(0);
  }
  for(int i=0; i<4; i++) {
    int array[3];
    fread(array, sizeof(int), 3, file_ptr);
    for(int j=0; j < 3; j++) {
      cout << array[j] << " ";
    }
    cout << endl;
  }
  fclose(file_ptr);
  return 0;
}
