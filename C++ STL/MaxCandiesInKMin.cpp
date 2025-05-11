#include<bits/stdc++.h>
using namespace std;
// There is a monk who goes to a park and finds bags of candies;
// He eats all candies in a bag in 1 minute
// As he eats all candies in a bag and leaves it, it regains half the no of candies it had earlier
// The monk has to reach home in k minutes
// What max no of candies can he eat?

int main(){
    int n,k;
    cin>>n>>k;
    multiset<int> s;
    while(n--){
        int x;
        cin>>x;
        s.insert(x);
    }
    auto it = s.begin(); // beginning iterator
    auto last = it;
    int candies = 0;
    while(k--){
        while(it!=s.end()){ // We find the last element
        last=it;
        it++;
        }
        candies+=(*last); // Add the no of candies
        s.insert((*last)/2); // insert new bag 
        s.erase(last); // erase last bag with iterator not with value(since the latter would delete all occurrences)
        it=s.begin();
    }
    cout<<candies;

    // The above code is right except that we can go to the last element directly
    // auto lastit=(--s.end());
}