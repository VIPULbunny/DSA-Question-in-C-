#include <iostream>  // Include the standard input-output stream library
using namespace std;

int main() {
    // Initialize an array with unsorted integers
    int arr[] = {4, 1, 5, 2, 3};

    // Calculate the size of the array (Total bytes / Bytes per element)
    int n = sizeof(arr) / sizeof(arr[0]); 

    // Outer loop for number of passes (Bubble Sort has n-1 passes)
    for (int i = 0; i < n - 1; i++) {
        
        // Inner loop for comparing adjacent elements
        for (int j = 0; j < n - i - 1; j++) { 
            
            // Swap if the current element is greater than the next element
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }

    // Print the sorted array
    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0; // Return 0 to indicate successful execution
}
