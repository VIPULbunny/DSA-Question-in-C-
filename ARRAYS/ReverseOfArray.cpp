#include <iostream>
#include <algorithm> // For std::swap
using namespace std;

// Function to reverse the array
void reverse(int arr[], int sz) {
    for (int i = 0; i < sz / 2; i++) {
        swap(arr[i], arr[sz - i - 1]); // Swap elements
    }
}

int main() {
    int arr[] = {4, 9, 7, 8, 1, 2, 5, 0}; 
    int sz = sizeof(arr) / sizeof(arr[0]); // Calculate size of the array

    reverse(arr, sz); // Reverse the array

    // Print the reversed array
    for (int i = 0; i < sz; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}

