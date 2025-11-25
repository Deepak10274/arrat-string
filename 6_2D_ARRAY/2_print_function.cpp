#include <iostream>
using namespace std;

void print(int arr[4][3]) {
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 3; j++) {
            cout << arr[i][j] << " ";
        }
        
    }
}

int main() {
    int arr[4][3] = {1,2,3,4,5,67,8,9,0,99,89,1};
    print(arr);
    return 0;
}
