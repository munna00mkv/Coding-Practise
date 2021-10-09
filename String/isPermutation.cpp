#include<iostream>
#include<cstring>
using namespace std;
int main()
{
   char str1[50], str2[50];
   cout<<"Enter First String: "<<endl;
   cin>>str1;
   cout<<"Enter Second String: "<<endl;
   cin>>str2;
   bool isPermutation = true;
   if(strlen(str1) != strlen(str2))
   {
       isPermutation = false;
   }
   else{
   int freq[256] = {0}; // declare an array of total char size and intialize it with 0
   // traverse first string and increment corresponding char ascii value
   for(int i=0; str1[i] != '\0'; i++)
   {
       int index = str1[i];
       freq[index]++;
   }
   // traverse second string decrement corresponding char ascii value
   for(int i=0; str2[i] != '\0'; i++)
   {
       int index = str2[i];
       freq[index]--;
   }
   // traverse frequency array and check whether it is empty or not
   for(int i=0; i<256; i++)
   {
       if(freq[i] != 0)
       {
           isPermutation = false;
           break;
       }
       else{
           isPermutation = true;
       }
   }
   }
   if(isPermutation)
   {
       cout<<"true"<<endl;
   }
   else{
       cout<<"false";
   }
    return 0;
}