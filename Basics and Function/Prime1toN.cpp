#include<iostream>
using namespace std;

bool PrimeOrNot(int num) {
    if (num < 2) {
        return false; // Numbers less than 2 are not prime
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return false; // Found a factor, not prime
        }
    }
    return true; // Prime number
}

void prime(int n) {
    for (int i = 2; i <= n; i++) {
        if (PrimeOrNot(i)) {
            cout << i << " "; // Print only if the number is prime
        }
    }
    cout << endl; // For better formatting
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    prime(n); // Print all prime numbers up to n
    return 0;
}

