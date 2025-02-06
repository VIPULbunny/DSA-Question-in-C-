#include <iostream>  // Include standard input-output library
using namespace std;

// Function to perform Insertion Sort
void InsertionSort(int arr[], int n) {
    for (int i = 1; i < n; i++) {  
        int current = arr[i]; // Store the current element to be placed correctly
        int prev = i - 1; // Start comparing with the previous elements

        // Shift elements to the right until the correct position for current is found
        while (prev >= 0 && arr[prev] > current) {
            arr[prev + 1] = arr[prev]; // Move the element one position ahead
            prev--; // Move to the previous index
        }

        arr[prev + 1] = current; // Place current in its correct position
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
    int arr[] = {4, 1, 5, 2, 3, 10, 6, 9};

    // Calculate the size of the array
    int n = sizeof(arr) / sizeof(arr[0]);

    // Call InsertionSort function to sort the array
    InsertionSort(arr, n);

    // Print the sorted array
    cout << "Sorted array: ";
    printArray(arr, n);

    return 0; // Return 0 to indicate successful execution
}
