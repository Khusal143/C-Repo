#include <stdio.h>

int main() {
    int num, sum = 0, product = 1, digit;

    // Input number from the user
    scanf("%d", &num);

    int temp = num;

    // Calculate sum and product of digits
    while (temp > 0) {
        digit = temp % 10;
        sum += digit;
        product *= digit;
        temp /= 10;
    }

    // Check if the number is a Spy Number
    if (sum == product) {
        printf(" Spy Number\n");
    } else {
        printf("Not Spy Number\n");
    }

    return 0;
}
