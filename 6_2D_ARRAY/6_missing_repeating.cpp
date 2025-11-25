#include<iostream>
#include<vector>
using namespace std;
int main()
{

int arr[8]={1,2,3,4,5,6,6,8};

vector<int>count(8,0);
for(int i=1;i<=8;i++)
{
    count[arr[i]]++;
}
int repeat=-1;
int dublicate=-1;
for(int i=1;i<=count.size();i++)
{
     if(count[i]%2==0)
    
    dublicate=i;
     cout<<endl;
     if(count[i]==2)
   repeat=i;
     }
     cout<<repeat<<" "<<dublicate;



}