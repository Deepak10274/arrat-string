#include<iostream>
using namespace std;
int main()
{
string s="deepak  singh";
cout<<s;


// by taking the input 
// string s1;
// cin>>s1;
// cout<<s1;

cout<<endl;
//finding the length of the stroing 
cout<<s.length();

cout<<endl;
// string str1;
// getline(cin,str1);
// cout<<str1;

string str2="deepak is a \"good\" boy";
cout<<str2;
cout<<endl;
cout<<s.size();



// concatenation of the string 
string s2="abc";
string s3="dfg";
string s4=s2+s3;
// adding the element at the last 
s4.push_back('d');
// simmillarly pop is using the delete of the element 
cout<<s4;


    return 0;
}