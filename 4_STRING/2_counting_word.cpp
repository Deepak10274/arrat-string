

#include<iostream>
using namespace std;
int main()
{
string str="deepak         singh";
int count=1; // strating by one beacause one count is ther ealready 

 for(int i=0;i<str.length();i++)
    {
        if(str[i]==' ')
        {
          count =count+1;
        }
    }
    cout<<count<<" ";
}