#include<bits/stdc++.h>
using namespace std;

int minProduct(vector<int> &arr){

    int cn = 0, cz = 0, cp = 0; 
    // cn = count of negative numbers
    // cz = count of zeros
    // cp = count of positive numbers

    int prod_pos = 1;   // product of positive numbers
    int prod_neg = 1;   // product of negative numbers

    int largestNegative = INT_MIN; // store the largest negative (closest to 0)

    for(int i = 0; i < arr.size(); i++){

        if(arr[i] < 0){             // if element is negative
            cn++;                   // increase negative count
            prod_neg *= arr[i];     // multiply negative numbers
            largestNegative = max(largestNegative, arr[i]); // track largest negative
        }

        if(arr[i] == 0) 
            cz++;                   // count zeros

        if(arr[i] > 0){             // if element is positive
            cp++;                   // increase positive count
            prod_pos *= arr[i];     // multiply positive numbers
        }
    }

    if(cn == 0){                    // if there are no negative numbers

        if(cz > 0) 
            return 0;               // if zero exists, minimum product is 0

        else
            return *min_element(arr.begin(), arr.end()); 
            // return smallest positive number
    }

    else{

        if(cn % 2 == 0){            // if number of negatives is even
            return (prod_neg / largestNegative) * prod_pos; 
            // remove the largest negative to make product minimum
        }

        else{
            return prod_neg * prod_pos; 
            // if negatives are odd, multiply all
        }
    }
}

int main(){

    vector<int> arr = {-2,-3,1,4,-2, -5};

    cout << minProduct(arr) << endl; // print minimum product

    return 0;
}