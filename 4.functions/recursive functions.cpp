#include <iostream>

int factorial(int n) {
    if (n <= 1)
        return 1;
    else
        return n * factorial(n - 1);
}

int main() {
    int result = factorial(10);
    std::cout << "Factorial: " << result << std::endl;
    return 0;
}
