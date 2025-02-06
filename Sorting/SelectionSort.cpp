#include <iostream>  // Include standard input-output stream library
using namespace std;

// Function to perform Selection Sort
void selectionSort(int arr[], int n) {
    // Outer loop for selecting the minimum element index
    for (int i = 0; i < n - 1; i++) {
        int SI = i; // Index of the smallest element

        // Inner loop to find the smallest element in the remaining array
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[SI]) { // If a smaller element is found, update SI
                SI = j;
            }
        }

        // Swap the found smallest element with the first element of the unsorted part
        swap(arr[i], arr[SI]);
    }
}

// Function to print the sorted array
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl; // Move to the next line for better output formatting
}

int main() {
    // Initialize an array with unsorted integers
    int arr[] = {4, 1, 5, 2, 3};

    // Calculate the size of the array
    int n = sizeof(arr) / sizeof(arr[0]);

    // Call selectionSort function to sort the array
    selectionSort(arr, n);

    // Print the sorted array
    cout << "Sorted array: ";
    printArray(arr, n);

    return 0; // Return 0 to indicate successful execution
}
