#include <stdio.h>

// we are going to allow the user to enter a specific amount of values
// we are going to sum only the even numbers
// we are going to print the sum and avg of even numbers only
// user might not enter any even number at all
int main() {
    // this variable signifies the total numbers you are going to process
    int n;
    printf("enter how many numbers you want to process:");
    scanf("%d", &n);
    int count = 1;
    int sum = 0;
    // here we save to total numbers that are even
    int evenNumbers = 0;
    // here we are going to save user input every time he enters one
    int userInput;
    while (count <= n)
    {
        printf("enter number %d:", count);
        scanf("%d", &userInput);
        if (userInput%2 == 0) {
            sum += userInput;
            evenNumbers++;
        }
        count++;
    }
    printf("sum of your even numbers is %d\n", sum);
    if (evenNumbers > 0) {
        // this means that I can now calculate the average
        // don't forget (float), otherwise you will get an integer result
        float avg = (float)sum/evenNumbers;
        printf("Average of your even numbers is %.2f\n", avg);
    } else {
        printf("You didn't enter any even number, I can't calculate average\n");
    }
    return 0;
}