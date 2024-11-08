#include <stdio.h>

// Function to check whether a number is even or odd
int checkEvenOdd(int number) {
    return number % 2;
}

int main() {
    int number;
    
    // prompt user to enter a number
    printf("Enter a number: ");
    scanf("%d", &number);
    
    if (checkEvenOdd(number) == 0) {
        printf("The number is even\n");
    } else {
        printf("The number is odd\n");
    }
    
    return 0;
}
