#include<bits/stdc++.h>
using namespace std;
// Sets in C++ STL
// collection of some elements
int main(){
    set<string> s; // Declaration
    s.insert("abc");// log(n)
    s.insert("mnop");
    s.insert("bcd");
    set<string> :: iterator it=s.find("abc");
    // This works similar to maps 
    // If "abc" is present then we get the location in "it"
    // Else "it" gets the value of s.end()
    cout<<(*it)<<endl;

    // Printing 
    for(string value : s){
        cout<< value << endl;
    }
     
    // If we add the same element again it is not added ie works like keys in maps

    s.erase("abc"); // Finds that string and deletes it. If not present then does nothing;
    s.erase(it); // Deletes the element present in that address;
    cout<< (*it) << endl;// This will not work as the it is now invalidated

    it = s.erase(it);
    //The erase function in C++ returns an iterator pointing to the next element after the erased one.
    // So, you can directly assign it back to it and continue your loop safely


    // Unordered Set
    // Similar difference as in maps and unordered maps 
    // All time complexity becomes O(1);
    // Works with Hash tables 
    // Cannot keep complex  data types as hash functions not defined

    // MultiSet
    // Allows multiple insertion of same key
    // again the complexity becomes O(log(n));

    // If duplicates present then 
    // s.find() will return the iterator for first occurence;
    // s.erase(it) will erase value at that iterator only
    // s.erase("abc") will erase all occurences of "abc"

    // Other common functions are same for containers
}