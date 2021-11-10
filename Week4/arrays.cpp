#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    const int size = 4;
    string strs[size] = {"igli", "john", "ben"};
    int array[size];
    for (int i = 0; i < size; i++)
    {
        cout<<"This is number "<<array[i]<<endl;
        cout<<"This is string "<<strs[i]<<endl;
    }
    return 0;
}
