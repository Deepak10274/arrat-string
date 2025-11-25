#include<iostream>
using namespace std;
int main()
{
    string str="deepak singh";
    cout<<str.length();
    cout<<endl;
    for(int i=0;i<str.length();i++)
    {
        cout<<str[i]<<" ";
    }
    cout<<endl;
    cout<<str<<" ";
    cout<<endl;
    int count =0;
    for(int i=0;i<str.length();i++)
    {
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u')
        {
          count =count+1;
        }
    }
    cout<<count<<" ";
}