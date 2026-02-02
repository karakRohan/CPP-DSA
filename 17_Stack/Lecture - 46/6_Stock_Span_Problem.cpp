 #include <bits/stdc++.h>
using namespace std;
int main(){
    int arr[] = {100, 80, 60,81, 70, 60, 75, 85};
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<"  ";
    }
    cout<<endl;
    // Previous Greater Element Index Array (pgi) - Brute Force Approach
    int pgi[n];

    // Using a Stack : [POP , ANS , PUSH] & forward Traverse
    // SC = O(n) , TC = O(n)
 
    stack<int> stack1;
    pgi[0] = 1;
    stack1.push(0);
    for(int i=1;i<=n-1;i++){
        // POP all the elements smaller than or equal to arr[i]
        while(stack1.size()>0 && arr[stack1.top()]<=arr[i]){
            stack1.pop();
        }
         
        // ANS [Mark the ANS is pgi array]
        if(stack1.size()==0) pgi[i] = -1;
        else pgi[i] = stack1.top();
        pgi[i] = i - pgi[i];

        // PUSH the index of arr[i] into the stack
        stack1.push(i);
    }  

    for(int i=0;i<n;i++){
        cout<<pgi[i]<<"  ";
    }
    cout<<endl;
}