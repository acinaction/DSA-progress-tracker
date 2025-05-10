#include<bits/stdc++.h>
using namespace std;
// Vectors

// Vectors is a container that is similar to arrays;
// Vectors are dynamic arrays that can grow and shrink in size.
// Vectors are implemented as a template class in C++.

// Function to print a vector
void printVec(vector<int> v){
    for(int i=0;i<v.size();i++){
        cout << v[i] << " "; // Printing the elements of the vector
    }
    cout << endl; // Printing a new line
}
int main(){
    vector<int> v; // Declaring a vector of integers

    // vector<int> v(5); // Declaring a vector of integers of size 5
    // vector<int> v(5, 10); // Declaring a vector of integers of size 5 and initializing all elements to 10
    // vector<int> v = {1, 2, 3, 4, 5}; // Declaring a vector of integers and initializing it with values


    // taking input in a vector
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        int x;
        cin >> x;
        v.push_back(x); // Adding elements to the vector  O(1)
    }

    // v.pop_back(); // Removing the last element of the vector  O(1)
    // v.clear(); // Clearing the vector  O(n)
    vector<int> v2 = v; // Copying the vector  O(n)
}