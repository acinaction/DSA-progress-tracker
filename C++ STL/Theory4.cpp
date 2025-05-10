#include<bits/stdc++.h>
using namespace std;
// Iterators in C++ STL
// They are like pointers which point elements of containers;
// .begin() points to the first element
// .end() points to the element next to last
int main(){
    vector<int> v = {1,2,3,4,5};
    vector<int> ::iterator it = v.begin();
    // auto it = v.begin();
    while(it!=v.end()){
        cout<<*it<<' ';
        it++;
    }
    // it++ goes to the next iterator so it works everywhere
    // it+1 goes to the next location so it doesnt work in sets and maps

    // (*it) points to the element of the vector.. it may be integer or pair or vector again.
    // (*it).first can also be written like (it->first)

    // Writing iterators code in short

    // Range based loops
    for(int value:v){ // Works in all containers
        cout<<value<<" ";
    }
    cout<<endl;

    // Auto Keyword
    auto a = 1;
    cout << a << endl;
    // for declaration of iterators we can directly use auto.. 
    // this reduces the size of code
}
