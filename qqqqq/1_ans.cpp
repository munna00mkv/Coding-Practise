#include<bits/stdc++.h>
using namespace std;
int solution(string &str, vector<int> &arr)
{
	int min = 0;
	int i=0, j = 1;
	while(j < str.length())
	{
		if(str[i] == str[j])
		{
			min += arr[i];
		}
		i++;
		j++;
	}
	return min;

}
int main()
{
	string str = "aaaa";
	vector<int> c = {3,4,5,6};
	int ans = solution(str,c);
	cout<<ans<<endl;
	return 0;
}