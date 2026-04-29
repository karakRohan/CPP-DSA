/*#include <iostream>
using namespace std;

int main() {
    try {
        int *p = new int[1000000000000000];
        cout << "Memory allocation is successfully\n";
        delete[] p;
    }
    catch (const exception &e) {
        cout << "Exception Occured due to line : " << e.what() << endl;
    }
}*/


#include <iostream>
#include <new>   // for bad_alloc
using namespace std;

int main() {
    try {
        // use a realistic size
        int n = 100000000; // ~400MB (adjust as needed)
        
        int *p = new int[n];
        cout << "Memory allocation is successful\n";

        delete[] p;
    }
    catch (const bad_alloc &e) {
        cout << "Memory allocation failed: " << e.what() << endl;
    }
}