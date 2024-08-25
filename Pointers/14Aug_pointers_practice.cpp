#include <iostream>
using namespace std;

int main() {
    // Null pointer
    int *p = 0;
    int num = 7;
    // segmentation fault
    // *p = num;
    // works :
    p = &num;
    cout << p;
}