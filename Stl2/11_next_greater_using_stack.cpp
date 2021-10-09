// arr :- 4,5,2,25,7,8
// output:- 5,25,25,-1,8,-1
// You have given an find next greater of each element at assign it if present 
// otherwise assign -1 if not present
#include<bits/stdc++.h>
using namespace std;
// Function to find next greater element
vector<int> NGE(vector<int> v)
{
    vector<int> nge(v.size());
    stack<int> st; // Declare a stack
    for(int i=0; i<v.size(); i++)
    {
        // check current element with stack if it is next grater then assign corresponding val
        while(!st.empty() && v[i] > v[st.top()])
        {
            nge[st.top()] = i; // put current index into result array
            st.pop(); // pop that elem
        }
        // if empty and not greater possible then push current index into stack
        st.push(i);
    }
    // after all iteration assign -1 to corresponding stack index
    // i.e for that index next greater is not possible
    while(!st.empty())
    {
        nge[st.top()] = -1;
        st.pop();
    }
    return nge;
}
int main()
{
    int n;
    cout<<"enter size: "<<endl;
    cin >> n; 
    vector<int> v(n);
    cout<<"enter Array element"<<endl;
    for(int i=0; i<n; i++)
    {
        cin >>v[i];
    }
    vector<int> nge = NGE(v); // nge vector contain index of next greater
    for(int i=0; i<n; i++)
    {
        // if current nge element -1 then print -1 else print value at that index
        cout<<v[i]<<" "<<((nge[i] == -1 ) ? -1 : v[nge[i]])<<endl;
    }
    return 0;
}