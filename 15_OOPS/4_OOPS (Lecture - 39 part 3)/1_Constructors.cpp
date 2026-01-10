#include <bits/stdc++.h>
using namespace std;

class Bike
{
public:
    int tyreSize;
    int engineSize;

    // Constructor
    Bike(int tyreSize, int engineSize)
    {
        this->tyreSize = tyreSize;
        this->engineSize = engineSize;
        cout << "Constructor Call Hua!!\n";
    }
};

int main()
{
    Bike tvs(12, 100); // Pass arguments directly
    Bike honda(13, 150);
    Bike royalEnfield(15, 350);

    // Access tyreSize and engineSize
    cout << "TVS Tyre Size: " << tvs.tyreSize << ", Engine Size: " << tvs.engineSize << endl;
    cout << "Honda Tyre Size: " << honda.tyreSize << ", Engine Size: " << honda.engineSize << endl;
    cout << "Royal Enfield Tyre Size: " << royalEnfield.tyreSize << ", Engine Size: " << royalEnfield.engineSize << endl;

    return 0;
}
