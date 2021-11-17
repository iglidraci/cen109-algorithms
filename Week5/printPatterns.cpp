#include <iostream>

using namespace std;

void printRectangle(int);

void printHalfTree(int);

int main() {
    printRectangle(20);
    printHalfTree(8);
    return 0;
}

void printRectangle(int width) {
    /*
    ************
    ************
    ************
    ************
    */
   cout<<"This is our rectangle pattern with width "<<width<<endl;
    for(int i=0; i<4; i++){
        for (int i = 0; i < width; i++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}

void printHalfTree(int height) {
    /*
        *
        **
        ***
        ****
        *****
        ******
        *******
    */
   cout<<"This is our half tree with height "<<height<<endl;
   for (int i = 1; i <= height; i++)
   {
       for (int j = 1; j <= i; j++)
       {
           cout<<"*";
       }
       cout<<endl;
   }
   
}