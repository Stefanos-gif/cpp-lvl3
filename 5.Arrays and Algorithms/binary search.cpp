#include <iostream>
using namespace std;

int binarySearch(int arr[], int size, int key) {
    int low = 0;
    int high = size - 1;

    while(low <= high) {
        int mid = low + (high - low) / 2;

        if(arr[mid] == key) {
            return mid;
        }
        else if(arr[mid] < key) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }

    return -1;
}

int main() {
    int arr[5] = {1, 3, 5, 7, 9};
    int key = 5;
    int result = binarySearch(arr, 5, key);

    if(result != -1) {
        cout << "Element found at index: " << result << endl;
    } else {
        cout << "Element not found." << endl;
    }

    return 0;
}
