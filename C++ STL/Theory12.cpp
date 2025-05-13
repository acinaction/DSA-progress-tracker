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


    //more algorithms

    // Lambda functions-
    // [](int x){return x+2;}
    // cout << [](int x){return x+2;}(2); << endl;
    // [](int x, int y){return x+y;}
    // auto sum = [](int x, int y){return x+y;};
    // now sum can be used as a function like sum(1,2);

    // vector<int> v = {2,3,5};
    // cout << all_of(v.begin,v.end(),[](int x){return x>0;}) // checks whether all elements are >0;

    // cout << any_of(v.begin(),v.end(),[](int x){return x%5==0;}) // checks whether any element is divisible by 5;

    // cout << none_of(v.begin(),v.end(),[](int x){return x<0}) // returns true iff all dont match;

    // We can also pass it like we did in case of comparator function
}