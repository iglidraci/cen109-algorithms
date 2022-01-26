#include <iostream>

using namespace std;

int* allocate_mem(int);
int binary_search(int*, int, int);

int main() {
    int size;
    cout << "How many numbers do you want to process :";
    cin >> size;
    int *arr = allocate_mem(size);
    int key;
    cout << "Enter key: ";
    cin >> key;
    int index = binary_search(arr, size, key);
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

int binary_search (int* arr, int size, int key) {
    int left = 0;
    int right = size - 1;
    int middle;
    while (left <= right)
    {
        middle = left + (right - left) / 2;
        if (arr[middle] == key)
            return middle;
        else if (key > arr[middle]) {
            left = middle + 1;
        } else {
            right = middle - 1;
        }
    }
    return -1;
}