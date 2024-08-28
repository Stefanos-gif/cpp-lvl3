#include <iostream>
using namespace std;
int main(){

    int arr[3][4] = {
    {1, 2, 3, 4},
    {5, 6, 7, 8},
    {9, 10, 11, 12}
    };
    
    for(int i = 0; i < 3; i++) {         // Loop over the rows
        for(int j = 0; j < 4; j++) {     // Loop over the columns
            cout << arr[i][j] << " ";    // Print each element in the row
        }
        cout << endl;                    // New line after each row
    }

    return 0;
}
