#include <stdio.h>
#include <limits.h>

// Function to reverse an integer using a for loop
int reverseInteger(int num) {
    long reversed = 0;
    int isNegative = (num < 0);

    if (isNegative) {
        num = -num;
    }

    // Reverse the digits using a for loop
    for (; num != 0; num /= 10) {
        int digit = num % 10;
        reversed = reversed * 10 + digit;

        // Check for overflow
        if (reversed > INT_MAX || reversed < INT_MIN) {
            return 0;
        }
    }

    return isNegative ? -(int)reversed : (int)reversed;
}

int main() {
    int number;

    // Input the number
    
    scanf("%d", &number);

    // Reverse the integer and display the result
    int result = reverseInteger(number);
    printf("%d\n", result);

    return 0;
}
