#include<iostream>
using namespace std;
int max(int arr[4][3],int row,int col)
{
    int sum=0;
    int index=-1;

    for(int i=0;i<row;i++)
    {
            int total=0;
        for(int j=0;j<col;j++)
        {
            total+=arr[i][j];
            if(sum<total)
            sum=total;
            index=i;
        }
    }
    return index;
}
int main()
{
int arr[4][3]={1,2,3,4,5,6,7,8,9,0,9,8};
int row=4;
int col=3;
cout<<max(arr,row,col);

    return 0;
}