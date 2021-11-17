#include <iostream>
#include <cmath>

using namespace std;

void printArray(int[], int);
double getMean(int[], int);
void setFrequencies(int[], int, int[]);
void printFrequencies(int[], int);
double getSTD(int[], int);

int main() {
    // we know for sure that we have numbers between 1 and 9
    // we don't know how many numbers we will process
    // numbers between 1 and 9 will be generated randomly
    // we have to calculate the mean, frequencies for each element,
    // and standard deviation
    cout << "How many numbers do you want to process: ";
    int size;
    cin>>size;
    // just declare the array
    int data[size];
    // fill the array with random numbers between 1 and 9
    for (int i = 0; i < size; i++)
    {
        data[i] = (rand()%9) + 1;
    }
    printArray(data, size);
    double mean = getMean(data, size);
    cout<<"Mean of data: "<<mean<<endl;
    // we are going to save frequencies of each element in an array
    // we know for sure that no more than 9 unique elements will be in data array
    // create a new array with 9 elements and each index of the new array
    // will serve as counter for frequency of that index in the array
    // for example if data = [2, 2, 3, 4, 9]
    // frequiencies = [0, 2, 1, 1, 0, 0, 0, 0, 1]
    // which means at the second index (index=1 because array is 0-based)
    // we have frequency 2 => 2 is found twice in data array
    // at index 3 we have 1 => 3 is found once in data array
    // at index 4 we have 1 => 4 is found once in data array
    // at index 9 we have 1 => 9 is found once in data array
    // every o in the frequencies array means we found no element in the data array
    // init every frequency with 0
    int frequencies[9] = {0};
    setFrequencies(data, size, frequencies);
    printFrequencies(frequencies, 9);
    // get the STD of data
    // sqrt(sum(pow(abs(x-mean), 2))/n)
    double std = getSTD(data, size);
    cout<<"STD of data: "<<std<<endl;
    return 0;
}

double getSTD(int array[], int size) {
    double mean = getMean(array, size);
    double sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += pow(abs(array[i] - mean), 2);
    }
    double std = sqrt(sum)/size;
    return std;
}

void printArray(int array[], int size) {
    cout<<"Array: ";
    for (int i = 0; i < size; i++)
    {
        cout<<array[i]<<" ";
    }
    cout<<endl;
}

double getMean(int array[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += array[i];
    }
    return (double)sum/size;
}

void setFrequencies(int data[], int size, int frequencies[]) {
    for (int i = 0; i < size; i++)
    {
        frequencies[data[i] - 1]++;
    }
}

void printFrequencies(int freq[], int size) {
    for (int i = 0; i < size; i++)
    {
        if (freq[i] != 0) {
            cout<<"Element "<<i+1<<": ";
            for (int j = 0; j < freq[i]; j++)
            {
                cout<<"*";
            }
            cout<<endl;
        }
    }
    
}