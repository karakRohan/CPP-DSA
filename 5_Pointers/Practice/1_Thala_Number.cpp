#include <iostream>
using namespace std;

// Calculate the sum of squares of all digits
int getNext(int n) {
    int sum = 0;
    while (n > 0) {
        int digit = n % 10;
        sum += digit*digit;
        n = n / 10;
    }
    return sum;
}
// Check whether the number is a Thala Number
bool isThalaNumber(int n) {

    int slow = n;
    int fast = n;

    do {
        // Check if 7 is reached
        if (slow == 7 || fast == 7) {
            return true;
        }

        // Slow moves one step
        slow = getNext(slow);
        // Fast moves two steps
        fast = getNext(getNext(fast));
    } while (slow != fast);
    // A cycle is detected without reaching 7
    return false;
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    if (isThalaNumber(n)) {
        cout << "Thala Number";
    }
    else {
        cout << "Not a Thala Number";
    }
    return 0;
}

// example input - 

// 7       → 7
// 2111    → 2^2 + 1^2 + 1^2 + 1^2 = 4 + 1 + 1 + 1 = 7
// 1211   → 1^2 + 2^2 + 1^2 + 1^2 = 1 + 4 + 1 + 1 = 7