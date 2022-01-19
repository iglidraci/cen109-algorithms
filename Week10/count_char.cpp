#include <iostream>

using namespace std;

// non-constant pointer to const data
int count_chars(const char *, char);

int main() {
    char str[] = "hello world";
    int count = count_chars(str, 'o');
    cout << "o was found " << count << " times" << endl;
    return 0;
}

int count_chars (const char *str, char c) {
    // move the pointer but do not modify the data where pointer is pointing
    int count = 0;
    while (*str != '\0')
    {
        if (*str == c)
            count++;
        str++;
    }
    return count;
}