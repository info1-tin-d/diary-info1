/*
- fib(5) -> 8
    - fib(4) -> 5
        - fib(3) -> 3
            - fib(2) -> 2
            - fib(1) -> 1
        - fib(2) -> 2
    - fib(3) -> 3
        - fib(2) -> 2
        - fib(1) -> 1
*/
#include <stdio.h>

int fib(int n) {
    if (n == 1 || n == 2) return n;
    return fib(n-1) + fib(n-2);
}

int main() {
    printf("%d\n", fib(5)); // 8
}
