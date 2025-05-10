#include<bits/stdc++.h>
using namespace std;
// Pairs
int main(){
    pair<int, string> p;

    // The two ways of initializing a pair:
    // 1. Using make_pair function
    // 2. Using the constructor of the pair class

    //p = make_pair(2, "abc");
    p = {2, "abc"};

    // How to access the elements of a pair:
    // 1. Using the first and second members of the pair class
    pair<int, string> p1 = p;
    cout << p.first << " " << p.second << endl;

    // It is generally used to keep related data together.
    // For example, we have two arrays of the same size and we want to keep the ith element of both arrays related.
    
    int arr1[] = {1, 2, 3, 4, 5};
    int arr2[] = {6, 7, 8, 9, 10};

    pair<int, int> arr[5];
    for(int i = 0; i < 5; i++){
        arr[i] = {arr1[i], arr2[i]};
    }
    // Now we can access the ith element of both arrays using arr[i].first and arr[i].second.
    // We can also use the pair class to keep the ith element of two arrays related.
}