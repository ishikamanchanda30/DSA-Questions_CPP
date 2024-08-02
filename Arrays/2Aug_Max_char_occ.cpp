#include <iostream>

using namespace std;

int main() {
    string s;
    cout << "Enter the string : ";
    cin >> s;

    int arr[26] ={0};
    for(int i=0; i <  s.length() ; i++) {
        if ( s[i] >= 'Z' && s[i] <= 'A')  {
            arr[s[i] - 'A']++;
        }
        else {
            arr[s[i] - 'a']++;
        }
    }

    int maxi = 0;
    int ans = -1;
    for(int i=0; i <  26 ; i++) {
        if (maxi < arr[i]) {
            ans = i;
            maxi = arr[i];
        }
    }
    char ch = 'a' + ans;
    cout << ch;
  
}