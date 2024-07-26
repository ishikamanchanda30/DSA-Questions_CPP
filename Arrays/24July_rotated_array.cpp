#include <iostream>
#include <vector>
using namespace std;

void Rotate(vector<int>arr, int k,int n) {
    int temparr[n];

    for ( int i = 0; i <n; i++) {
        temparr[(i+k)%n]=arr[i];
    }
    for ( int i = 0; i <n; i++) {
        cout << temparr[i] << ", ";

    }
}

int main() {
    int n;
    cout <<"Size of Arr : ";
    cin >> n;
    vector<int> arr(n);
    for ( int i = 0; i <n; i++) {
        cin >> arr[i];
    }
    Rotate(arr,3,n);

    

}