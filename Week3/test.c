#include <stdio.h>
#include <stdlib.h>
int main ()
{
    int n;
    printf ("Enter how many numbers you want: ");
    scanf ("%d", &n);
    printf ("The number you entered is = %d\n", n);
    int count = 1;
    int sum = 0;
    int userInput;
    int condition = 0;
    while (count <= n) {
        printf ( "Enter a number: ");
        scanf("%d", &userInput);
        if (userInput%2 == 1 ) {
            sum += userInput;
            condition++;
        }
        count++;
    }
    printf("sum of numbers is %d\n", sum);
    double avg = (double) sum/condition;
    printf ("avg is %.2f\n", avg);
    return 0;
}