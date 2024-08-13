#include <iostream>
using namespace std;
/*
    x , n , m 

    (x^n) % m
*/

int main() {
    int result = 1;
    int x , n , m;
    cin >> n;
    while (n > 0 ) {
        if (n&1) {
            result = (result * x) % m;
            
        }
    }
}