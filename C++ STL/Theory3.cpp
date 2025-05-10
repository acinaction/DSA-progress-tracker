#include<bits/stdc++.h>
using namespace std;
// Nesting of Vectors
void printvec(vector< pair<int,int>> v){
    for(int i=0;i<v.size();i++){
        cout << v[i].first << " " << v[i].second << endl; // Printing the elements of the vector
    }
    cout << endl; // Printing a new line
}
int main(){
    // Vectors of pairs
    vector< pair<int,int> > v={{1,2},{2,3},{3,4}}; // Declaring a vector of pairs
    printvec(v); // Printing the vector of pairs
    // taking input in a vector of pairs
    int n;
    cin >> n;
    vector< pair<int,int> > v1;
    for(int i=0;i<n;i++){
        int x,y;
        cin >> x >> y;
        v1.push_back({x,y}); // Adding elements to the vector of pairs  O(1)
    }

    // Arrays of vectors
    int N;
    cin >> N;
    vector<int> v2[N]; // created an array of 10 vectors
    for(int i=0;i<N;i++){
        int n;
        cin >> n;
        for(int j=0;j<n;j++){
            int x;
            cin >> x;
            v2[i].push_back(x);
        }
    }
    // this is a type of 2d array where no of rows is fixed
    // but no of columns can be variable..

    // For printing remember that v2[i] is a vector.. now we can easily print;

    // Vectors of Vectors
    vector<vector<int>> v3;// Declaration
    int N;
    cin>>N;
    for(int i=0;i<N;i++){
        int n;
        cin>>n;
        vector<int> temp;
        for(int j=0;j<n;j++){
            int x;
            cin>>x;
            temp.push_back(x);
        }
        v3.push_back(temp);
    }
    // This can also be thought of as a 2d array with same indexing. 
    // This is better than arrays of vectors because it can have variable no of rows also. 
    
}