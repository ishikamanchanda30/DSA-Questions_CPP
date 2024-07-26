#include <iostream>
using namespace std;

bool CheckPalindrome(char stri[]) {
    int len = getLength(stri);
    cout << len;
    int start = 0;
    int end = len - 1;
    int mid = (start + end)/2;
    while (start < mid) {
        if (stri[start] != stri[end]) {
            cout << stri[start] << " " << stri[end];
            return 0;
        }
        else {
            start++;
            end--;
        }
    }
    return 1;   

}

int main() {
    char s[20];
    cin >> s;
    cout << CheckPalindrome(s) <<endl;

}