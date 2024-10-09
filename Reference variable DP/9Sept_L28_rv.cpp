#include <iostream>
using namespace std;
void update1(int n) {
    n++;
}
void update2(int& n) {
    n++;
}
int main() {
    // create a reference variable
    // int i = 10;
    // int& j = i;
    // cout <<"i :" << i<<endl;
    // i++;
    // cout <<"i++ : "<< i<<endl;
    // j++;
    // cout <<"j++ :"<< j<<endl;
    // reference variable points to the same memory

    int n;
    cin >> n;
    cout << "Before : "<< n ;
    update1(n);
    cout <<"\nAfter : "<< n;
    update2(n);
    cout <<"\nAfter update2 : "<< n;

    int *arr = new int[n];
    
}