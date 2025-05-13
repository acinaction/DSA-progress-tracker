#include<bits/stdc++.h>
using namespace std;
// Stacks and Queues
int main(){
  // Stack - LIFO ( last in first out )
  // Operations - push, pop(last element), View top element 
  // We can access only last element 

  // Queue - FIFO ( first in first out )
  // Operations - push, pop(first element), View front element

  // In-built implementation in STL
  stack<int> s;
  s.push(1); // This pushes an element in the stack
  s.push(2);
  s.push(3);
  s.push(4);
  while(!s.empty()){ // This tells whether the stack is empty or not.
    cout << s.top(); //This returns the value of top.
    s.pop(); // This pops the last element. 
  }

  queue<string> q;
  q.push("abc"); // Similar to stack.
  q.push("def");
  q.push("ghi");
  q.push("jkl");
  while(!q.empty()){ // Similar to stack.
    cout << q.front(); // Returns value at front. 
    q.pop(); // Similar to stack.
  }
}
