#include<iostream>
#include<vector>
using namespace std;
void occurance(int arr[8])
{
vector<int>count(9,0);
for(int i=0;i<=7;i++)
{
    count[arr[i]]++;
}
for(int i=1;i<count.size();i++)
{
    cout<<count[i]<<" "<<i<<" ";
    cout<<endl;
}
}
int main()
{

int arr[8]={1,2,3,2,4,5,7,8};
occurance(arr);

    return 0;
}