#include<bits/stdc++.h>
using namespace std;
// Maps in C++ STL

// Maps store key value pairs
// Normal maps store them in ordered way (red black trees) pairs can be present anywhere not necessarily contiguous
// Unordered maps store them in unordered way
int main(){
    // Declaration of map
    map<int, string> m;
    m[1] = "abc"; // O(log(n));
    m[5] = "cde";
    m[3] = "acd";
    m.insert({4,"afg"});
    m.insert(make_pair(2,"abd"));
    // if we re-initialize the same key then the old value is edited;
    m[5]= "cdc";
    // Ways to print 
    // 1. Using iterator
    map<int,string> :: iterator it=m.begin();
    while(it!=m.end()){
        cout<< (*it).first << " " << (*it).second << endl;
        it++;
    }
    // 2. Using ranged based loops 
    for(auto value : m){
        cout << value.first << " " << value.second << endl;
    }// The time complexity for this is O(nlog(n))...
    // bcz log(n) to search each pair;

    auto it1 = m.find(3); // m.find() returns the iterator for that specific pair with that key; O(log(n))
    // If we try to find a value that is not there then it return m.end()

    m.erase(3); // This deletes the pair with that key; O(log(n))
    m.erase(it);// This deletes the pair that is pointed by it. 
    // if that it points to m.end() then by m.erase() we get segmentation fault;

    m.clear(); // Clears the whole map; Works with all containers

    // If map has pair with key string then for declaration the complexity is m.size()*log(n);
    // This is because when we want to initialize we first compare with existing elements;
    

    // Unordered Maps
    // Differences
    // 1. Inbuilt implementation
    // 2. Time complexity
    // 3. Valid keys datatype

    unordered_map <int, string> m;
    m[1] = "abc"; // O(1);
    m[5] = "cde";
    m[3] = "acd";
    m.insert({4,"afg"});
    m.insert(make_pair(2,"abd"));
    // They use hash tables.
    // This makes complexity of both insertion and accessing O(1);
    auto it = m.find(7); // O(1)
    m.erase(it); // O(1)

    // Coming to the third point of difference.. that explains that some data-types can't be used in unordered maps;
    // Those data types whose hash func is not defined cannot be used in unordered maps;
    // hash func is defined for basic data-types like int double float etc and string but not for pairs vectors etc;

    // Multi-maps
    // They are different from maps bcz they insert pairs with same keys twice.. ie they do not update value, rather they create a new pair. 
    
}