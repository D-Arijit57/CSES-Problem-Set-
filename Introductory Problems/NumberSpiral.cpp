#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
    int t;
    cin >> t;
    while (t--) {
        ll y, x;
        cin >> y >> x;
        ll z = max(x, y);
        ll result;
        if (z % 2 == 0) {
            if (y == z)
                result = z * z - x + 1;
            else
                result = (z - 1) * (z - 1) + y;
        } 
        else {
            if (x == z)
                result = z * z - y + 1;
            else
                result = (z - 1) * (z - 1) + x;
        }
        cout << result << '\n';
    }
    return 0;
}