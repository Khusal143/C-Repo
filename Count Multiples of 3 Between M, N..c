#include <stdio.h>

int countMultiplesOfThree(int M, int N) {
    int count = 0;

    // Ensure M is less than or equal to N
    if (M > N) {
        int temp = M;
        M = N;
        N = temp;
    }

    // Find the first multiple of 3 greater than or equal to M
    if (M % 3 != 0) {
        M += (3 - M % 3);
    }

    // Count multiples of 3 in the range [M, N]
    for (int i = M; i <= N; i += 3) {
        count++;
    }

    return count;
}

int main() {
    int M, N;

    // Input the range values
   
    scanf("%d", &M);
    
    scanf("%d", &N);

    // Calculate and display the count of multiples of 3
    int result = countMultiplesOfThree(M, N);
    printf("%d\n", result);

    return 0;
}
