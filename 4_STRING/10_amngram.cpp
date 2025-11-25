#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
string str1="deepak";
string str2="kapdee";
// checking wheatheer it is anamgram or not 
sort(str1.begin(),str1.end());
cout<<str1;
// simmillarly we can sort  the second string 
cout<<endl;
sort(str2.begin(),str2.end());
cout<<str2<<"";
//now we can comaprinf 
if(str1.length()!=str2.length())
cout<<"not pallindrome";
cout<<endl;
//checking the every character is matching or not 
if(str1==str2)
cout<<"amangram";
else
cout<<"not amangram";
    return 0;
}