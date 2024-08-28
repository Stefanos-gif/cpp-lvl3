#include <iostream>
using namespace std;

void insertionSort(int arr[], int size) {
    for(int i = 1; i < size; i++) {
        int key = arr[i];
        int j = i - 1;

        while(j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;  // Insert the key at the correct position
    }
}

int main() {
    int arr[5] = {5, 1, 4, 2, 8}; // Array to be sorted
    int size = 5;

    insertionSort(arr, size);

    // Print the sorted array
    cout << "Sorted array: ";
    for(int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
