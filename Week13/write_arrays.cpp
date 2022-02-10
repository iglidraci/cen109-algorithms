#include <iostream>

using namespace std;

int main() {
  FILE *file_ptr = fopen("arrays.dat", "wb");
  if (file_ptr == nullptr) {
    cout << "Cannot open the file, exiting the program"<<endl;
    exit(0);
  }
  int matrix[4][3] = {
    {1, 2, 3},
    {10, -2, 3},
    {4, 3, 2},
    {0, -1, 2}
  };
  for(int i=0; i<4; i++) {
    fwrite(matrix[i], sizeof(int), 3, file_ptr);
  }
  fclose(file_ptr);
  return 0;
}
