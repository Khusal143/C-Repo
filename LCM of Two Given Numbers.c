#include <stdio.h>

// Function to calculate the GCD of two numbers
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

// Function to calculate the LCM of two numbers
int lcm(int a, int b) {
    return (a * b) / gcd(a, b);
}

int main() {
    int num1, num2;

    // Input two numbers from the user
    
    scanf("%d", &num1);
    
    scanf("%d", &num2);

    // Calculate and display the LCM
    printf(" %d\n",lcm(num1,num2));

    return 0;
}
