#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
void print_array(int[], int);
int sum_array(const int*, int);
int* get_random_array(int, int);
int* get_frequencies(const int*, int, int);
void print_frequencies(const int*, int, int);
bool contains(int[], int, int);


void print_array(int arr[], int length) {
    for (int i = 0; i < length; ++i) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int sum_array(const int* arr, int length) {
    int sum = 0;
    for (int i = 0; i < length; ++i) {
        sum += arr[i];
    }
    return sum;
}

int* get_random_array(int length, int max) {
    // generate an int array of a certain length
    // values should be random, greater than 0 AND -le max
    int* arr = (int*) calloc(length, sizeof(int));
    srand(time(NULL));
    for (int i = 0; i < length; ++i) {
        arr[i] = 1 + rand() % max;
    }
    return arr;
}

int* get_frequencies(const int* arr, int length, int max) {
    /*
     * we have an array with given length as an argument
     * the min value is 1 and the max value in the array is pre-defined
     * find the frequencies of the values in the array
     * */
    int* freq = (int*)calloc(max+1, sizeof(int));
    for (int i = 0; i < length; ++i) {
        freq[arr[i]]++;
    }
    return freq;
}

void print_frequencies(const int* arr, int length, int max) {
    int* frequencies = get_frequencies(arr, length, max);
    printf("%s%17s\n", "Element", "Frequency");
    for (int i = 1; i <= max; ++i) {
        if (frequencies[i] != 0)
            printf("%7d%17d\n", i, frequencies[i]);
    }
}

bool contains(int arr[], int length, int key) {
    // perform a binary search on the array to search for key
    // arr should be already sorted in order to work properly
    int left = 0;
    int right = length-1;
    int mid;
    while (left <= right) {
        mid = (left + right)/2;
        if (arr[mid] == key)
            return true;
        else if (arr[mid] > key)
            right = mid-1;
        else
            left = mid+1;
    }
    return false;
}
