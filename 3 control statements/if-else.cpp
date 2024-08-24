#include <iostream>
using namespace std;

int main () {

    int num;
    cout << "Give me a number from -infinite to +infinite: " ;
    cin >> num;

    if (num > 0){
        cout << "Your number is positive." << endl;
        
    }
    else if (num < 0){

        cout << "Your number is negative" << endl;
    }
    else{
        cout<< "Your number is 0"<< endl;
    }




    return 0;
}
