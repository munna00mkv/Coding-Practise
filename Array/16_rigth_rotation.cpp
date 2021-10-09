#include<bits/stdc++.h>
using namespace std;
int main()
{
        int n, k;
        cin >>n >> k;
        vector<int> arr;
        for(int i=0; i<n; i++)
        {
            int elem;
            cin >> elem;
            arr.push_back(elem);
        }
        while(k--)
        {
            int len = arr.size();
            int last_elem = arr[len-1];
            for(int i = len - 2; i>=0; i--)
            {
                arr[i+1] = arr[i];
            }
            arr[0] = last_elem;

        }
        for(int i=0; i<arr.size(); i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
	return 0;
}

