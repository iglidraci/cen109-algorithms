#include <stdio.h>

union number {
    int x;
    double y;
};

typedef union number Number;

int main() {
    Number val;
    val.x = 1;
    printf("Put 1 in the integer member and print.\nint: %d\ndouble: %f\n",
    val.x, val.y);
    val.y = 100.;
    printf("Put 100. in the double member and print.\nint: %d\ndouble: %f\n",
    val.x, val.y);
    return 0;
}