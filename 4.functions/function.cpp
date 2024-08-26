#include <iostream>

using namespace std;

int sum(int a, int b) {
    return a + b;
}

int mul(float c, float d) {
    return c * d;
}

int main() {
    float num;
    float num2;
    cout << "Give me two numbers for multiplication: ";
    cin >> num;
    cin >> num2;

    cout << "Your answer is " << mul(num, num2);
    return 0;
}
