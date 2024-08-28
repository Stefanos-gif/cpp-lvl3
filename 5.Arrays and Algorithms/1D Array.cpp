#include <iostream>
using namespace std;

int main() {
    int num[5];
    cout << "Give me 5 numbers: ";
    cin >> num[0];
    cin >> num[1];
    cin >> num[2];
    cin >> num[3];
    cin >> num[4];

    cout << "The array you've just gave me is" << endl;
    for (int i = 0; i < 5; i++) {
        cout << "-" << num[i] << "-" << endl;
    }

    return 0;
}
