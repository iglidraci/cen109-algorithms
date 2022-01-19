#include <iostream>

using namespace std;

// take array and size of array
void bubble_sort(int *const, int);
void print_arr(const int *const, int);

int main() {
    int arr[] = {1, 10, 2, 11, -1, 2};
    int size = sizeof(arr) / sizeof(int);
    bubble_sort(arr, size);
    print_arr(arr, size);
    return 0;
}
void bubble_sort(int *const arr, int count) {
    void swap(int*, int*);
    for (unsigned int i = 0; i < count - 1; i++)
    {
        for (unsigned int j = 0; j < count - 1; j++)
        {
            if (arr[j] > arr[j+1])
                swap(&arr[j], &arr[j+1]);
        }
    }
}

void print_arr(const int *const arr, int count) {
    for (size_t i = 0; i < count; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}