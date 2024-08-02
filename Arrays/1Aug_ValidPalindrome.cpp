#include <iostream>
using namespace std;

char lower(char ch) {
    if ( ch >='a' && ch <='z' ) {
        return ch;
    }
    else 
        return ch - 'A' + 'a';
}


bool isPalindrome(string s)
{
    // remove characters
    int len = s.length();
    string temp = "";
    for (int i = 0; i < len; i++)
    {
        if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= '0' && s[i] <= '9'))
        {
            temp.push_back(lower(s[i]));
        }
    }
    int st = 0;
    int en = temp.length();
    while (st <= en)
    {
        if (temp[st] != temp[en])
        {
            return false;
        }
        st++;
        en--;
    }
    return true;
}

int main() {
    string s = " ";
    cin >> s;
    cout << s;
    cout << isPalindrome(s) << endl;
}