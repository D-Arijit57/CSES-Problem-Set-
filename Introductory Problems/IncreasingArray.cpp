#include<bits/stdc++.h>
using namespace std;
void solve(long long n, vector<long long>& a) {
    long long moves = 0;
    for(int i = 1; i < n; i++) {
        // If current element is smaller than previous element
        if(a[i] < a[i-1]) {
            // Calculate how many moves needed to make it equal to previous element
            moves += a[i-1] - a[i];
            // Update current element to match previous element
            a[i] = a[i-1];
        }
    }
    
    cout << moves << endl;
}

int main() {
    long long n;
    cin >> n;
    vector<long long> a(n);
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    solve(n, a);
    return 0;
}
