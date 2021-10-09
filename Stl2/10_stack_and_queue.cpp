#include<bits/stdc++.h>
using namespace std;
// using unorder map to avoid if-else condition
// For open bracket using -ve no and for closing using +ve no
unordered_map<char,int> symbols = {{'[',-1},{'{',-2},{'(',-3},{']',1},{'}',2},{')',3}};
string isBalanced(string str)
{
    stack<char> st;
    // Traversing the string
    for(char bracket: str)
    {
        // if -ve then opening bracket push into stack
        if(symbols[bracket] < 0)
        {
            st.push(bracket);
        }
        // else +ve do check 
        else{
            // First check stack is empty or not
            // if empty then retun no
            if(st.empty()) return "NO";
            // else check next
            char curr_top = st.top(); // current element on top of stack
            st.pop(); // Remove it
            if(symbols[bracket] + symbols[curr_top] != 0)
                return "NO"; // if opening and closing not matching then return no else check further
        }
    }
    // After all check done 
    // now check stack is empty or not
    if(st.empty()) return "YES"; // Empty
    return "NO"; // Not empty
}
int main()
{
    // Stack :- Follow Lifo
    // Three operation:- push,pop,top
    // Creating stack
    // stack<int> s; // stack of int
    // // put element in stack
    // s.push(23);
    // s.push(43);
    // s.push(45);
    // s.push(56);
    // // Accessing and clear stack
    // while(!(s.empty()))
    // {
    //     cout<<s.top()<<endl; // Access , We can access from top
    //     s.pop();  // Remove element from top
    // }


    // // Queue:- Follow FIFO
    // // Three operation:- push,pop,front
    // // Creating Queue
    // queue<string> q; // Queue of string
    // // put element in queue
    // q.push("abc");
    // q.push("bcd");
    // q.push("bgf");
    // q.push("rammf");
    // // Access and clear queue
    // while(!(q.empty()))
    // {
    //     cout<<q.front()<<endl; // Access:- we can access from front
    //     q.pop();  // Remove from front

    // }


    // Balance parenthesis program
    int t;
    cout<<"Enter test Case: "<<endl;
    cin >> t;
    while(t--)
    {
        cout<<"Enter String:"<<endl;
        string str;
        cin >>str;
        cout<<isBalanced(str)<<endl;
    }
    return 0;
}