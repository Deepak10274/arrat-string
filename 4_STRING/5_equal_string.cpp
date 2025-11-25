#include<iostream>
using namespace std;
int main()
{
    string str1="deepak";
    string str2="deeepak";
    for(int i=0;i<str1.length();i++)
   
  {
    if(str1.length()!=str2.length())
    {
        cout<<"not equal";
        break;
    }
  }
     cout<<"equal sring";
     return 0;
}