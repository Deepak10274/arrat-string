#include<iostream>
using namespace std;
int main()
{
string str="deepak";
for(int i=str.length()-1;i>=0;i--)
{
    cout<<str[i]<<" ";
}
cout<<endl;

// another method to reversing the string 
int start=0;
int end=str.size()-1;
while(start<end)
{
    swap(str[start],str[end]);
    start++;
    end--;
}
for(int i=0;i<str.size();i++){
    cout<<str[i]<<" ";
}
    return 0;
}

// in the reverse we donot have to give any condition there 