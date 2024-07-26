#include <iostream>
#include <vector>
using namespace std;

vector<char> RevString (vector<char> s ) {

    int st = 0;
    int end = s.size()-1;
    int mid = st + (end - st)/2;
    cout << "Start : " << st << "\nEnd : " << end << "\nMid : " << mid;
    while(st <= mid) {
        cout << "\n\n--- BEFORE SWAPPING ---" << endl;
        cout <<"Start char: " << s[st] << endl;
        cout << "End char : " << s[end] << endl;
        swap(s[st],s[end]);
        cout << "\n---AFTER SWAPPING ---" << endl;
        cout <<"Start char: " << s[st] << endl;
        cout << "End char : " << s[end] << endl;
        cout << endl;

        st++;
        end--;
    }
    cout << "\nReversed String : ";
    for (int i = 0; i < s.size(); i++){
        cout << s[i];
    }

    return s;


}

int main() {
    vector<char> s;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        char c;
        cin >> c;
        s.push_back(c);
    }
    RevString(s);
    
}