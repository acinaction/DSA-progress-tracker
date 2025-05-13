#include<bits/stdc++.h>
using namespace std;
// Inbuilt sorting algorithms
int main(){
    //sort(ptr1,ptr2);// Takes 2 inputs;
    // 1) The ptr of point of strt of sorting;
    // 2) The ptr of point next to end of sorting;

    int n;
    cin >> n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    sort(a.begin(),a.end());
    for(auto s : a){
        cout << s << " ";
    }
}
// This inbuilt sorting algo(intro sort) is a mix of quick sort, heap sort, and insertion sort;