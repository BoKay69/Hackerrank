#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    cin >> n; // Read the number of integers
    
       vector<int> arr(n); // Create a vector of size n.
       // Read integers into the vector
       for (int i = 0; i < n; i++) {
           cin >> arr[i];
       }
       
       for(int i = n -1; i >= 0; i--) {
           cout << arr[i] << " ";
       }
    return 0;
}