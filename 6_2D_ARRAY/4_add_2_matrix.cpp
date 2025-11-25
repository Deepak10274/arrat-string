#include<iostream>
using namespace std;
int add(int arr[3][4],int arr1[3][4],int row,int col,int ans[3][4])
{
for(int row=0;row<3;row++)
{
    for(int col=0;col<4;col++)
    {
        ans[row][col]=arr[row][col]+arr1[row][col];
    }
}
for(int row=0;row<3;row++)
{
    for(int col=0;col<4;col++)
    {
        cout<<ans[row][col]<<" ";
    }
}
}
int main()
{
int arr[3][4]={1,2,3,4,5,6,7,8,9,0,99,89};
int arr1[3][4]={0,98,7,6,7,5,4,4,3,2,33,4};
int ans[3][4];
int row=3;
int col=4;
cout<<add(arr,arr1,row,col,ans);

    return 0;
}