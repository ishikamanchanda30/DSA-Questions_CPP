#include<iostream>
#include<vector>
using namespace std;



int main() {
    int arr[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    int arr1[2][3] = {{1,2,3},{4,5,6}};
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i = 0;i<n;i++) {
        for(int j = 0;j<i;j++) {
            swap(arr[i][j],arr[j][i]);
        }
    }

    for(int i =0; i<n;i++) {
        for(int j = 0; j<n;j++) {
            cout<< "["<< arr[i][j]<< "]";
        }
        cout <<endl;
    }
}