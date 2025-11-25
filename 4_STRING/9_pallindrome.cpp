#include <iostream>
#include <string>   // include this for std::string
using namespace std;

int main() {
    string a = "naman";   // try changing to "hello" or "racecar"
    int start = 0;
    int end = a.length() - 1;

    while (start < end) {
        if (a[start] != a[end]) {
            cout << "Not a palindrome";
            return 0;   // exit immediately
        }
        start++;
        end--;
    }

    cout << "It is a palindrome";
    return 0;
}
