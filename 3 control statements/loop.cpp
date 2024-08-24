#include <iostream>
using namespace std;

int main() {
    char op;
    float num1, num2, num3, num4;
    char num;

    for(int i = 1; i <= 99999999; ++i) {
        cout << "How many numbers do you want to enter? (a = 2, b = 3, c = 4) ";
        cin >> num;

        if (num == 'a') {
            cout << "Choose an operator: (a = +, b = -, c = *, d = /) ";
            cin >> op;

            if (op == 'a') {
                cout << "Write your numbers: ";
                cin >> num1 >> num2;
                cout << "Your answer is " << num1 + num2;
                return 0;
            } else if (op == 'b') {
                cout << "Write your numbers: ";
                cin >> num1 >> num2;
                cout << "Your answer is " << num1 - num2;
                return 0;
            } else if (op == 'c') {
                cout << "Write your numbers: ";
                cin >> num1 >> num2;
                cout << "Your answer is " << num1 * num2;
                return 0;
            } else if (op == 'd') {
                cout << "Write your numbers: ";
                cin >> num1 >> num2;
                cout << "Your answer is " << num1 / num2;
                return 0;
            }
        } else if (num == 'b') {
            cout << "Choose an operator: (a = +, b = -, c = *, d = /) ";
            cin >> op;

            if (op == 'a') {
                cout << "Write your numbers: ";
                cin >> num1 >> num2 >> num3;
                cout << "Your answer is " << num1 + num2 + num3;
                return 0;
            } else if (op == 'b') {
                cout << "Write your numbers: ";
                cin >> num1 >> num2 >> num3;
                cout << "Your answer is " << num1 - num2 - num3;
                return 0;
            } else if (op == 'c') {
                cout << "Write your numbers: ";
                cin >> num1 >> num2 >> num3;
                cout << "Your answer is " << num1 * num2 * num3;
                return 0;
            } else if (op == 'd') {
                cout << "Write your numbers: ";
                cin >> num1 >> num2 >> num3;
                cout << "Your answer is " << num1 / num2 / num3;
                return 0;
            }
        } else if (num == 'c') {
            cout << "Choose an operator: (a = +, b = -, c = *, d = /) ";
            cin >> op;

            if (op == 'a') {
                cout << "Write your numbers: ";
                cin >> num1 >> num2 >> num3 >> num4;
                cout << "Your answer is " << num1 + num2 + num3 + num4;
                return 0;
            } else if (op == 'b') {
                cout << "Write your numbers: ";
                cin >> num1 >> num2 >> num3 >> num4;
                cout << "Your answer is " << num1 - num2 - num3 - num4;
                return 0;
            } else if (op == 'c') {
                cout << "Write your numbers: ";
                cin >> num1 >> num2 >> num3 >> num4;
                cout << "Your answer is " << num1 * num2 * num3 * num4;
                return 0;
            } else if (op == 'd') {
                cout << "Write your numbers: ";
                cin >> num1 >> num2 >> num3 >> num4;
                cout << "Your answer is " << num1 / num2 / num3 / num4;
                return 0;
            }
        } else {
            cout << "Something went wrong!" << endl;
            return 0;
        }
    }
    return 0;
}
