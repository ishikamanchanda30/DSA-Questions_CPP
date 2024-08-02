#include <iostream> 
#include <algorithm>

using namespace std;

int getLength(char strin[]) {
    int length = 0;
    while (strin[length] != '\0') {
        length++;
    }
    return length;
}

bool CheckPalin(char a[]){
    int e = getLength(a)-1;
    int s = 0;
    while( s <=e) {
        if(a[s] != a[e]) {
            return false;
        }
        s++;
        e--;        
    }
    return true;
}



int main() {
    char s[20];
    cin >> s;
    cout << CheckPalin(s);

}