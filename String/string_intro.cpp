// String is a class that defines object that be represented as stream of charcter
#include<iostream>
#include<string> // string class is defined in this header file
#include<cstring>
#include<sstream> // contain istringstream class
using namespace std;
void change(string &str) // use refernce varaible or pointer to change its content bacuse string is pass by value
{
    str = "abcde"; // changing value is str
    return;
}
int main()
{
    // Way to declare a string in c++
    // 1. using charcter array // it allocate memeory static
    // char str[] = "abcde";
    // char str1[] = {'a','b','c','d','e','\0'}; // here we need to spacify null at the end
    // 2. using string class
    // string str = "abcde"; // it allocate memory dynamically and manage there size automatically
    // 3. using char pointer
    // const char * str = "abcde"; // it is immutable but in c it is mutable and no need to use const
    // Declare a string
    // string str;       // here str is object of string class
    // // input string
    // cout<<"Enter String "<<endl;
    // // cin >> str; // cin only input single word
    // getline(cin,str); // getline take input whole line
    // // Member functions that is defined in string class, we can use them by using object of string
    // // push_back(char):- put a char at the end of string
    // str.push_back('D');

    // // pop_back() :- remove a char from string
    // str.pop_back();

    // // output string
    // cout<<"String: "<<str<<endl; // cout read till not encouter null char

    // Capacity function
    // string str = "Munna kumar cse"; // initializing the string object at time of declaration
    // cout<<"Intial string: "<<str<<endl;
    // // resize(size you want):- it resize our string
    // str.resize(5);
    // cout<<"String after Resize: "<<str<<endl;
    // cout<<"Capacity of string: "<<str.capacity()<<endl;
    // cout<<"Length of string: "<<str.length()<<endl;
    // // Decreasing the capacity of string
    // str.shrink_to_fit();
    // cout<<"New Capacity of string: "<<str.capacity()<<endl;

    // iterator function:- use to iterate the string
    // string str = "geekforgeek";
    // // declaring iterator
    // string :: iterator it;
    // // declaring reverse iterator
    // string :: reverse_iterator it1;
    // // display string
    // for(it = str.begin(); it != str.end(); it++)
    // {
    //     cout<<*it; // use dereferance operator because iterator is a pointer
    // }
    // cout<<endl;
    // // display reverse string
    // for(it1 = str.rbegin(); it1 != str.rend(); it1++)
    // {
    //     cout<<*it1;
    // }
    // cout<<endl;
    // Manipulating function
    // string str1 = "geeksforgeek"; or we can also use
    // string str1("geeksforgeek");
    // string str2 = "munna kumar";
    // char ch[30]; // charcter array of max size 30
    // // copy(char_arr,length of copied string,pos of target array)
    // str1.copy(ch,5,0);
    // cout<<"Char array is: "<<ch<<endl;

    // // Swap():- use to swap two string
    // cout<<"String 1 before swap "<<str1<<endl;
    // cout<<"String 2 before swap "<<str2<<endl;
    // str1.swap(str2);
    // cout<<"String 1 after swap "<<str1<<endl;
    // cout<<"String 2 after swap "<<str2<<endl;

    // some other function to manipulate the string
    // way to initialize string
    string str1 = "munna kumar"; // using assign operator
    string str2 = str1;          // using assignment operator
    string str3("munna kumar"); // using constructor
    string str4(str2);           // pass another string into constructor
    string str5(5,'#');          // intilize 5 time # in str4 
    string str6(str1,6,5);       // by part of string 6- starting index of str1 , 5- end index of str1
    cout<<"Strings are: "<<endl;
    cout<<str1<<endl;
    cout<<str2<<endl;
    cout<<str3<<endl;
    cout<<str4<<endl;
    cout<<str5<<endl;
    cout<<str6<<endl;
    // clear()- delete all char from the string
    // str1.clear();
    cout<<str1<<endl;
    // empty()- check whether string is empty or not: -if empty return 1 else retun 0
    if(str1.empty() == 1)
        cout<<"string 1 is empty"<<endl;
    else 
        cout<<"string 1 is not empty"<<endl;
    // length()- finding length of strig
    int len = str3.length(); // same as str3.size()
    cout<<"length: "<<len<<endl;

    // Access string charcter:- two way first use at(index) function and second use [index] operator
    char ch = str3.at(2); // same as str[2]
    cout<<"Third charcter is: "<<ch<<endl;
    char first_char = str3.front(); // same as str3[0]
    char last_char = str3.back();   // same as str3[len-1]
    cout<<"First Char is: "<<first_char<<endl;
    cout<<"Last char is: "<<last_char<<endl;

    // c_str():- return null terminated char array version of string
    const char *charStr = str3.c_str();
    // printing char array
    // for(int i=0; charStr[i] != '\0'; i++)
    // {
    //     cout<<charStr[i];
    // }
    // cout<<endl;
    printf("char array: %s\n",charStr);

    // append:- add the argument string at the end
    str3.append(" mehra"); // same as str3 += " mehra";
    cout<<"String after append: "<<str3<<endl;

    // another version of string:- add part of another string at the end
    str3.append(str1,0,5); // add str1 part from oth index to 5th index
    cout<<"String after adding another: "<<str3<<endl;

    //  find():- returns index where pattern is found.
    //  If pattern is not there it returns predefined
    //  constant npos whose value is -1
    if(str3.find(str1) != string :: npos)
    {
        cout<<"Str1 is found in str3 at "<<str3.find(str1)<<" pos"<<endl;
    }
    else{
        cout<<"str1 is not found in str3"<<endl;
    }
    // find_first_of(str):- return first index where found
    cout<<"Index: "<<str3.find_first_of(str1)<<endl;
    // find_last_of(str):- retunr last index where found
    cout<<"Index: "<<str3.find_last_of(str1)<<endl;
    //  substr(a, b) function:- returns a substring of b length
    //  starting from index a
    cout<<"Substring is: "<<str3.substr(0,5)<<endl;
    //  if second argument is not passed, string till end is
    // taken as substring
    cout<<"Substrung is: "<<str3.substr(0)<<endl;

    //  erase(a, b) deletes b characters at index a
    cout<<"String after erase "<<str3.erase(17,5)<<endl;

    //  replace(a, b, str)  replaces b characters from a index by str
    string str7 = "Rahul";
    cout<<"String after replace: "<<str3.replace(0,5,str7)<<endl; // 0- start index of str3, 5-char replace
    // insert(pos_to_begin,str_to_insert):- insert str at pos which will you give
    str3.insert(0,"Rahul");
    cout<<"string after insertion: "<<str3<<endl; // insert substr Rahul at 0th index


    // How to tokenize a string around a char or
    // How to split a string around a char in c++
    // Note:- in c we can use strtok(str,char) function, where str = char array and char = around split
    // in c++ we can also use strtok function but we have to pass address of first char of string 
    // because in c++ string is a class
    // syntex: - strtok(&str[0],char), where &str[0]:- address of first char, char - split around
    // implementation:- 
    string str8 = "abc@def@ghi@jkl"; // tokenize around @
    char * token = strtok(&str8[0],"@"); // this function return a char pointer to fisrt string
    // printing all token using while loop
    while(token != NULL)
    {
        // print that token
        cout<<token<<endl;
        // update that token to pointing null
        token = strtok(NULL,"@");
    }
    // But there is better way to do same thing in c++
    // convert into in stringstream using istringstream class
    // then use getline function

    string str9 = "abc@def@ghi@jkl";
    istringstream var(str9); // converting string into stringstream using object of istringstream class
    // now use getline(object,string,deli):
    // where object: -object of istringstream, string:- string where you want to store
    // deli:- around which char you want to split
    string token1;
    while(getline(var,token1,'@'))
    {
        cout<<token1<<endl;
    }

    // how to compare two string:- we can use == opeartor
    // it return 1 if equal else return 0
    string str10 = "abc";
    string str11 = "abc";
    // cout<<(str10 == str11)<<endl;
    (str10 == str11)?cout<<"strings are equal"<<endl:cout<<"Not equal"<<endl;

    // how to convert any number to string :- use to_string(num) fun
    int num = 12345; // we can also use float,double,long long int etc..
    string str12 = to_string(num);
    cout<<"String is: "<<str12<<endl;

    // how to convert string to int:- use stoi(string):- stoi full form: -string to int
    string str13 = "1234567";
    int n = stoi(str13);
    cout<<"Num is: "<<n<<endl;

    // String is pass by value or refernce:- it is pass by value
    string str14 = "12345";
    cout<<"String before pass: "<<str14<<endl;
    change(str14);
    cout<<"String after pass: "<<str14<<endl;

    // concatenation:- means joining the two string
    // Two ways: 
    // 1:- str1 = str1 + str2 :- it first make a new string in the memory then copy content of str1 into new string
    // then append other string into new string
    // 2:- str1 += str2; :- doesn't make new string in memory so it is faster then first one
    string s1 = "munna";
    string s2 = " kumar";
    // s1 = s1 + s2; // slow
    s1 += s2;     // fast
    cout<<s1<<endl;
    return 0;
}