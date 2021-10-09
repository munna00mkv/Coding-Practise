// program to count frequency of each elem
#include<bits/stdc++.h>
using namespace std;
// Time complexity:- O(n^2)
// Auxilary space:- O(n)
void countFreq(vector<int> arr)
{
    int n = arr.size();
    // Array to keep track of visited elem
    // false:- not visited, true:- visited
    vector<bool> visited(n,false); // intially all array elem will be false
    for(int i=0; i<n; i++)
    {
        // find frequency of only unvisited elem
        if(visited[i] == false)
        {
            int count = 1;
            for(int j=i+1; j<n; j++)
            {
                if(arr[i] == arr[j])
                {
                    count++;
                    visited[j] = true;
                }
            }
            cout<<"Freq of "<<arr[i]<<" is: "<<count<<endl;
        }

    }

}
// Time complexity: O(n)
// Auxilary space:- O(n)
void countFreqMap(vector<int> arr)
{
    int n = arr.size();
    // map that store frequency of each element
    unordered_map<int,int> mp;
    for(int i=0; i<n; i++)
    {
        mp[arr[i]]++;
    }
    for(auto x: mp)
    {
        cout<<x.first<<" "<<x.second<<endl;
    }
}
int main()
{
    int n;
    cout<<"Enter size"<<endl;
    cin >> n;
    vector<int> arr;
    cout<<"Enter Array Element: "<<endl;
    for(int i=0; i<n; i++)
    {
        int elem;
        cin >> elem;
        arr.push_back(elem);
    }
    // countFreq(arr);
    countFreqMap(arr);
    return 0;
}