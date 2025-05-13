#include<bits/stdc++.h>
using namespace std;
// Nesting of sets and maps
int main(){
    // Sorting in pairs
    // If first element is small then pair is small
    // If first element is equal then decide by second 

    // Similar thing happens in sets and vectors 
    // First elements are compared, then second and so on.
    
    map<pair<string, string>, vector<int>> m;
    // Example we have first name last name as pair and marks as vector
    int n;
    cin>>n;
    while(n--){
        pair<string,string> p;
        cin>> p.first >> p.second;
        int k;
        cin >> k;
        while(k--){
            int u;
            cin >> u;
            m[p].push_back(u);
        }
    }
    // Accessing
        for(auto element : m){
            cout << element.first.first << " " << element.first.second << endl;
            for(auto a : element.second){
                cout << a << " ";
            }
            cout << endl;
        }

    // Similarly we can have sets of pair or vector and so on. 
    // Eg
    set<pair<int,int>> st; // This is a set of pairs;

    // hacks --->
    // Whenever we need to take names in a set .. make sure to use multiset
    // bcz there will always be a test case where names are identical 

    // If we have to store something like marks in a set and then print it in decreasing order
    // We can store negative of marks... that will eliminate the work to reverse iterate through the set.
    
}
