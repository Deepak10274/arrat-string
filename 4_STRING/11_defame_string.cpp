#include<iostream>
using namespace std;
int main()
{

string str = "1.1.1.1";
string ans;
for (int i = 0; i < str.size(); i++) {
    if (str[i] == '.') {
        ans = ans + "[.]";
    } else {
        ans = ans + str[i];
    }
}
for(int i=0;i<ans.size();i++) {
    cout << ans[i] << " ";
}
}