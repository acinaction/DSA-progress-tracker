#include<bits/stdc++.h>
using namespace std;
// Comparator function
// Custom sorting behaviour
// It says that the default swap condition is for ascending order
// But we can give it the required swap condition
bool should_i_swap(pair<int, int> a, pair<int, int> b){
    if(a.first != b.first){
        if(a.first > b.first) return false;
        else  return true;
    }
    else {
        if(a.second < b.second) return false;
        else return true;
    }
}
// This comparator function is like 
// If key is not same then compare keys and place ascending
// If key is same then place values in descending order
int main(){
    int n;
    cin >> n;
    vector<pair<int , int >> a(n);
    for(int i=0;i<n;i++){
        cin >> a[i].first >> a[i].second;
    }
    sort(a.begin(),a.end(), should_i_swap);
    for(int i=0;i<n;i++){
        cout << a[i].first << " " << a[i].second << endl;
    }
}