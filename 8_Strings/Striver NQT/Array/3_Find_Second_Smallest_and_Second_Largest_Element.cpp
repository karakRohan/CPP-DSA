#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin, s);

    // Remove [ ] and ,
    for(int i = 0; i < s.size(); i++)
    {
        if(s[i] == '[' || s[i] == ']' || s[i] == ',')
        {
            s[i] = ' ';
        }
    }

    vector<int> arr;
    stringstream ss(s);

    int x;

    // Store integers into vector
    while(ss >> x)
    {
        arr.push_back(x);
    }

    // If array size less than 2
    if(arr.size() < 2)
    {
        cout << "Second Smallest : -1" << endl;
        cout << "Second Largest : -1";
        return 0;
    }

    int smallest = INT_MAX;
    int secondSmallest = INT_MAX;

    int largest = INT_MIN;
    int secondLargest = INT_MIN;

    for(int i = 0; i < arr.size(); i++)
    {
        // Second Smallest
        if(arr[i] < smallest)
        {
            secondSmallest = smallest;
            smallest = arr[i];
        }
        else if(arr[i] != smallest && arr[i] < secondSmallest)
        {
            secondSmallest = arr[i];
        }

        // Second Largest
        if(arr[i] > largest)
        {
            secondLargest = largest;
            largest = arr[i];
        }
        else if(arr[i] != largest && arr[i] > secondLargest)
        {
            secondLargest = arr[i];
        }
    }

    // If second smallest/largest not found
    if(secondSmallest == INT_MAX)
    {
        secondSmallest = -1;
    }

    if(secondLargest == INT_MIN)
    {
        secondLargest = -1;
    }

    cout << "Second Smallest : " << secondSmallest << endl;
    cout << "Second Largest : " << secondLargest;

    return 0;
}