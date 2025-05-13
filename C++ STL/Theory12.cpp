#include<bits/stdc++.h>
using namespace std;
// Inbuilt algorithms
int main(){
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    // We have to give strt and end address (for the part for which that function is applied)
    int min = *min_element(v.begin(),v.end());// returns address
    int max = *max_element(v.begin(),v.end());

    int sum = accumulate(v.begin(),v.end(),0);// The third thing is initial sum;
    int count1 = count(v.begin(),v.end(),3);// The third is the element whose count is to be known;

    auto elt = find(v.begin(),v.end(),2);
    // if 2 is not present we get elt=v.end();

    reverse(v.begin(),v.end());// CRAzyyyyy inbuilt function

}