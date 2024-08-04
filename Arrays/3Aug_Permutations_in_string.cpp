#include <iostream>
using namespace std;

bool checkEqual(int count1[], int count2[]){

    for (int i = 0; i < 26; i++){

        if (count1[i] != count2[i]){
            return false;
        }
    }

    return true;
}

bool PermuteString(string s1, string s2){

    int count1[26] = {0};

    //  CHARACTER  COUNT OF SUBSTRING
    for (int i = 0; i < s1.length(); i++){
        count1[s1[i] - 'a']++;
    }

    // TRAVERSE THROUGH S2 in WINDOW

    int i = 0;
    int wind_size = s1.length();
    int count2[26] = {0};

    while (i < wind_size && i < s2.length()) {
        int index = s2[i] - 'a';
        count2[index]++;
        i++;
    }

    if (checkEqual(count1, count2)) {
        return true;
    }

    while (i < s2.length()) {
        count2[s2[i] - 'a']++;
        count2[s2[i - wind_size] - 'a']--;
        i++;

        if (checkEqual(count1, count2)) {
            return true;
        }
    }

    return false;
}


int main() {
    int count1[26] = {0};
    string str1;
    string str2;
    cout << "Enter main string : ";
    getline(cin, str2);

    cout << "Enter the sustring : ";
    cin >> str1;

    //  CHARACTER  COUNT OF SUBSTRING
    cout << PermuteString(str1, str2);
}