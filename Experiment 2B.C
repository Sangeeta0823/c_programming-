/******************************************************************************
Name :-Sangeeta Bind
UIN : 251C021
Class : civil
Div : B
*******************************************************************************/
#include <stdio.h>

int main() {
    int start, end, i, sum = 0;

    printf("Enter starting number: ");
    scanf("%d", &start);

    printf("Enter ending number: ");
    scanf("%d", &end);

    for(i = start; i <= end; i++) {
        if(i % 2 != 0) {   // Check if number is odd
            sum = sum + i;
        }
    }

    printf("Sum of all odd numbers between %d and %d is: %d", start, end, sum);
    return 0;
}
