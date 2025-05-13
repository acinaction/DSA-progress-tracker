#include<bits/stdc++.h>
using namespace std;
// Lower bound and Upper bound

int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    // Lower bound return that number or a number bigger than that
    // Upper bound always returns a number greater than that number;
    // They return the addressess; in int - ptr; in vector - itr;

    int * ptr = lower_bound(a,a+n,15);
    int * ptr1 = upper_bound(a,a+n,15);
    // Give 3 arguments - from where to str, where to end(next one), which element to find
    // Both these functions work in O(log(n))

    // If an element is given for which no possible element can be returned then we get address of next of last
    // a+n for array and v.end() for vector;

    // We can use these in sets and maps as well;
    // In case of sets and maps if we use it as above it become O(n); so it gives TLE
    // So we have to use it like follows
    // auto it = s.lower_bound(5); this works in O(log(n))

    // In case of maps the lower and upper bound works on key only
    // The function would return iterator of the value for that

    // If multiple same element present then we get the address of first one through these functions
}