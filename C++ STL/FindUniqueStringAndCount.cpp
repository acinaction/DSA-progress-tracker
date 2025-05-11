#include<bits/stdc++.h>
using namespace std;
// Given N strings, print unique strings in lexicographical order with their frequency;
// N<=10^5
// S <= 100

int main(){
    map<string,int> m;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        m[s];
        m[s]++;
    }
    for(pair<string,int> pr : m){
        cout << pr.first << " " << pr.second << endl;
    }
}