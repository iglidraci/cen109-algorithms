#include <stdio.h>

int main() {
    printf("Welcome to C programming\n");
    // this variable signifies the total numbers you are going to process
    int n;
    printf("enter how many numbers you want to process:");
    scanf("%d", &n);
    int count = 1;
    int sum = 0;
    // here we are going to save user input every time he enters one
    int userInput;
    while (count <= n)
    {
        printf("enter number %d:", count);
        scanf("%d", &userInput);
        sum += userInput;
        count++;
    }
    printf("sum of your numbers is %d\n", sum);
    if (n > 0) {
        // this means that I can now calculate the average
        // don't forget (float), otherwise you will get an integer result
        float avg = (float)sum/n;
        printf("Average of your numbers is %.2f\n", avg);
    } else {
        printf("You didn't enter any number, I can't calculate average\n");
    }
    return 0;
}