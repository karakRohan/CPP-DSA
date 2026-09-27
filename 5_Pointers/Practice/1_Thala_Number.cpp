#include <iostream>
using namespace std;

// Calculate the sum of all digits
int getNext(int n) {
    int sum = 0;

    while (n > 0) {
        int digit = n % 10;
        sum += digit;
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
// 16      → 1 + 6 = 7
// 25      → 2 + 5 = 7
// 34      → 3 + 4 = 7
// 43      → 4 + 3 = 7
// 52      → 5 + 2 = 7
// 61      → 6 + 1 = 7
// 70      → 7 + 0 = 7
// 106     → 1 + 0 + 6 = 7
// 115     → 1 + 1 + 5 = 7