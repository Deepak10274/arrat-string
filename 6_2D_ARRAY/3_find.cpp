#include <iostream>
using namespace std;

bool print(int arr[4][3],int row,int col,int target) {
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 3; j++) {
            if(arr[i][j]==target)
            return 1;
        }
        
    }
    return 0;
}

int main() {
    int arr[4][3] = {1,2,3,4,5,67,8,9,0,99,89,1};
    cout<<print(arr,4,3,200);
    return 0;
}
