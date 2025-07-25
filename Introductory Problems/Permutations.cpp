#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    // Special cases
    if (n == 1) {
        cout << "1" << endl;
        return 0;
    }
    
    if (n == 2 || n == 3) {
        cout << "NO SOLUTION" << endl;
        return 0;
    }
    
    // For n >= 4, we can construct a beautiful permutation
    vector<int> result;
    
    // First add all even numbers
    for (int i = 2; i <= n; i += 2) {
        result.push_back(i);
    }
    
    // Then add all odd numbers
    for (int i = 1; i <= n; i += 2) {
        result.push_back(i);
    }
    
    // Print the result
    for (int i = 0; i < result.size(); i++) {
        if (i > 0) cout << " ";
        cout << result[i];
    }
    cout << endl;
    
    return 0;
}