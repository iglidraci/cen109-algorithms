#include <stdio.h>

void displayBits(unsigned int);

int main() {
    unsigned int a = 100;
    unsigned int b = (1 << 31);
    printf ("%u\n", b);
    printf ("%u\n", 1&b);
    displayBits(a);
    displayBits(b);
    // 1's complement
    displayBits(~b);
}

void displayBits(unsigned int nr) {
    unsigned int mask = 1 << 31; // 10000 ... 0000
    printf("%u = ", nr);
    for (size_t i = 1; i <= 32; i++)
    {
        if ((nr & mask) > 0)
            printf("1");
        else
            printf("0");
        if (i % 8 == 0)
            printf(" ");
        nr = nr << 1;
    }
    printf("\n");
}