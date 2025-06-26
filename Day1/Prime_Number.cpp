#include <iostream>
using namespace std;

// ✅ Function to check whether a number is prime
bool isPrime(int n) {

    // Edge case: numbers less than 2 are not prime
    if (n <= 1)
        return false;

    // Loop from 2 to square root of n (optimization)
    for (int i = 2; i * i <= n; i++) {
        // If n is divisible by any number in this range, it's not prime
        if (n % i == 0)
            return false;
    }

    // If no divisors found, it's prime
    return true;
}

int main() {
    int num;

    // Take input from user
    cout << "Enter a number: ";
    cin >> num;

    // Check and display result
    if (isPrime(num)) {
        cout << num << " is a Prime Number" << endl;
    } else {
        cout << num << " is NOT a Prime Number" << endl;
    }

    return 0;
}
