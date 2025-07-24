#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n, sum = 0, i = 0;  
    cin >> n;
    
    while(i < n-1){  
        long long temp;
        cin >> temp;
        sum += temp;
        i++;  
    }
    
    long long sum_of_n = (n * (n + 1)) / 2;
    long long missing = (sum_of_n - sum);
    cout << missing << endl;
    return 0;
}
