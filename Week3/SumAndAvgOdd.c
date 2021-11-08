#include <stdio.h>

// we are going to allow the user to enter a specific amount of values
// we are going to sum only the odd numbers
// we are going to print the sum and avg of odd numbers only
// user might not enter any odd number at all
int main() {
    // this variable signifies the total numbers you are going to process
    int n;
    printf("enter how many numbers you want to process:");
    scanf("%d", &n);
    int count = 1;
    int sum = 0;
    // here we save to total numbers that are even
    int oddNumbers = 0;
    // here we are going to save user input every time he enters one
    int userInput;
    while (count <= n)
    {
        printf("enter number %d:", count);
        scanf("%d", &userInput);
        if (userInput%2 != 0) {
            sum += userInput;
            oddNumbers++;
        }
        count++;
    }
    printf("sum of your even numbers is %d\n", sum);
    if (oddNumbers > 0) {
        // this means that I can now calculate the average
        // don't forget (float), otherwise you will get an integer result
        float avg = (float)sum/oddNumbers;
        printf("Average of your odd numbers is %.2f\n", avg);
    } else {
        printf("You didn't enter any odd number, I can't calculate average\n");
    }
    return 0;
}