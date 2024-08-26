#include <iostream>

using namespace std;

int isum(int a, int b) {
    return a + b;
}

float fsum(float a, float b) {
    return a + b;
}

int main() {
    cout << isum(21.4, 25.5) << endl;  // Calls the integer version of the function (will cast to int)
    cout << fsum(21.4, 25.5) << endl;  // Calls the float version of the function
    return 0;
}
