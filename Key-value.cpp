#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    cin >> n;
    map<string, string> phone_book;
    
    for (int i = 0; i < n; ++i) {
        string name, phone_number;
        cin >> name >> phone_number;
        phone_book[name] = phone_number;
    }   
    
    
    string query;
    while (cin >> query) {
        if (phone_book.find(query) != phone_book.end()) {
            cout << query << "=" << phone_book[query] << endl;
        } else {
            cout << "Not found" << endl;
        }
    }
    return 0;
}
