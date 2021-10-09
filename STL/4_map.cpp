/*Map:- it is an associative array
-- it sotre data into key-value pair*/
#include<iostream>
#include<map>
#include<string>
using namespace std;

int main()
{
    map<string,int> marksMap; // map of student name and their marks
    // putting data into map
    marksMap["munna"] = 98;
    marksMap["Ravi"] = 87;
    marksMap["Shivam"] = 89;
    marksMap["Dipak"] = 90;
    
     // insert data into map
    marksMap.insert({{"Rohit",98},{"Sunny",99}});
    // dispaly all data
    map<string,int> :: iterator iter;
    iter = marksMap.begin(); // it is pointing at first index
    for(iter;iter!=marksMap.end(); iter++)
    {
        // cout<<(*iter).first<<" "<<(*iter).second<<endl;
        cout<<iter->first<<" "<<iter->second<<endl;
    }
    cout<<"size of map: "<<marksMap.size()<<endl;
    cout<<"is Empty: "<<marksMap.empty()<<endl;

   
    return 0;
}