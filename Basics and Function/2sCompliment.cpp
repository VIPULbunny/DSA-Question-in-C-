#include <iostream>
#include <cmath>
using namespace std;

// Function to compute the binary representation of a number
int decimalToBinary(int n, int bits) {
    int binary = 0, placeValue = 1;

    for (int i = 0; i < bits; i++) {
        int rem = n % 2;          // Extract the remainder (0 or 1)
        binary += rem * placeValue; // Build the binary number
        placeValue *= 10;         // Move to the next place value
        n /= 2;                   // Divide by 2 to reduce the number
    }

    return binary;
}

// Function to compute the 2's complement of a number
int twosComplement(int n, int bits) {
    if (n >= 0) {
        // Positive numbers: Convert directly to binary
        return decimalToBinary(n, bits);
    }

    // Step 1: Find binary representation of absolute value
    n = abs(n);
    int binary = decimalToBinary(n, bits);

    // Step 2: Find 1's complement
    int onesComplement = 0, placeValue = 1;
    for (int i = 0; i < bits; i++) {
        int bit = binary % 10;        // Extract the last bit
        bit = 1 - bit;                // Flip the bit (0 -> 1, 1 -> 0)
        onesComplement += bit * placeValue; // Add flipped bit
        placeValue *= 10;             // Move to the next place value
        binary /= 10;                 // Reduce binary
    }

    // Step 3: Add 1 to 1's complement
    int twosComplement = 0, carry = 1;
    placeValue = 1;
    for (int i = 0; i < bits; i++) {
        int bit = onesComplement % 10; // Extract the last bit
        int sum = bit + carry;         // Add carry
        twosComplement += (sum % 2) * placeValue; // Add result bit
        carry = sum / 2;               // Update carry
        placeValue *= 10;              // Move to the next place value
        onesComplement /= 10;          // Reduce number
    }

    return twosComplement;
}

int main() {
    int n, bits;
    cout << "Enter the number of bits for representation: ";
    cin >> bits;

    cout << "Enter a number: ";
    cin >> n;

    if (abs(n) >= pow(2, bits)) {
        cout << "Number out of range for " << bits << "-bit representation." << endl;
        return 0;
    }

    int result = twosComplement(n, bits);
    cout << bits << "-bit 2's Complement representation: " << result << endl;

    return 0;
}

