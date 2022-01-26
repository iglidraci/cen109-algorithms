#include <iostream>

using namespace std;

int* allocate_mem(int);
int linear_search(int*, int, int);

int main() {
    int size;
    cout << "How many numbers do you want to process :";
    cin >> size;
    int *arr = allocate_mem(size);
    int key = 5;
    int index = linear_search(arr, size, key);
    cout << key << " was found at index " << index << endl;
    free(arr);
    return 0;
}

int * allocate_mem(int size) {
    // calloc returns a void pointer that we cast it into int pointer
    // A void pointer is a pointer that has no associated data type with it.
    // A void pointer can hold address of any type and can be typecasted to any type
    int* arr = (int*) calloc(size, sizeof(int));
    if (arr == NULL) {
        cout << "Memory not allocated" << endl;
        exit(0);
    }
    for (int i = 0; i < size; i++)
    {
        cout << "Enter element " << i + 1 << ": ";
        cin >> arr[i];
    }
    return arr;   
}

int linear_search (int* arr, int size, int key) {
    for (int i = 0; i <size; i++)
    {
        if (arr[i] == key)
            return i;
    }
    return -1;
}