//generates the Fibonacci sequence up to N terms using a recursive function.
#include <stdio.h>

void fibonacci_recursive(int n) {
    if (n <= 0) {
        return;
    }
    
    fibonacci_recursive(n - 1);
    
    static int a = 0, b = 1, next;
    
    if (n == 1) {
        printf("%d ", a);  
    } else if (n == 2) {
        printf("%d ", b); 
    } else {
        next = a + b;
        a = b;
        b = next;
        printf("%d ", next);
    }
}

int main() {
    int n;

    printf("\n\n\t Enter the number of terms for Fibonacci sequence: ");
    scanf("%d", &n);
    printf("\n\n\t Fibonacci sequence up to %d", n);
    fibonacci_recursive(n);
}

