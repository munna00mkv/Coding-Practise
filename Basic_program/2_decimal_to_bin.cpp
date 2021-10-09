#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num;
    cin >> num;
    vector<int> arr;
    int k = 0;
    while(num != 0)
    {
        arr.push_back(num % 2);
        k++;
        num = num /2;
    }
    for(int i=arr.size()-1; i>=0; i--)
    {
        cout<<arr[i];
    }

    return 0;
}