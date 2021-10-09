#include<iostream>
using namespace std;
int problemCount(int *arr, int n, int k)
{
    int count = 0, page = 1;
    for(int i=0; i<n; i++)
    {
        int total_problem = arr[i];
        int problem = 0;
        int pageArr[k+1];
        while (problem != total_problem)
        {
            for(int j=0; j<k; j++)
            {
                if(problem != total_problem)
                {
                    pageArr[j] = problem + 1;
                    if(pageArr[j] == page)
                        count++;
                }
            }
            page++;
        } 
        
    }
    return count;
}
int main()
{
    int n,k;
    cout<<"Enter total chapter"<<endl;
    cin >> n;
    cout<<"Enter maximum problem par page "<<endl;
    cin >> k;
    int arr[n];
    cout<<"Enter total problem per chapter: "<<endl;
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    }

    int ans = problemCount(arr,n,k);
    cout<<"Total problem is "<<ans<<endl;
    return 0;
}