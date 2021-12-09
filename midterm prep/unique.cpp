#include <iostream>

using namespace std;

int main() {
    int arr[] = {1, 2, 2, 2, 3, 4, 3, 3, 1, 5, 4};
    int size = sizeof(arr) / sizeof(int);
    int unique[size];
    // keep count of how many unique elements we have found so far
    int uniqueElements = 0;
    int candidate;
    bool isUnique;
    for (int i = 0; i < size; i++)
    {
        // save the next candidate to join the array of unique elements
        candidate = arr[i];
        // suppose the element is unique
        isUnique = true;
        for (int j = 0; j < uniqueElements; j++) // check every element we have in the unique array
        {
            if (unique[j] == candidate) {
                // if there is any element in the unique array equal to our candidate
                // then change the isUnique flag (because it's not anymore) and break out of the loop
                isUnique = false;
                break;
            }
        }
        // after checking all the elements in the unique array, we conclude whether
        // our candidate is unique or not, so we can go ahead now and add to the array if it's unique
        if (isUnique) {
            unique[uniqueElements] = candidate;
            uniqueElements++;
        }
        
    }
    cout<<"Unique elements found are: ";
    // print all the unique values we found
    for (int i = 0; i < uniqueElements; i++) // go up until the number of uniqueElements, not size
    {
        cout << unique[i] << " ";
    }
    cout<<endl;
    return 0;
}