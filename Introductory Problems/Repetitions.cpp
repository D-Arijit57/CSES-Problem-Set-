#include<bits/stdc++.h>
using namespace std;
int main(){
    string n;
    cin >> n;
    int current_length =  1 , max_length = 1;
    for(int i = 0 ; i  < n.length() ; i++){
        if(n[i] == n[i+1]) current_length++;
        else{
            max_length = max(current_length , max_length);
            current_length = 1;
        }
    }
    max_length = max(current_length, max_length);
    cout<<max_length<<endl;
    return 0;
}