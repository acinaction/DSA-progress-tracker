#include<bits/stdc++.h>
using namespace std;
// Problem Statement
// We have to construct an array
// In the new array each element is replaced by 
// The next greater element in the array ahead;

// Algorithm
// We go through each element in the array
// We start popping those elements in stack for which this current element can be next greater;
// For popped - the next greater is that current element. 
// We pop those and push the current element.
// We go on doing this .. at the end we go on popping elements in stack and assign -1 to them;

// An imp idea - 
// Whenever there is an element which we are checking,
// If there is any element smaller from this element ahead .. that cant be the next greater
// Because if it would have been, then instead of that the previous will only become next greater

int main(){
    int n;
    cin >> n;
    vector<int> arr;
    for(int i=0;i<n;i++){// Taking input into the vector;
        int q;
        cin >> q;
        arr.push_back(q);
    }
    stack<int> st;
    vector<int> nge(n);
    for(int i=0;i<n;i++){// We push indexes to the stack. By this way we can access the array element also and index also. 
        int curr = arr[i];
        while(st.empty()==0 && arr[st.top()]<curr){
            nge[st.top()]=curr;
            st.pop();
        }
        st.push(i);
    }

    while(st.empty()==0){
        nge[st.top()]=-1;
        st.pop();
    }

    for(auto element : nge){
        cout << element << " ";
    }
}
// Extra knowledge - 
// creating vector of size n - 
// vector<int> v(n);
// creating vector of size n with specific element - 
// vector<int> v(n,0);

// A great thing used in this question is pushing indexes to the stack
// Instead if we had values then we would have to find the indexes of those values
// By using index, we have access to both values and the indexes;