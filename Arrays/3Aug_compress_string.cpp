#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    vector<char> chars = {'a', 'a','b','b','b','c','c','g'};

    int arr[26] = {0};
    int i = 0;
    while ( i < chars.size() ) {
        arr[chars[i] - 'a']++;
        i++;
    } 
    for (int i = 0; i < 26; i++) {
        cout << arr[i] << " ";
    }

    string newChar= " ";
    for (int i = 0; i < 26; i++) { 
        if(arr[i]!=0 && arr[i] != 1) {
            cout << arr[i];
            char element = i + 'a';
            newChar.push_back(element);
            newChar.append(to_string(arr[i]));
  
        }
        else if (arr[i] == 1) {
            char element = i + 'a';
            newChar.push_back(element);
        }

    }
    cout <<"\nCompressed string : " << newChar;



}