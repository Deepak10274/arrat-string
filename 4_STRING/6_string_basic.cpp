#include<iostream>
using namespace std;
int main()
{

// stroing without giving the size 
char c[]={'d','e','e','p','a','k'};
cout<<c <<" " <<" ";
for(int i=0;i<6;i++)
{
    cout<<c[i]<<" ";
}
// printing by taking the size 
// char arr[20];
// cin>>arr;
// // if we storing the null character of the any perticular index so it will not 
// // print the next value 
// arr[2]='\0';  // printing the only 0 ans 1 index
// cout<<arr<<" ";
string s="singh";
cout<<s;

    return 0;
}