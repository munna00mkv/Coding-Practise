#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int num;
    cin >> num;
    long int rev = 0;
    while(num != 0)
    {
        int r = num % 10;
        rev  = rev * 10 +  r;
        num /= 10;
    }
    long int temp = rev;
    while(temp != 0)
    {
        int last = temp % 10;
        switch(last)
        {
            case 0:
            cout<<"Zero"<<" ";
            break;
            case 1:
            cout<<"One"<<" ";
            break;
            case 2:
            cout<<"Two"<<" ";
            break;
            case 3:
            cout<<"Three"<<" ";
            break;
            case 4:
            cout<<"Four"<<" ";
            break;
            case 5:
            cout<<"Five"<<" ";
            break;
            case 6:
            cout<<"Six"<<" ";
            break;
            case 7:
            cout<<"Seven"<<" ";
            break;
            case 8:
            cout<<"Eight"<<" ";
            break;
            case 9:
            cout<<"Nine"<<" ";
            break;
            default:
            cout<<"\t\t\t\t";
            break;
        }
        temp /= 10;

    }

    return 0;
}