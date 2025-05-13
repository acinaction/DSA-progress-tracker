#include<bits/stdc++.h>
using namespace std;
// Checking whether a string is balanced or not. 
// Algorithm-
// We go through the string from left to right
// Wherever we get opening we push it to stack
// Wherever we get closing we pop from the stack. 
// One pop means that we got one pair of opening closing. 
// At the end the stack should be empty.. if so, the string is balanced.
// If at any time there is a closing bracket without corresponding opening that will mean unbalanced.

// If we have different types of brackets
// While popping we need to check that current closing bracket matches with the top of stakc
 

// Problem Statement
// You are given n strings as input in separate lines after the input of n;
// For each string you have to print "yes" or "no" based on whether the string has balanced parenthesis or not;

int isbalanced(string &s){
    stack<char> st;
    map<char,char> m;
    m[')']='(';
    m[']']='[';
    m['}']='{';
    for(auto element : s){
        if(element == '(' || element == '[' || element == '{'){
            st.push(element);
        }
        else if(element == ')' || element == ']' || element == '}'){
            if(st.empty()==0 && st.top()==m[element]){
                st.pop();
            }
            else{
                return 0;
            }
        }
    }
    if(st.empty()==0){
            return 0;
    }
    else if(st.empty()!=0) return 1;
}

int main(){
    int n;
    cin >> n;
    while(n--){
        string s;
        cin >> s;
        int ans = isbalanced(s);
        if(ans==0) cout << "no" << endl;
        else if(ans == 1) cout << "yes" << endl;
    }
}
// Crazy hack for this ; 
// For checking opening and closing - 
// We can make an unordered map like following - 
// unordered_map<char,int> m = {{'[',1},{'{',2},{'(',3},{']',-1},{'}',-2},{')',-3}};
// Now to check whether bracket is opening or closing, just use >0 or <0;
// For checking whether current closing and st.top() match.. use m[st.top()] + m[current] == 0;