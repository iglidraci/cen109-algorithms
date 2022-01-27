#include <iostream>

using namespace std;

void copy_str(const char *, char *);
bool assert_deep_copy(const char *, const char *);

int main() {
    // first string
    char str1[] = "hello world";
    int size = sizeof(str1)/sizeof(char);
    // second string
    char str2[size];
    // call function
    copy_str(str1, str2);
    cout << str1 << ", " << str2 << endl;
    if (assert_deep_copy(str1, str2))
        cout << "Deep copy completed" << endl;
    else
        cout << "Wrong solution" << endl;
    
    return 0;
}

/*
str1 is the original string
str2 it will be a copy of the original string
*/
void copy_str(const char *str1, char *str2) {
    // implement your solution here
    
}

bool assert_deep_copy(const char *str1, const char *str2) {
    if (&*str1 == &*str2)
        return false;
    while (*str1 != '\0' || *str2 != '\0')
    {
        if (*str1 != *str2)
            return false;
        str1++;
        str2++;
    }
    if (*str1 == '\0' && *str2 == '\0')
        return true;
    return false;
}