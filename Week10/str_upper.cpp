#include <iostream>
#include <cctype>

using namespace std;

void stringToUpper(char *);

int main() {
    char str[] = "pointers";
    cout << "before: " << str << endl;
    stringToUpper(str);
    cout << "after: " << str << endl;
    // sth interesting happened
    // we incremented the pointer up until it reached the end of string
    // why do we still print the first char of the string?
    cout << *str << endl;
    return 0;
}

void stringToUpper(char *ptr) {
    while (*ptr != '\0')
    {
        *ptr = toupper(*ptr);
        ptr++;
    }
}

